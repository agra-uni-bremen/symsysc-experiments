//#include <klee_conf.h>
#include <systemc.h>
#include <testrunner.h>
#include <plic/VRVPLIC.h>
#include <plic/VRVPLIC___024root.h>
#include <iostream>

#include <boost/preprocessor/repetition/repeat.hpp>
#define IO_INIT_PENDING(z, n, data) m_dut.io_has_pending_irq_##n(pending##n);
#define PLIC_RTL_NUM_IRQS 53

#define RESET_PENDING(z, n, data)                                                                                      \
	if (m_dut.rootp->RVPLIC__DOT__pending_interrupts_##n)                                                              \
		pending##n = false;

#define SET_PENDING(z, n, data) \
	if(data==n)                            \
		pending##n = true;

#define ASSERT_PENDING(z, n, data) \
	if(data==n)                     \
		assert(runner.pending##n.read());

#define ASSERT_SPECIFIC_NONPENDING(z, n, data) \
	assert(!runner.pending##n.read());

#define INIT_SIGNALS(z,n,data) \
	sc_core::sc_signal<bool, SC_MANY_WRITERS> pending##n;

#define SB_PRIO_VAL(z,n,data) \
	assert(runner.m_dut.rootp->RVPLIC__DOT__interrupt_priorities_##n == data);

#define SB_CHECK_PRIO(z,n,data) \
    if(data==n)                               \
    	assert(runner.m_dut.rootp->RVPLIC__DOT__interrupt_priorities_##n == (value&0b111));                               \
    else                               \
		assert(runner.m_dut.rootp->RVPLIC__DOT__interrupt_priorities_##n == 0);

#define SB_PENDING_VAL(z,n,data) \
	assert(runner.m_dut.rootp->RVPLIC__DOT__pending_interrupts_##n == data);

#define SB_CHECK_PENDING(z,n,data) \
    if(data==n)                               \
    	assert(runner.m_dut.rootp->RVPLIC__DOT__pending_interrupts_##n == 1);                               \
    else                               \
		assert(runner.m_dut.rootp->RVPLIC__DOT__pending_interrupts_##n == 0);


static constexpr uint32_t kPlicClaimReg = 0x200004;
static constexpr uint32_t kPlicEnableReg = 0x2000;
static constexpr uint32_t kPlicThresholdReg = 0x200000;

struct plic_test_runner : public test_runner {
	VRVPLIC m_dut;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq_pending;
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, INIT_SIGNALS, void)

	bool was_triggered = false;
	bool was_cleared = false;

	int interrupt_time = -1;
	uint32_t interrupt = PLIC_RTL_NUM_IRQS;
	uint32_t interrupt2 = PLIC_RTL_NUM_IRQS;

	SC_HAS_PROCESS(plic_test_runner);
	explicit plic_test_runner(sc_clock& clock) : test_runner(clock), m_dut{"rtl plic"} {
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

		SC_METHOD(resetPendings);
		sensitive << clock.negedge_event();

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

	void resetPendings() {
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, RESET_PENDING, void)
	}

	void irqPendingChange() {
		if(irq_pending.read()) {
			was_triggered = true;
			was_cleared = false;
			call_read(kPlicClaimReg);
		} else if(was_triggered) {
			was_cleared = true;
			was_triggered = false;
		}
	}

	void run() override {
		test_runner::run();

		if(neg == interrupt_time) {
			if(interrupt < PLIC_RTL_NUM_IRQS)
				BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SET_PENDING, interrupt)
			if(interrupt2 < PLIC_RTL_NUM_IRQS) {
				BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SET_PENDING, interrupt2)
				interrupt2 = PLIC_RTL_NUM_IRQS;
			}
			interrupt_time = -1;
		}
	}
};

uint32_t calculate_enable(uint32_t id) {
	if(id <= 0 || id >= PLIC_RTL_NUM_IRQS) {
		return 0;
	}
	uint32_t shift = id<32?0:32;
	return 1UL << (id-shift);
}

void functional_test_basic(plic_test_runner &runner) {
	// test valid interrupt number
	uint32_t id = klee_int("interrupt number");
	//klee_assume(id > 0);
	//klee_assume(id < PLIC_RTL_NUM_IRQS);

	minikernel_step(); // 0ns

	uint32_t prio_threshold = 7; // 0 für mutationstests!
	runner.call_write(kPlicThresholdReg, prio_threshold);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable = calculate_enable(id);
	uint32_t en_addr_offset = id<32?0:sizeof(uint32_t);
	uint32_t enable_address = kPlicEnableReg+en_addr_offset;
	runner.call_write(enable_address, enable);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 50ns - 80ns
	}

	uint32_t prio = 1;
	runner.call_write(sizeof(uint32_t)*id, prio);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 90ns - 120ns
	}

	auto before = Simcontext::get().getGlobalTime();
	runner.trigger_interrupt(id);
	minikernel_step(); // 130ns, trigger on negedge

	//Is the pending interrupts register changed?
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, ASSERT_PENDING, id)

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 140ns - 150ns
	}

	assert(!runner.was_triggered);

	minikernel_step(); // 160
	auto after = Simcontext::get().getGlobalTime();
	assert(after-before == sc_core::sc_time(40, sc_core::SC_NS));

	for(unsigned i=0;i<4;i++) {
		assert(id > 0 && id < PLIC_RTL_NUM_IRQS ? runner.was_triggered : !runner.was_triggered);
		minikernel_step(); // 170ns - 200ns
	}
	if(id > 0 && id < PLIC_RTL_NUM_IRQS)
		assert(runner.rw_value == id);

	runner.call_write(kPlicClaimReg, id);
	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 210ns - 220ns
	}

	// was interrupt cleared by claiming?
	assert(id > 0 && id < PLIC_RTL_NUM_IRQS ? runner.was_cleared : !runner.was_cleared);
	assert(!runner.was_triggered);

	//The pending interrupt signals should be cleared after claim
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, ASSERT_SPECIFIC_NONPENDING, void)

	for(unsigned i=0;i<2;i++) {
		minikernel_step(); // 230ns - 240ns, second part of write
	}
}


