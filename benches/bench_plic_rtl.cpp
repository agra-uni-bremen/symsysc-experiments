//#include <klee_conf.h>
#include <systemc.h>
#include <testrunner.h>
#include <plic/VRVPLIC.h>
#include <iostream>

#include <boost/preprocessor/repetition/repeat.hpp>
#define IO_INIT_PENDING(z, n, data) m_dut.io_has_pending_irq_##n(pendings[n]);
#define PLIC_RTL_NUM_IRQS 52 // TODO should be 53, i think

static constexpr uint32_t kPlicClaimReg = 0x200004;
static constexpr uint32_t kPlicEnableReg = 0x2000;
static constexpr uint32_t kPlicThresholdReg = 0x200000;

/*
 *TODO symbolic ID problem:
 * priority cannot be written due to RegisterRange vector size (fork failed)
 * same with interface_tests
 *
 * - Test case without setting enabled?
 */

struct plic_test_runner : public test_runner {
	VRVPLIC& m_dut;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq_pending;
	std::array<sc_core::sc_signal<bool, SC_MANY_WRITERS>, PLIC_RTL_NUM_IRQS> pendings;

	bool was_triggered = false;
	bool was_cleared = false;

	int interrupt_time = -1;
	uint32_t interrupt = PLIC_RTL_NUM_IRQS;
	uint32_t interrupt2 = PLIC_RTL_NUM_IRQS;

	SC_HAS_PROCESS(plic_test_runner);
	plic_test_runner(sc_clock& clock, VRVPLIC& dut, SimpleBusRtl& bus) : test_runner(clock, bus), m_dut(dut) {
		m_dut.io_irq_pending(irq_pending);

		// expands to IO_INIT_PENDING(z, 0, void) IO_INIT_PENDING(z, 1, void) ... IO_INIT_PENDING(z, count - 1, void)
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, IO_INIT_PENDING, void)
		m_dut.io_sel(m_bus.sel);
		m_dut.io_sb_SBaddress(m_bus.SBaddress);
		m_dut.io_sb_SBvalid(m_bus.SBvalid);
		m_dut.io_sb_SBwdata(m_bus.SBwdata);
		m_dut.io_sb_SBwrite(m_bus.SBwrite);
		m_dut.io_sb_SBsize(m_bus.SBsize);
		m_dut.io_sb_SBready(m_bus.SBready);
		m_dut.io_sb_SBrdata(m_bus.SBrdata);

		m_dut.clk(clock);
		m_dut.reset(idle_reset);

		SC_METHOD(irqPendingChange);
		sensitive << irq_pending;
	}

	void trigger_interrupt(uint32_t id) {
		if(interrupt_time == -1) {
			interrupt_time = neg + 1;
			interrupt = id;
		} else {
			interrupt2 = id;
		}
	}

private:

	void irqPendingChange() {
		if(irq_pending.read()) {
			was_triggered = true;
			was_cleared = false;
			call_read(kPlicClaimReg);
		} else {
			was_cleared = true;
			was_triggered = false;
		}
	}

	void run() {
		test_runner::run();

		if(neg == interrupt_time) {
			pendings[interrupt] = true;
			if(interrupt2 != PLIC_RTL_NUM_IRQS) {
				pendings[interrupt2] = true;
				interrupt2 = PLIC_RTL_NUM_IRQS;
			}
			interrupt_time = -1;
		}
	}
};


void functional_test_basic(plic_test_runner &runner) {
	// TODO: symbolic ID continue testing, also remove assumes to see what happens
	// test valid interrupt number
	uint32_t id = 51;
//	uint32_t id = klee_int("interrupt number");
//	klee_assume(id > 0);
//	klee_assume(id < numberInterrupts);

	minikernel_step(); // 0ns

	uint32_t prio_threshold = 7;
	runner.call_write(kPlicThresholdReg, prio_threshold);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable = 0;
	uint32_t enable_address = kPlicEnableReg;
	if(id > 0 && id < 32) { // enable lower
		enable = 1UL << id;
	} else if(id >= 32 && id <= 51) { // enable upper
		enable = 1UL << (id-32);
		enable_address += sizeof(uint32_t);
	}
	runner.call_write(enable_address, enable);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	uint32_t prio = 1;
	// TODO fork failed
	runner.call_write(sizeof(uint32_t)*id, prio);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	runner.trigger_interrupt(id);
	minikernel_step(); // 130ns, trigger on negedge

	//Is the pending interrupts register changed?
	assert(runner.pendings[id].read());

	auto before = Simcontext::get().getGlobalTime();
	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 140ns - 150ns
	}

	assert(!runner.was_triggered);

	minikernel_step(); // 160
	auto after = Simcontext::get().getGlobalTime();
	assert(after-before == sc_core::sc_time(30, sc_core::SC_NS));

	for(unsigned i=0;i<4;i++) {
		assert(runner.was_triggered);
		minikernel_step(); // 170ns - 200ns
	}
	assert(runner.rw_value == id);

	runner.call_write(kPlicClaimReg, id);
	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 210ns - 220ns
	}

	// was interrupt cleared by claiming?
	assert(runner.was_cleared && "Interrupt was not cleared after claim");
	assert(!runner.was_triggered);

	//The pending interrupt signals should be cleared after claim
	for(int i=0; i<runner.pendings.size(); i++) { // heap use after free if using foreach
		assert(!runner.pendings[i].read());
	}

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 230ns - 240ns, second part of write
	}
}


