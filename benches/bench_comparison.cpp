#include <klee_conf.h>
#include <systemc.h>

#include <plic_translated.hpp>

#include <testrunner.h>
#include <plic/VRVPLIC.h>
#include <plic/VRVPLIC___024root.h>

#include <iostream>

#include <boost/preprocessor/repetition/repeat.hpp>
#define IO_INIT_PENDING(z, n, data) m_dut.io_has_pending_irq_##n(pending##n);
#define PLIC_NUM_IRQS 53

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

static constexpr uint32_t maxPriority = 7;

static constexpr uint32_t kPlicClaimReg = 0x200004;
static constexpr uint32_t kPlicEnableReg = 0x2000;
static constexpr uint32_t kPlicThresholdReg = 0x200000;


struct plic_test_runner : public test_runner {
	VRVPLIC m_dut;

	sc_signal<bool> idle_reset;
	sc_signal<bool> irq_pending;
	BOOST_PP_REPEAT(PLIC_NUM_IRQS, INIT_SIGNALS, void)

	bool was_triggered = false;
	bool was_cleared = false;

	int interrupt_time = -1;
	uint32_t interrupt = PLIC_NUM_IRQS;
	uint32_t interrupt2 = PLIC_NUM_IRQS;

	SC_HAS_PROCESS(plic_test_runner);
	explicit plic_test_runner(sc_clock& clock) : test_runner(clock), m_dut{"rtl plic"} {
		m_dut.io_irq_pending(irq_pending);

		// expands to IO_INIT_PENDING(z, 0, void) IO_INIT_PENDING(z, 1, void) ... IO_INIT_PENDING(z, count - 1, void)
		BOOST_PP_REPEAT(PLIC_NUM_IRQS, IO_INIT_PENDING, void)

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
		BOOST_PP_REPEAT(PLIC_NUM_IRQS, RESET_PENDING, void)
	}

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

	void run() override {
		test_runner::run();

		if(neg == interrupt_time) {
			if(interrupt < PLIC_NUM_IRQS)
				BOOST_PP_REPEAT(PLIC_NUM_IRQS, SET_PENDING, interrupt)
			if(interrupt2 != PLIC_NUM_IRQS) {
				BOOST_PP_REPEAT(PLIC_NUM_IRQS, SET_PENDING, interrupt2)
				interrupt2 = PLIC_NUM_IRQS;
			}
			interrupt_time = -1;
		}
	}
};

struct target_tlm : public external_interrupt_target
{
	bool was_triggered = false;
	bool was_cleared = false;
	PLIC<1, PLIC_NUM_IRQS, maxPriority>& dut;

	target_tlm(PLIC<1, PLIC_NUM_IRQS, maxPriority>& dut) : dut(dut){};

	void trigger_external_interrupt()
	{
		INFO(std::cout << "Interrupt triggered" << std::endl);
		assert(!was_triggered && "interrupt triggered more than once");
		was_triggered = true;
		was_cleared = false;
	};

	void clear_external_interrupt()
	{
		INFO(std::cout << "Interrupt cleared" << std::endl);
		assert(!was_cleared &&
			   "interrupt cleared more than once");
		was_cleared = true;
	};

	uint32_t claim_interrupt()
	{
		assert(was_triggered && "tried to claim untriggered interrupt target");
		was_triggered = false;

		sc_core::sc_time delay;
		tlm::tlm_generic_payload pl;
		uint32_t interrupt = 0;
		//0x200004 + n*8, &hart_claim_response[n]});
		pl.set_read();
		pl.set_address(0x200004);   //claim_response register
		pl.set_data_length(sizeof(uint32_t));
		pl.set_data_ptr(reinterpret_cast<unsigned char*>(&interrupt));

		dut.transport(pl, delay);

		//If the interrupt was triggered, there has to be an interrupt in register
		assert(interrupt > 0);

		//Pending ITR shall be reset
		unsigned idx = interrupt / 32;
		unsigned off = interrupt % 32;
		assert(((dut.pending_interrupts[idx] & (1 << off)) == 0) &&
			   "pending interrupt shall be reset after read");

		pl.set_write();
		dut.transport(pl, delay);	// notify finished interrupt

		//interrupt was either cleared or triggered for another prio
		assert(was_cleared || was_triggered);

		INFO(std::cout << "Interrupt " << interrupt << " claimed" << std::endl);
		return interrupt;
	}
};

uint32_t calculate_enable(uint32_t id) {
	if(id <= 0 || id >= PLIC_NUM_IRQS) {
		return 0;
	}
	uint32_t shift = id<32?0:32;
	return 1UL << (id-shift);
}

