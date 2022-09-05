#include "klee_conf.h"
#include <sensor.hpp>
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
	SimpleSensor dut(interrupt);
	test_interrupt_gateway tig;
	dut.plic = &tig;

	INFO(std::cout << "Number of registered transports: " << transports.size() << std::endl);
	sc_core::Simcontext::get().printInfo();


	minikernel_step();	// 0
	minikernel_step();	// 40ms
	//Test 1: Is triggered interrupt correct?
	assert(interrupt == tig.triggered_irq);

	sc_core::sc_time delay;
    tlm::tlm_generic_payload pl;
    uint32_t address = klee_int("address_read");
    uint32_t length = klee_int("length_read");
    const uint32_t max_len = 1000;

    // limit possible length
    klee_assume(length <= max_len);
    pl.set_read();
    pl.set_address(address);
    pl.set_data_length(length);
    uint8_t* buffer = new uint8_t[max_len];
    pl.set_data_ptr(buffer);
    // Test 2: Read at any address for any given length.
    // Is there any unexpected output?
    dut.transport(pl, delay);

    minikernel_step();	// 80ms

    //Test 3: Are returned values in specification?
    pl.set_read();
    pl.set_address(0);
    pl.set_data_length(1);
    uint8_t rand_value;
    pl.set_data_ptr(&rand_value);
    dut.transport(pl, delay);

    assert(rand_value > 48);	// In default filter, values shall range in
    assert(rand_value < 58);	// 48 + rand() % 10

    // Test 4: Write at any address.
    // Is there any unexpected output?
    pl.set_write();
    pl.set_address(klee_int("address_write"));
    pl.set_data_length(4);
    uint8_t write[4];
    klee_make_symbolic(write, 4, "write data");
    pl.set_data_ptr(write);
    dut.transport(pl, delay);

	INFO(std::cout << "finished at " << minikernel_current_time() << std::endl);

	delete[] buffer;
	return 0;
}