void functional_test_priority(plic_test_runner& runner) {
	uint32_t id_a = klee_int("id a");
	uint32_t id_b = klee_int("id b");
	klee_assume(id_a != id_b);
	klee_assume(id_a > 0);
	klee_assume(id_a < PLIC_RTL_NUM_IRQS);
	klee_assume(id_b > 0);
	klee_assume(id_b < PLIC_RTL_NUM_IRQS);
	uint32_t prio_a = klee_int("prio_a");
	uint32_t prio_b = klee_int("prio_b");
	klee_assume(prio_a > 0);
	klee_assume(prio_b > 0);

	minikernel_step(); // 0ns

	uint32_t prio_threshold = 7; // 0 für mutationstests!
	runner.call_write(kPlicThresholdReg, prio_threshold);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	if(id_a<32 && id_b<32) {
		uint32_t enable = calculate_enable(id_a) | calculate_enable(id_b);
		runner.call_write(kPlicEnableReg, enable);
		for(unsigned i=0;i<4;i++) {
			minikernel_step(); // 50ns - 80ns
		}
	} else if(id_a>=32&&id_b>=32) {
		uint32_t enable = calculate_enable(id_a) | calculate_enable(id_b);
		runner.call_write(kPlicEnableReg+sizeof(uint32_t), enable);
		for(unsigned i=0;i<4;i++) {
			minikernel_step(); // 50ns - 80ns
		}
	} else {
		uint32_t enable_a = calculate_enable(id_a);
		uint32_t en_addr_offset_a = id_a<32?0:sizeof(uint32_t);
		uint32_t enable_address_a = kPlicEnableReg+en_addr_offset_a;
		runner.call_write(enable_address_a, enable_a);
		for(unsigned i=0;i<4;i++) {
			minikernel_step(); // 50ns - 80ns
		}
		uint32_t enable_b = calculate_enable(id_b);
		uint32_t enable_address_b = kPlicEnableReg-(en_addr_offset_a-sizeof(uint32_t));
		runner.call_write(enable_address_b, enable_b);
		for(unsigned i=0;i<4;i++) {
			minikernel_step(); // 50ns - 80ns
		}
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
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, ASSERT_PENDING, id_a)
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, ASSERT_PENDING, id_b)

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
		first_itr = id_a > id_b ? id_b : id_a;
		second_itr = id_a > id_b ? id_a : id_b;
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
	uint32_t id = klee_int("id");
	klee_assume(id > 0);
	klee_assume(id < PLIC_RTL_NUM_IRQS);
	uint32_t prio = klee_int("priority");
	uint32_t threshold = klee_int("priority threshold");

	minikernel_step(); // 0ns

	runner.call_write(kPlicThresholdReg, threshold);
	for(unsigned i=0;i<4;i++) {
		minikernel_step(); // 10ns - 40ns
	}

	uint32_t enable = calculate_enable(id);
	uint32_t en_addr_offset = id<32?0:sizeof(uint32_t);
	uint32_t enable_address = kPlicEnableReg+en_addr_offset;
	runner.call_write(enable_address, enable);
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

	if(((prio&0b111) > 0) && ((prio&0b111) > (threshold&0b111))) {
		assert(runner.was_triggered); // fails, but known bug
	} else {
		assert(!runner.was_triggered);
	}
}

