#include <klee_conf.h>
#include <systemc.h>

#include <plic_rtl.h>
#include <plic_translated.hpp>

#include <iostream>

static constexpr uint32_t numberInterruptsTlm = 64, maxPriority = 32;

static constexpr uint32_t kPlicClaimReg = 0x200004;
static constexpr uint32_t kPlicEnableReg = 0x2000;
static constexpr uint32_t kPlicThresholdReg = 0x200000;


/*
 *TODO PLICs differ slightly in their behaviour
 * - number interrupts
 * - max priority/threshold
 * - prio <= threshold
 */


struct test_runner : public sc_module {
	PlicRtlWrapper& m_dut;
	sc_clock& m_clock;
	int neg = 0;

	int read_time = -1;
	int write_time = -1;

	uint64_t rw_address;
	uint32_t rw_value = 0;

	int interrupt_time = -1;
	uint32_t interrupt = numberInterruptsTlm;
	uint32_t interrupt2 = numberInterruptsTlm;

	test_runner(sc_clock& clock, PlicRtlWrapper& dut) : sc_module("test_runner"), m_dut(dut),m_clock(clock) {
		SC_HAS_PROCESS(test_runner);
		SC_METHOD(run);
		sensitive << m_clock.negedge_event();
		dont_initialize();
	}

	void call_read(uint64_t address) {
		if(read_time == -1 && write_time == -1) {
			read_time = neg+1;
			rw_address = address;
		}
		else {
			INFO(std::cout << "[run][WARNING] already reading or writing, fix call order" << std::endl);
		}
	}

	void call_write(uint64_t address, uint32_t value) {
		if(read_time == -1 && write_time == -1) {
			write_time = neg + 1;
			rw_address = address;
			rw_value = value;
		}
		else {
			INFO(std::cout << "[run][WARNING] already reading or writing, fix call order" << std::endl);
		}
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
	void r1() {
		//	wait(clk_.negedge_event());
		m_dut.simple_bus_.sel = true;
		m_dut.simple_bus_.SBaddress = rw_address;
		m_dut.simple_bus_.SBvalid = true;
		m_dut.simple_bus_.SBwdata = 0;
		m_dut.simple_bus_.SBwrite = false;
		//	wait(clk_.posedge_event());
		//	wait(clk_.negedge_event());
	}

	void r2() {
		// r1 first
		// wait(clock.posedge())
		// wait(clock.negedge())
		m_dut.simple_bus_.SBaddress = 0;
		m_dut.simple_bus_.SBvalid = false;
		const uint32_t value = m_dut.simple_bus_.SBrdata.read();
		m_dut.simple_bus_.sel = false;

		rw_value = value; // TODO schauen ob oben direkt möglich
		//	wait(clk_.posedge_event());
	}

	void w1() {
		// wait(clock.negedge())
		m_dut.simple_bus_.sel = true;
		m_dut.simple_bus_.SBaddress = rw_address;
		m_dut.simple_bus_.SBvalid = true;
		m_dut.simple_bus_.SBwdata = rw_value;
		m_dut.simple_bus_.SBwrite = true;
		// wait(clock.posedge())
		// wait(clock.negedge())
	}

	void w2() {
		// w1 first
		// wait(clock.posedge())
		// wait(clock.negedge())
		m_dut.simple_bus_.SBvalid = false;
		m_dut.simple_bus_.sel = false;
		// wait(clock.posedge())
	}

	void run() {
		neg++;

		if(neg == read_time) { // call read on negedge
			r1();
		}
		else if(neg == read_time+1) { // read from read_address: part 2
			r2();
			read_time = -1;
		}
		else if(neg == write_time) {
			w1();
		}
		else if(neg == write_time+1) {
			w2();
			write_time = -1;
		} else if(neg == interrupt_time) {
			m_dut.gateway_trigger_interrupt(interrupt);
			if(interrupt2 != numberInterruptsTlm) {
				m_dut.gateway_trigger_interrupt(interrupt2);
				interrupt2 = numberInterruptsTlm;
			}
			interrupt_time = -1;
		}
	}
};

struct target_rtl : public external_interrupt_target_rtl
{
	bool was_triggered = false;
	bool was_cleared = false;
	PlicRtlWrapper &dut;
	test_runner &runner;