void functional_test_priority(plic_test_runner& runner) {
	uint32_t id_a = 1;
	uint32_t id_b = 2;
//	uint32_t prio_a = klee_int("prio_a");
//	uint32_t prio_b = klee_int("prio_b");
	uint32_t prio_a = 3;
	uint32_t prio_b = 1;

	minikernel_step(); // 0ns

	uint32_t prio_threshold = 7;
	runner.call_write(kPlicThresholdReg, prio_threshold);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable_lower = 1UL << id_a | 1UL << id_b;
	runner.call_write(kPlicEnableReg, enable_lower);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	runner.call_write(sizeof(uint32_t)*id_a, prio_a);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	runner.call_write(sizeof(uint32_t)*id_b, prio_b);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 130ns - 160ns
	}

	runner.trigger_interrupt(id_a);
	runner.trigger_interrupt(id_b);
	minikernel_step(); // 170ns, trigger on negedge

	//Is the pending interrupts register changed?
	assert(runner.pendings[id_a].read());
	assert(runner.pendings[id_b].read());

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 180ns - 190ns
	}

	assert(!runner.was_triggered);
	minikernel_step(); // 200ns, triggered
	assert(runner.was_triggered);

	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 210ns - 240ns
	}

	uint32_t prio_a3 = prio_a&0b111;
	uint32_t prio_b3 = prio_b&0b111;

	uint32_t first_itr = (prio_a3) > (prio_b3) ? id_a : id_b;
	uint32_t second_itr = (prio_a3) > (prio_b3) ? id_b : id_a;
	if((prio_a3) == (prio_b3)) {
		first_itr = id_a;
		second_itr = id_b;
	}
	assert(runner.rw_value == first_itr);
	runner.call_write(kPlicClaimReg, first_itr);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 250ns - 280ns
	}

	assert(runner.was_triggered);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 290ns - 320ns
	}

	assert(runner.rw_value == second_itr);
	runner.call_write(kPlicClaimReg, second_itr);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 330ns - 360ns
	}

	assert(!runner.was_triggered);
}

void functional_test_threshold(plic_test_runner &runner) {
	uint32_t id = 1;
//	uint32_t prio = 2;
//	uint32_t threshold = 7;
	uint32_t prio = klee_int("priority");
	uint32_t threshold = klee_int("priority threshold");

	minikernel_step(); // 0ns

	runner.call_write(kPlicThresholdReg, threshold);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable_lower = 1UL << id;
	runner.call_write(kPlicEnableReg, enable_lower);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	runner.call_write(sizeof(uint32_t)*id, prio);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	runner.trigger_interrupt(id);
	minikernel_step(); // 130ns, start processing of triggered interrupt

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 140ns - 150ns
	}

	assert(!runner.was_triggered);
	minikernel_step(); // 160ns, triggered

	if((prio&0b111) > (threshold&0b111) || (prio&0b111) == 0) {
		assert(!runner.was_triggered); // fails, but known bug
	} else {
		assert(runner.was_triggered);
	}
}

