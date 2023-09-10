//#include <klee_conf.h>
#include <systemc.h>
#include <plic_rtl.h>
#include <iostream>

static constexpr uint32_t numberInterrupts = 53;

static constexpr uint32_t kPlicStartAddr = 0x40000000;
static constexpr uint32_t kPlicEndAddr = 0x41000000;
static constexpr uint32_t kPlicClaimReg = 0x200004;
static constexpr uint32_t kPlicEnableReg = 0x2000;
static constexpr uint32_t kPlicThresholdReg = 0x200000;


/*
 * TODO: eher an Fuzzing-Testbench orientieren
 * - Überprüfungen nur am Ende, weniger zwischendurch
 * - Wie viele Interrupts? Wie war das Endergebnis?
 */
struct Simple_interrupt_target : public external_interrupt_target
{
	bool was_triggered = false;
	bool was_cleared = false;
	PlicRtlWrapper& dut;

	Simple_interrupt_target(PlicRtlWrapper& dut) : dut(dut){
		std::cout << "[sit] was_cleared: " << was_cleared << std::endl;
	};

	void trigger_external_interrupt(PrivilegeLevel level)
	{
		INFO(std::cout << "[sit] Interrupt triggered" << std::endl);
		assert(!was_triggered && "interrupt triggered more than once");
		was_triggered = true;
		was_cleared = false;
	};

	void clear_external_interrupt(PrivilegeLevel level)
	{
		INFO(std::cout << "[sit] Interrupt cleared" << std::endl);
//		assert(!was_cleared &&
//			   "interrupt cleared more than once");
		was_cleared = true;
	};

	uint32_t claim_interrupt()
	{
		assert(was_triggered && "tried to claim untriggered interrupt target");
		was_triggered = false;

//		sc_core::sc_time delay;
//		tlm::tlm_generic_payload pl;
//		uint32_t interrupt = 0;
//		//0x200004 + n*8, &hart_claim_response[n]});
//		pl.set_read();
//		pl.set_address(0x200004);   //claim_response register
//		pl.set_data_length(sizeof(uint32_t));
//		pl.set_data_ptr(reinterpret_cast<unsigned char*>(&interrupt));
//
//		dut.transport(pl, delay);
//
//		//If the interrupt was triggered, there has to be an interrupt in register
//		assert(interrupt > 0);
//
//		//Pending ITR shall be reset
//		unsigned idx = interrupt / 32;
		assert((!dut.pendings_[1].read()) &&  // TODO hier stand nicht 1 sondern idx
			   "pending interrupt shall be reset after read");

//		pl.set_write();
//		dut.transport(pl, delay);	// notify finished interrupt

		//interrupt was either cleared or triggered for another prio
		assert(was_cleared || was_triggered);

		INFO(std::cout << "[sit] Interrupt " << 1 << " claimed" << std::endl);  // todo auch hier interrupt
//		return interrupt;
		return 1;
	}
};

struct test_runner : public sc_module {
	PlicRtlWrapper& m_dut;
	sc_clock& m_clock;
	int neg = 0;

	uint32_t idx;
	uint32_t prio;