	target_rtl(PlicRtlWrapper& dut, test_runner &runner) : dut(dut), runner(runner) {};

	void trigger_external_interrupt(PrivilegeLevel level)
	{
		if(!was_triggered) {
			was_triggered = true;
			was_cleared = false;
			runner.call_read(kPlicClaimReg);
		}
	};

	void clear_external_interrupt(PrivilegeLevel level)
	{
		was_cleared = true;
		if(was_triggered) {
			was_triggered = false;
		}
	};
};

struct target_tlm : public external_interrupt_target
{
	bool was_triggered = false;
	bool was_cleared = false;
	PLIC<1, numberInterruptsTlm, maxPriority>& dut;

	target_tlm(PLIC<1, numberInterruptsTlm, maxPriority>& dut) : dut(dut){};

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

// simple priority order test

void functional_test_priority(PLIC<1, numberInterruptsTlm, maxPriority>& plic_tlm,
							  PlicRtlWrapper& plic_rtl, test_runner& runner_rtl) {
	// data
	uint32_t id_a = 1;
	uint32_t id_b = 2;

	uint32_t prio_a = klee_int("prio_a");
	uint32_t prio_b = klee_int("prio_b");
//	uint32_t prio_a = 7;
//	uint32_t prio_b = 6;

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

	uint32_t prio_threshold = 7;
	runner_rtl.call_write(kPlicThresholdReg, prio_threshold);
	for(unsigned i=0;i<4;i++) { // process write
		minikernel_step();
	}

	uint32_t enable_lower = 1UL << id_a | 1UL << id_b;
	runner_rtl.call_write(kPlicEnableReg, enable_lower);
	for(unsigned i=0;i<4;i++) { // process write
		minikernel_step();
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

void functional_test_threshold(PLIC<1, numberInterruptsTlm, maxPriority>& plic_tlm,
							   PlicRtlWrapper& plic_rtl, test_runner& runner_rtl) {
	// data
	uint32_t id = 1;
//	uint32_t prio = 3;
//	uint32_t threshold = 2;
	uint32_t prio = klee_int("prio interrupt");
	uint32_t threshold = klee_int("priority threshold");

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

	uint32_t enable_lower = 1UL << id;
	runner_rtl.call_write(kPlicEnableReg, enable_lower);
	for(unsigned i=0;i<4;i++) { // process write
		minikernel_step();
	}

	runner_rtl.call_write(sizeof(uint32_t)*id, prio);
	for(unsigned i=0;i<4;i++) { // process write
		minikernel_step();
	}

	runner_rtl.trigger_interrupt(id);
	for(unsigned i=0;i<8;i++) { // trigger interrupt and process read
		minikernel_step();
	}

	assert(runner_rtl.rw_value == itr_tlm); // fails
}

int main(int argc, char* argv[])
{
	sc_clock clk{"plic_clk", sc_core::sc_time(20, sc_core::SC_NS)};

	PlicRtlWrapper plic_rtl("PlicRtlWrappper", clk);
	test_runner tr = test_runner(clk, plic_rtl);
	target_rtl sit_rtl(plic_rtl, tr);
	plic_rtl.hart = &sit_rtl;

	PLIC<1, numberInterruptsTlm, maxPriority> plic_tlm("DUT");
	target_tlm sit_tlm(plic_tlm);
	plic_tlm.target_harts[0] = &sit_tlm;

	Simcontext::get().initialize();
	minikernel_step(); // 0ns

	if(argc == 2) {
		if(strcmp(argv[1], "functional_test_threshold") == 0) {
			functional_test_threshold(plic_tlm, plic_rtl, tr);
		} else if(strcmp(argv[1], "functional_test_priority") == 0) {
			functional_test_priority(plic_tlm, plic_rtl, tr);
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