/*
void invalid_test_id(PlicRtlWrapper& dut, test_runner& runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	// test invalid interrupt number
//	uint32_t id = numberInterrupts;
	uint32_t id = klee_int("interrupt number");
	klee_assume(id < 0 | id >= numberInterrupts);

	minikernel_step(); // 0ns

	runner.trigger_interrupt(id);
	minikernel_step();

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 20ns - 30ns
	}

	assert(!sit.was_triggered);
	minikernel_step(); // 40
	assert(!sit.was_triggered);
}

// -- Ab hier auskommentiert
void invalid_test_priority(PlicRtlWrapper& dut, test_runner& runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	uint32_t id = 51;
//	uint32_t prio = 0;
	uint32_t prio = klee_int("interrupt priority");
	klee_assume(prio <= 0);

	minikernel_step(); // 0ns

	uint32_t prio_threshold = 7;
	runner.call_write(kPlicThresholdReg, reinterpret_cast<uint8_t *>(&prio_threshold), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable = 0;
	uint32_t enable_address = kPlicEnableReg;
	if(id > 0 && id < 32) { // enable lower
		enable = 1UL << id;
	} else if(id >= 32 && id <= 51) { // enable upper
		enable = 1UL << (id-32);
		enable_address += sizeof(uint32_t);
	}
	runner.call_write(enable_address, reinterpret_cast<uint8_t *>(&enable), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	runner.call_write(sizeof(uint32_t)*id, reinterpret_cast<uint8_t *>(&prio), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	minikernel_step(); // 130ns, trigger on negedge
	dut.gateway_trigger_interrupt(id);

	//Is the pending interrupts register changed?
	assert(dut.pendings_[id].read());
	minikernel_step(); // 130ns pt2, start processing of triggered interrupts

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 140ns - 150ns
	}

	assert(!sit.was_triggered);
	minikernel_step(); // 160
	assert(!sit.was_triggered);
}

void invalid_test_threshold(PlicRtlWrapper &dut, test_runner &runner) {
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	uint32_t id = 1;
	uint32_t prio = 6;
	uint32_t threshold = 8;
//	uint32_t prio = klee_int("priority");
//	klee_assume(prio > 0);
//	uint32_t threshold = klee_int("priority threshold");
//	klee_assume(threshold > 7);

	minikernel_step(); // 0ns

	runner.call_write(kPlicThresholdReg, reinterpret_cast<uint8_t *>(&threshold), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable_lower = 1UL << id;
	runner.call_write(kPlicEnableReg, reinterpret_cast<uint8_t *>(&enable_lower), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	runner.call_write(sizeof(uint32_t)*id, reinterpret_cast<uint8_t *>(&prio), sizeof(uint32_t));
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	minikernel_step(); // 130ns, trigger on negedge
	dut.gateway_trigger_interrupt(id);
	minikernel_step(); // 130ns pt2, start processing of triggered interrupts

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 140ns - 150ns
	}

	assert(!sit.was_triggered);
	minikernel_step(); // 160ns, triggered
	assert(!sit.was_triggered);
}
// -- Bis hier auskommentiert
*/

/*
 *TODO: kompletten SimpleBus testen, dann wahrscheinlich eher eine Interface-Methode
 */
void interface_test_read(plic_test_runner &runner) {
//	runner.call_read(klee_int("address"));
	runner.call_read(10);

	for(int i=0;i<4;i++) {
		minikernel_step();
	}
}
void interface_test_write(plic_test_runner &runner) {
//	runner.call_write(klee_int("address"), klee_int("value"));
	runner.call_write(10, 23);

	for(int i=0;i<4;i++) {
		minikernel_step();
	}
}

int main(int argc, char* argv[])
{
	sc_clock clk{"plic_clk", sc_core::sc_time(20, sc_core::SC_NS)};
	VRVPLIC plic("PlicRtlWrappper");
	SimpleBusRtl bus(clk);
	plic_test_runner tr = plic_test_runner(clk, plic, bus);

	Simcontext::get().initialize();

	if(argc == 2) {
		if(strcmp(argv[1], "functional_test_basic") == 0) {
			functional_test_basic(tr);
		} else if(strcmp(argv[1], "functional_test_priority") == 0) {
			functional_test_priority(tr);
		} else if(strcmp(argv[1], "functional_test_threshold") == 0) {
			functional_test_threshold(tr);
//		} else if(strcmp(argv[1], "invalid_test_priority") == 0) {
//			invalid_test_priority(plic, tr);
//		} else if(strcmp(argv[1], "invalid_test_id") == 0) {
//			invalid_test_id(plic, tr);
//		} else if(strcmp(argv[1], "invalid_test_threshold") == 0) {
//			invalid_test_threshold(plic, tr);
		} else if(strcmp(argv[1], "interface_test_read") == 0) {
			interface_test_read(tr);
		} else if(strcmp(argv[1], "interface_test_write") == 0) {
			interface_test_write(tr);
		}
		else
			INFO(std::cout << "Invalid test given." << std::endl);
	} else {
		INFO(std::cout << "No test given." << std::endl);
		//Test info output
		sc_core::sc_time a(1002, sc_core::SC_MS), b (1, sc_core::SC_SEC), c (1, sc_core::SC_FS);
		INFO(std::cout << a.to_string() << " + " << b.to_string() << " = " << (a+b).to_string() << std::endl);
		INFO(std::cout << c.to_string() << " in default units is " << c.to_default_time_units() << " " << sc_core::unit_to_string(sc_core::default_time_unit) << std::endl);
		INFO(std::cout << "Number of registered transports: " << transports.size() << std::endl);
		sc_core::Simcontext::get().printInfo();
	}


	INFO(std::cout << "finished at " << minikernel_current_time() << std::endl);
	return 0;
}
