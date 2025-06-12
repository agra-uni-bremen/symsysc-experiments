#include <klee_conf.h>
#include <plic_translated.hpp>
#include <minikernel/registry.hpp>

//todo more flexible?
static constexpr uint32_t numberInterrupts = 64, maxPriority = 32;

struct Simple_interrupt_target : public external_interrupt_target
{
    bool was_triggered = false;
    bool was_cleared = false;
    PLIC<1, numberInterrupts, maxPriority>& dut;

    Simple_interrupt_target(PLIC<1, numberInterrupts, maxPriority>& dut) : dut(dut){};

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

void functional_test_basic(PLIC<1, numberInterrupts, maxPriority>& dut)
{
	Simple_interrupt_target &sit = *reinterpret_cast<Simple_interrupt_target*>(dut.target_harts[0]);
	uint32_t i = klee_int("interrupt number");
//	uint32_t i = 51;

    dut.gateway_trigger_interrupt(i);

    //Is the pending interrupts register changed?
    if(i < 32)
        assert(dut.pending_interrupts[0] > 0);
    else
        assert(dut.pending_interrupts[1] > 0);

    auto before = sc_core::Simcontext::get().getGlobalTime();
    minikernel_step();	// should be 10ns
    // was PLIC fast enough?
    auto after = sc_core::Simcontext::get().getGlobalTime();
    assert(after-before == sc_core::sc_time(10, sc_core::SC_NS));

    //the step should trigger an external interrupt
    assert(sit.was_triggered);

    // Is correct Interrupt claimable?
    sit.claim_interrupt();

    // was interrupt cleared by claiming?
    assert(sit.was_cleared && "Interrupt was not cleared after claim");

    //The pending interrupt register should be cleared after claim
    assert(dut.pending_interrupts[0] == 0 && dut.pending_interrupts[1] == 0);
}

void functional_test_priority_direct(PLIC<1, numberInterrupts, maxPriority>& dut)
{
	uint32_t a = klee_int("a interrupt");
	uint32_t b = klee_int("b interrupt");
	INFO(a=2; b=1);

	uint32_t a_prio = klee_int("a interrupt priority");
	uint32_t b_prio = klee_int("b interrupt priority");
	INFO(a_prio=1; b_prio=2);


	klee_assume(a < numberInterrupts);
	klee_assume(b < numberInterrupts);
	//skip reserved interrupt 0
	klee_assume(a > 0);
	klee_assume(b > 0); //[1...31]
	klee_assume(a != b);

	klee_assume(a_prio > 0);
	klee_assume(b_prio > 0);
	klee_assume(a_prio < numberInterrupts); //[1...31]	//zero is "disabled", checked in consider thr
	klee_assume(b_prio < numberInterrupts);

	//Direct write into member, skipping transport
	dut.interrupt_priorities[a] = a_prio;
	dut.interrupt_priorities[b] = b_prio;

	//first trigger may be low or high prio
	dut.gateway_trigger_interrupt(a);
	dut.gateway_trigger_interrupt(b);

	uint32_t first_itr  = a_prio > b_prio ? a : b;
	uint32_t second_itr = a_prio > b_prio ? b : a;
	if(a_prio == b_prio)
	{	// if same prio, itr num wins
		first_itr  = a < b ? a : b;
		second_itr = a < b ? b : a;
	}

	uint32_t actual_first_itr = dut.hart_get_next_pending_interrupt(0, false);

	assert(actual_first_itr == first_itr &&
			"Invalid interrupt priority calculated");

	dut.clear_pending_interrupt(first_itr);
	minikernel_step();

	uint32_t actual_second_itr = dut.hart_get_next_pending_interrupt(0, false);

	assert(actual_second_itr == second_itr &&
			"Invalid interrupt priority calculated");
}

void functional_test_consider_threshold(PLIC<1, numberInterrupts, maxPriority>& dut)
{
	uint32_t a = klee_int("a interrupt");
	INFO(a=2);

	klee_assume(a < numberInterrupts);
	//skip reserved interrupt 0
	klee_assume(a > 0);

	uint32_t a_prio = klee_int("a interrupt priority");
	INFO(a_prio=1);
	klee_assume(a_prio < numberInterrupts); //[0...31]

	uint32_t hart_consider_thr = klee_int("hart consider threshold");
	klee_assume(hart_consider_thr < numberInterrupts);


	//Direct write into member, skipping transport
	dut.interrupt_priorities[a] = a_prio;
	dut.hart_priority_threshold[0] = hart_consider_thr;

	//first trigger may be low or high prio
	dut.gateway_trigger_interrupt(a);

	uint32_t itr = dut.hart_get_next_pending_interrupt(0, true);

	if(a_prio > 0 && a_prio > hart_consider_thr)
		assert(itr == a && "Interrupt not considered");
	else
		assert(itr == 0 && "Interrupt was considered");
}

/*
void functional_test_itr_num_priority(PLIC<1, numberInterrupts, maxPriority>& dut)
{
	Simple_interrupt_target sit(dut);
	//interrupt line plic -> sit
	dut.target_harts[0] = &sit;


	uint32_t a = klee_int("a interrupt");
	uint32_t b = klee_int("b interrupt");
	INFO(b=2);

	klee_assume(a < numberInterrupts);
	klee_assume(b < numberInterrupts);
	//skip reserved interrupt 0
	klee_assume(a > 0);
	klee_assume(b > 0);
	klee_assume(a != b);

	uint32_t lower_itr = a < b ? a : b;
	uint32_t highr_itr = a > b ? a : b;

	//first trigger may be low or high prio
	dut.gateway_trigger_interrupt(a);
	dut.gateway_trigger_interrupt(b);

    minikernel_step();

    //the step should trigger an external interrupt
    assert(sit.was_triggered &&
    		"No triggered interrupt");

    // Is correct Interrupt claimable?
    uint32_t first_itr = sit.claim_interrupt();

    //Was the itr with the highest prio (lowest val) chosen first?
    assert(first_itr == lower_itr &&
    		"Invalid interrupt sequence");

    assert(!sit.was_triggered);

    minikernel_step();

    assert(sit.was_triggered &&
			"interrupt was not triggered again for second itr");

    // Is correct Interrupt claimable?
    uint32_t second_itr = sit.claim_interrupt();

    //Was the itr with the highest prio (lowest val) chosen?
    assert(second_itr == highr_itr &&
    		"Second itr not from lower prio");

    assert(sit.was_cleared &&
    		"Interrupt was not cleared after claim of last itr");
}
*/


void interface_test_read(PLIC<1, numberInterrupts, maxPriority>& dut)
{
	dut.gateway_trigger_interrupt(1);

	uint32_t address = klee_int("address");
	unsigned constexpr max_data_length = 100;
	unsigned data_length = klee_int("data_length");
	klee_assume(data_length <= max_data_length);
	uint8_t data[max_data_length];
	sc_core::sc_time delay;
	tlm::tlm_generic_payload pl;
	pl.set_read();
	pl.set_address(address);
	pl.set_data_length(data_length);
	pl.set_data_ptr(data);

	dut.transport(pl, delay);

	uint32_t adrc = address - (address%4);

	for(auto i : dut.interrupt_priorities)
		assert(i==1);

	for(auto i : dut.hart_enabled_interrupts) {
		for(auto j : i) {
			assert(j==0xffffffff);
		}
	}
	assert(dut.hart_priority_threshold[0]==0);
	if(adrc == 0x200004)
		assert(dut.hart_claim_response[0]==1);
	else
		assert(dut.hart_claim_response[0]==0);

	for(unsigned i=0;i<dut.pending_interrupts.size();++i) {
		if(adrc == 0x200004) // claim AND only one hart in our tests...
			assert(dut.pending_interrupts[i]==0);
		else {
			if (i == 0)
				assert(dut.pending_interrupts[i] == 0b10); // triggered interrupt 1 @ start
			else
				assert(dut.pending_interrupts[i] == 0);
		}
	}

	minikernel_step();
//	minikernel_step();
}

void interface_test_write(PLIC<1, numberInterrupts, maxPriority>& dut)
{
	dut.gateway_trigger_interrupt(1);

	uint32_t address = klee_int("address");
	unsigned constexpr max_data_length = 100;
	unsigned data_length = klee_int("data_length");
	INFO(data_length = 0);
	klee_assume(data_length <= max_data_length);
	uint8_t data[max_data_length];
	klee_make_symbolic(data, max_data_length, "write data");
	INFO(memset(data, 0, max_data_length));
	sc_core::sc_time delay;
	tlm::tlm_generic_payload pl;
	pl.set_write();
	pl.set_address(address);
	INFO(pl.set_address(0x00200004));
	pl.set_data_length(data_length);
	pl.set_data_ptr(data);

	dut.transport(pl, delay);

	// pending read-only!!
	for(unsigned i=0;i<dut.pending_interrupts.size();++i) {
		if(i==0)
			assert(dut.pending_interrupts[i]==0b10); // triggered interrupt 1 @ start
		else
			assert(dut.pending_interrupts[i]==0);
	}

	uint8_t adrm = address % 4;
	if(data_length+adrm<=4) {
		uint32_t adrc = address - adrm;
		if(adrc >= 0x0 && adrc <= (0x0 + (dut.interrupt_priorities.size()-1)*4)) {
			for(unsigned i=0;i<dut.interrupt_priorities.size();++i) {
				if(0x0+i*4!=adrc) {
					assert(dut.interrupt_priorities[i]==1);
					continue;
				}
				uint32_t prio_val = 0;
				memcpy(&prio_val,&data, data_length);

				// check for val>maxPrio
				if((adrm > 0 && prio_val > 0) || (adrm==0 && prio_val > 32))
					assert(dut.interrupt_priorities[i]==maxPriority);
				else
					assert(memcmp(((unsigned char*)&dut.interrupt_priorities[i])+adrm, data, data_length)==0);

			}
		} else {
			for(auto i : dut.interrupt_priorities)
				assert(i==1);
		}
		if(adrc >= 0x2000 && adrc <= 0x2000 + (dut.hart_enabled_interrupts[0].size()-1)*4) {
			for(unsigned i=0;i<dut.hart_enabled_interrupts[0].size();++i) {
				if(0x2000+i*4==adrc)
					assert(memcmp(((unsigned char*)&dut.hart_enabled_interrupts[0][i])+adrm, data, data_length)==0);
				else
					assert(dut.hart_enabled_interrupts[0][i]==0xffffffff);
			}
		} else {
			for(auto i : dut.hart_enabled_interrupts) {
				for(auto j : i) {
					assert(j==0xffffffff);
				}
			}
		}
		if(adrc == 0x200000) { // threshold
			assert(memcmp(((unsigned char*)&dut.hart_priority_threshold[0])+adrm, data, data_length)==0);
		} else {
			assert(dut.hart_priority_threshold[0]==0);
		}
		if(adrc == 0x200004) { // claim
			assert(memcmp(((unsigned char*)&dut.hart_claim_response[0])+adrm, data, data_length)==0);
		} else {
			assert(dut.hart_claim_response[0]==0);
		}
	} else {
		for(auto i : dut.interrupt_priorities)
			assert(i==1);
		for(auto i : dut.hart_enabled_interrupts) {
			for(auto j : i) {
				assert(j==0xffffffff);
			}
		}
		assert(dut.hart_priority_threshold[0]==0);
		assert(dut.hart_claim_response[0]==0);
	}

	minikernel_step();
//	minikernel_step();
}


int main(int argc, char* argv[])
{
	PLIC<1, numberInterrupts, maxPriority> dut("DUT");
	Simple_interrupt_target sit(dut);
	//interrupt line plic -> sit
	dut.target_harts[0] = &sit;

	Simcontext::get().initialize();
	minikernel_step();	//0ms

	if(argc == 2)
	{
		if(strcmp(argv[1], "functional_test_basic") == 0)
			functional_test_basic(dut);

		//else if(strcmp(argv[1], "functional_test_itr_num_priority") == 0)
		//	functional_test_itr_num_priority(dut);

		else if(strcmp(argv[1], "functional_test_consider_threshold") == 0)
			functional_test_consider_threshold(dut);

		else if(strcmp(argv[1], "functional_test_priority_direct") == 0)
			functional_test_priority_direct(dut);

		else if(strcmp(argv[1], "interface_test_read") == 0)
			interface_test_read(dut);

		else if(strcmp(argv[1], "interface_test_write") == 0)
			interface_test_write(dut);

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
