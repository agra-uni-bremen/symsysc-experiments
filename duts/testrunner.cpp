#include "testrunner.h"
#include <iostream>

test_runner::test_runner(sc_clock& clock) : sc_module("test_runner"), m_clock(clock), m_bus(clock) {
	SC_METHOD(run);
	sensitive << m_clock.negedge_event();
	dont_initialize();
}

void test_runner::call_read(uint64_t address) {
	if(read_time == -1 && write_time == -1) {
		read_time = neg+1;
		rw_address = address;
	}
	else {
		std::cout << "[run][WARNING] already reading or writing, fix call order. attempted to read from address " << address << std::endl;
	}
}

void test_runner::call_write(uint64_t address, uint32_t value) {
	if(read_time == -1 && write_time == -1) {
		write_time = neg+1;
		rw_address = address;
		rw_value = value;
	} else {
		std::cout << "[run][WARNING] already reading or writing, fix call order. attempted to write to address " << address << std::endl;
	}
}

void test_runner::run() {
	neg++;

	if(neg == read_time) { // call read on negedge
		m_bus.r1(rw_address);
	}
	else if(neg == read_time+1) { // read from read_address: part 2
		rw_value = m_bus.r2();
		read_time = -1;
	}
	else if(neg == write_time) {
		m_bus.w1(rw_address, rw_value);
	}
	else if(neg == write_time+1) {
		m_bus.w2();
		write_time = -1;
	}
}
