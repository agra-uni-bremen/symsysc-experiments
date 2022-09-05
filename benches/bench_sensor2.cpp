#include "klee_conf.h"
#include <sensor2.h>
#include "minikernel/registry.hpp"


struct test_interrupt_gateway : interrupt_gateway{
	uint32_t triggered_irq = 0;
	void gateway_trigger_interrupt(uint32_t irq_id){
		triggered_irq = irq_id;
		INFO(std::cout << "interrupt " << irq_id << " fired." << std::endl;);
	}
};


int main()
{
	uint32_t interrupt = klee_int("Interrupt");
	SimpleSensor2 dut("bernd", interrupt);
	test_interrupt_gateway tig;
	dut.plic = &tig;

	INFO(std::cout << "Number of registered transports: " << transports.size() << std::endl);
	sc_core::Simcontext::get().printInfo();


	minikernel_step();	// 0
	minikernel_step();	// 40ms
	//Test 1
	assert(interrupt == tig.triggered_irq);

	sc_core::sc_time delay;
    tlm::tlm_generic_payload pl;
    uint32_t address = klee_int("address");
    uint32_t length = klee_int("length");
    const uint32_t max_len = 1000;

    klee_assume(length <= max_len);
    pl.set_read();
    pl.set_address(address);
    pl.set_data_length(length);
    uint8_t* buffer = new uint8_t[max_len];
    pl.set_data_ptr(buffer);
    //Test 2
    dut.transport(pl, delay);

    minikernel_step();	// 80ms

    //Test 3
    pl.set_read();
    pl.set_address(0);
    pl.set_data_length(1);
    uint8_t rand_value;
    pl.set_data_ptr(&rand_value);
    dut.transport(pl, delay);

    assert(rand_value > 48);	// In default filter, values shall range in
    assert(rand_value < 58);	// 48 + rand() % 10
	delete[] buffer;
	return 0;
}