void interface_test_write(plic_test_runner &runner) {
	uint32_t address = klee_int("address");
	uint32_t value = klee_int("value");

	runner.call_write(address, value);
	for(unsigned i=0;i<4;++i) {
		minikernel_step();
	}

	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SB_PENDING_VAL, 0)
			assert(runner.m_dut.rootp->RVPLIC__DOT__claim_complete == 0);

	uint32_t adrc = address&0x3fffff;
	if(adrc==kPlicThresholdReg) {
		assert(runner.m_dut.rootp->RVPLIC__DOT__interrupt_threshold == (value&0b111));
	} else {
		assert(runner.m_dut.rootp->RVPLIC__DOT__interrupt_threshold == 0);
	}
	if(adrc==kPlicEnableReg) {
		assert(runner.m_dut.rootp->RVPLIC__DOT__interrupts_enabled == (value&(~1)));
	} else if(adrc==kPlicEnableReg+4) {
		assert(runner.m_dut.rootp->RVPLIC__DOT__interrupts_enabled == ((0x1fffffU&(uint64_t)value)<<32));
	} else {
		assert(runner.m_dut.rootp->RVPLIC__DOT__interrupts_enabled == 0);
	}
	if(adrc >= 0x04 && adrc <= 0x0+52*4) {
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SB_CHECK_PRIO, adrc/4)
	} else {
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SB_PRIO_VAL, 0)
	}
}

void interface_test_read(plic_test_runner &runner) {
	uint32_t address = klee_int("address");

	runner.call_read(address);
	for(unsigned i=0;i<4;++i) {
		minikernel_step();
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SB_PRIO_VAL, 0)
				assert(runner.m_dut.rootp->RVPLIC__DOT__interrupts_enabled == 0);
		assert(runner.m_dut.rootp->RVPLIC__DOT__interrupt_threshold == 0);
		assert(runner.m_dut.rootp->RVPLIC__DOT__claim_complete == 0);
		BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, SB_PENDING_VAL, 0)
	}
}

int main(int argc, char* argv[])
{
	sc_clock clk{"plic_clk", sc_core::sc_time(20, sc_core::SC_NS)};
	plic_test_runner tr(clk);

	Simcontext::get().initialize();

	if(argc == 2) {
		if(strcmp(argv[1], "functional_test_basic") == 0) {
			functional_test_basic(tr);
		} else if(strcmp(argv[1], "functional_test_priority") == 0) {
			functional_test_priority(tr);
		} else if(strcmp(argv[1], "functional_test_threshold") == 0) {
			functional_test_threshold(tr);
		} else if(strcmp(argv[1], "interface_test_write") == 0) {
			interface_test_write(tr);
		} else if(strcmp(argv[1], "interface_test_read") == 0) {
			interface_test_read(tr);
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