	uint64_t enable_mem;

test_runner(sc_clock& clock, PlicRtlWrapper& dut) : sc_module("test_runner"), m_dut(dut),m_clock(clock) {
	SC_HAS_PROCESS(test_runner);
	SC_METHOD(run);
	sensitive << m_clock.negedge_event();


}

void _write(uint64_t address, uint8_t *data, unsigned num_bytes) {
	tlm::tlm_generic_payload trans;
	trans.set_command(tlm::TLM_WRITE_COMMAND);
	trans.set_address(address);
	trans.set_data_ptr(data);
	trans.set_data_length(num_bytes);

	auto delay = sc_core::sc_time(0, sc_core::SC_NS);

	m_dut.transport(trans, delay);
}

void run() {
	neg++;

	std::cout << "RUN!!!!!!!!!!!!! " << neg << std::endl;

	/* Version 1: ohne transport-Aufruf */
	if(neg == 1) { // enabled lower
		std::cout << "[run] enable lower pt 1" << std::endl;
//	idx = klee_int("interrupt number");  TODO das ist dann der nächste Schritt, falls das grundsätzliche Gerüst irgendwann funktionieren sollte
		idx = 2;

		enable_mem = 1UL << idx;
		uint32_t enable_lower = static_cast<uint32_t>(enable_mem);

		std::cout << "[run] calling transport" << std::endl;
		_write(kPlicEnableReg, reinterpret_cast<uint8_t *>(&enable_lower), sizeof(uint32_t));
	}
	else if(neg == 2) { // enable lower pt 2
		std::cout << "[run] enable lower pt 2" << std::endl;
		m_dut.s2();
	}
	else if(neg == 3) { // enable upper
		std::cout << "[run] enable upper pt 1" << std::endl;
		uint32_t enable_upper = static_cast<uint32_t>((enable_mem >> 32UL));

		std::cout << "[run] calling transport" << std::endl;
		_write(kPlicEnableReg+sizeof(uint32_t), reinterpret_cast<uint8_t *>(&enable_upper), sizeof(uint32_t));
	}
	else if(neg==4) { // enable upper pt 2
		std::cout << "[run] enable upper pt 2" << std::endl;
		m_dut.s2();
	}
	else if(neg == 5) { // prio
		std::cout << "[run] prio pt 1" << std::endl;
		prio = 6;

		_write(sizeof(uint32_t)*idx, reinterpret_cast<uint8_t *>(&prio), sizeof(uint32_t));
	}
	else if(neg == 6) { // prio pt 2
		std::cout << "[run] prio pt 2" << std::endl;
		m_dut.s2();
	}
	else { // can finally send off the actual interrupt
		std::cout << "[run] trigger interrupt" << std::endl;
		m_dut.gateway_trigger_interrupt(idx);

		//Is the pending interrupts register changed?
		assert(m_dut.pendings_[idx].read());
	}

	/*
	 * TODO: simple bus funktioniert nicht! (wait(event) klappt halt mit dem Unterbrechen/Weitermachen nicht)
	 * dementsprechend muss das hier dadurch ersetzt werden, direkt in
	 * das Gerät zu schreiben
	 */
}
};

void functional_test_basic(PlicRtlWrapper& dut)
{
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.hart);

	auto before = sc_core::Simcontext::get().getGlobalTime();
	std::cout << "[ftb] << before: " << before.to_string() << std::endl;
	std::cout << "[ftb] minikernel step 1" << std::endl;
//	minikernel_step();	// 10 ns? depends on the clock given in main
	// was PLIC fast enough?
	auto after = sc_core::Simcontext::get().getGlobalTime();
	std::cout << "[ftb] << after: " << after.to_string() << std::endl;
	assert(after-before == sc_core::sc_time(10, sc_core::SC_NS));

	//the step should trigger an external interrupt
	assert(sit.was_triggered);

	// Is correct Interrupt claimable?
	sit.claim_interrupt();  // TODO aufpassen, dass das nicht schon automatisch passiert!
	// automatisch: weil in plic_rtl halt auf negedge immer reset aufgerufen wird & dort dann das

	// was interrupt cleared by claiming?
	assert(sit.was_cleared && "Interrupt was not cleared after claim");

	//The pending interrupt register should be cleared after claim
	assert(!dut.pendings_[0].read() && !dut.pendings_[1].read());
}

int main(int argc, char* argv[])
{
	sc_clock clk{"plic_clk", sc_core::sc_time(20, sc_core::SC_NS)};
	PlicRtlWrapper plic("PlicRtlWrappper", clk);
	//plic.init();
	Simple_interrupt_target sit(plic);
	plic.hart = &sit;

	test_runner tr = test_runner(clk, plic);

	for(unsigned i=0;i<16;i++) {
		std::cout << "[main] minikernel step " << i << std::endl;
		minikernel_step();
	}

//	std::cout << "[main] minikernel step 0" << std::endl;
//	minikernel_step();	//0ms, posedge executed
//	minikernel_step(); // negedge executed
	// start

	if(argc == 2)
	{
		if(strcmp(argv[1], "functional_test_basic") == 0) {
			std::cout << "[main] Start functional test basic" << std::endl;
			functional_test_basic(plic);
		}

			//else if(strcmp(argv[1], "functional_test_itr_num_priority") == 0)
			//	functional_test_itr_num_priority(dut);

//		else if(strcmp(argv[1], "functional_test_consider_threshold") == 0)
//			functional_test_consider_threshold(dut);
//
//		else if(strcmp(argv[1], "functional_test_priority_direct") == 0)
//			functional_test_priority_direct(dut);
//
//		else if(strcmp(argv[1], "interface_test_read") == 0)
//			interface_test_read(dut);
//
//		else if(strcmp(argv[1], "interface_test_write") == 0)
//			interface_test_write(dut);

		else
			INFO(std::cout << "Invalid test given." << std::endl);

	} else
	{
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