void functional_test_priority(PLIC<1, PLIC_NUM_IRQS, maxPriority>& plic_tlm,
							  plic_test_runner& runner_rtl) {
	// data
	uint32_t id_a = klee_int("id a");
	uint32_t id_b = klee_int("id b");
	klee_assume(id_a > 0);
	klee_assume(id_b > 0);
	klee_assume(id_a < PLIC_NUM_IRQS);
	klee_assume(id_b < PLIC_NUM_IRQS);
	klee_assume(id_a != id_b);

	uint32_t prio_a = klee_int("prio_a");
	uint32_t prio_b = klee_int("prio_b");
	klee_assume(prio_a > 0);
	klee_assume(prio_b > 0);
 //	klee_assume(prio_a < maxPriority);
 //	klee_assume(prio_b < maxPriority);

	// TLM PLIC

	plic_tlm.interrupt_priorities[id_a] = prio_a;
	plic_tlm.interrupt_priorities[id_b] = prio_b;

	plic_tlm.gateway_trigger_interrupt(id_a);
	plic_tlm.gateway_trigger_interrupt(id_b);

	uint32_t first_itr_tlm = plic_tlm.hart_get_next_pending_interrupt(0, false);

	plic_tlm.clear_pending_interrupt(first_itr_tlm);
	minikernel_step();

	uint32_t second_itr_tlm = plic_tlm.hart_get_next_pending_interrupt(0, false);

	// RTL PLIC
//	minikernel_step(); // posedge, so writing can start immediately
	uint32_t prio_threshold = 7; // mutationseval: 0!!
	runner_rtl.call_write(kPlicThresholdReg, prio_threshold);
	for(unsigned i=0;i<4;i++) { // process write
		minikernel_step();
	}

	if(id_a<32 && id_b<32) {
		uint32_t enable = calculate_enable(id_a) | calculate_enable(id_b);
		runner_rtl.call_write(kPlicEnableReg, enable);
		for(unsigned i=0;i<4;i++) {
			minikernel_step(); // 50ns - 80ns
		}
	} else if(id_a>=32&&id_b>=32) {
		uint32_t enable = calculate_enable(id_a) | calculate_enable(id_b);
		runner_rtl.call_write(kPlicEnableReg+sizeof(uint32_t), enable);
		for(unsigned i=0;i<4;i++) {
			minikernel_step(); // 50ns - 80ns
		}
	} else {
		uint32_t enable_a = calculate_enable(id_a);
		uint32_t en_addr_offset_a = id_a<32?0:sizeof(uint32_t);
		uint32_t enable_address_a = kPlicEnableReg+en_addr_offset_a;
		runner_rtl.call_write(enable_address_a, enable_a);
		for(unsigned i=0;i<4;i++) {
			minikernel_step(); // 50ns - 80ns
		}
		uint32_t enable_b = calculate_enable(id_b);
		uint32_t enable_address_b = kPlicEnableReg-(en_addr_offset_a-sizeof(uint32_t));
		runner_rtl.call_write(enable_address_b, enable_b);
		for(unsigned i=0;i<4;i++) {
			minikernel_step(); // 50ns - 80ns
		}
	}

	runner_rtl.call_write(sizeof(uint32_t)*id_a, prio_a);
	for(unsigned i=0;i<4;i++) { // process write
		minikernel_step();
	}

	runner_rtl.call_write(sizeof(uint32_t)*id_b, prio_b);
	for(unsigned i=0;i<4;i++) { // process write
		minikernel_step();
	}

	runner_rtl.trigger_interrupt(id_a);
	runner_rtl.trigger_interrupt(id_b);

	for(unsigned i=0;i<8;i++) { // trigger interrupt and process read
		minikernel_step();
	}
	assert(runner_rtl.rw_value == first_itr_tlm);

	runner_rtl.call_write(kPlicClaimReg, first_itr_tlm);
	for(unsigned i=0;i<8;i++) { // process write and read next interrupt
		minikernel_step();
	}
	assert(runner_rtl.rw_value == second_itr_tlm);
}

void functional_test_threshold(PLIC<1, PLIC_NUM_IRQS, maxPriority>& plic_tlm, plic_test_runner& runner_rtl) {
	// data
	uint32_t id = klee_int("interrupt id");
	 klee_assume(id > 0);
	 klee_assume(id < PLIC_NUM_IRQS);
	uint32_t prio = klee_int("prio interrupt");
 //	klee_assume(prio < maxPriority);
	uint32_t threshold = klee_int("priority threshold");
 //	klee_assume(threshold < maxPriority);

	// TLM PLIC
	plic_tlm.interrupt_priorities[id] = prio;
	plic_tlm.hart_priority_threshold[0] = threshold;

	//first trigger may be low or high prio
	plic_tlm.gateway_trigger_interrupt(id);

	uint32_t itr_tlm = plic_tlm.hart_get_next_pending_interrupt(0, true);

	// RTL PLIC
	runner_rtl.call_write(kPlicThresholdReg, threshold);
	for(unsigned i=0;i<4;i++) { // process write
		minikernel_step();
	}

	uint32_t enable = calculate_enable(id);
	uint32_t en_addr_offset = id<32?0:sizeof(uint32_t);
	uint32_t enable_address = kPlicEnableReg+en_addr_offset;
	runner_rtl.call_write(enable_address, enable);
	for(unsigned i=0;i<4;i++) { // process write
		minikernel_step();
	}

	runner_rtl.call_write(sizeof(uint32_t)*id, prio);
	for(unsigned i=0;i<4;i++) { // process write
		minikernel_step();
	}

	runner_rtl.trigger_interrupt(id);
	for(unsigned i=0;i<4;i++) { // trigger interrupt and process read
		minikernel_step();
	}

	assert(runner_rtl.was_triggered == (itr_tlm == id)); // fails
}

int main(int argc, char* argv[])
{
	sc_clock clk{"plic_clk", sc_core::sc_time(20, sc_core::SC_NS)};
	plic_test_runner tr(clk);

	PLIC<1, PLIC_NUM_IRQS, maxPriority> plic_tlm("DUT");
	target_tlm sit_tlm(plic_tlm);
	plic_tlm.target_harts[0] = &sit_tlm;

	Simcontext::get().initialize();
	minikernel_step(); // 0ns

	if(argc == 2) {
		if(strcmp(argv[1], "comparison_threshold") == 0) {
			functional_test_threshold(plic_tlm, tr);
		} else if(strcmp(argv[1], "comparison_priority") == 0) {
			functional_test_priority(plic_tlm, tr);
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
