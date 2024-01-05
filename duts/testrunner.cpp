#include "testrunner.h"
#include <iostream>

test_runner::test_runner(sc_clock& clock, SimpleBusRtl& bus) : sc_module("test_runner"), m_bus(bus), m_clock(clock) {
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
		std::cout << "[run][WARNING] already reading or writing, fix call order" << std::endl;
	}
}

void test_runner::call_write(uint64_t address, uint32_t value) {
	if(read_time == -1 && write_time == -1) {
		write_time = neg+1;
		rw_address = address;
		rw_value = value;
	} else {
		std::cout << "[run][WARNING] already reading or writing, fix call order" << std::endl;
	}
}

void test_runner::r1() {
	//	wait(clk_.negedge_event());
	m_bus.sel = true;
	m_bus.SBaddress = rw_address;
	m_bus.SBvalid = true;
	m_bus.SBwdata = 0;
	m_bus.SBwrite = false;
	//	wait(clk_.posedge_event());
	//	wait(clk_.negedge_event());
}

void test_runner::r2() {
	// r1 first
	// wait(clock.posedge())
	// wait(clock.negedge())
	m_bus.SBaddress = 0;
	m_bus.SBvalid = false;
	const uint32_t value = m_bus.SBrdata.read();
	m_bus.sel = false;

	rw_value = value; // TODO schauen ob oben direkt möglich
	//	wait(clk_.posedge_event());
}

void test_runner::w1() {
	// wait(clock.negedge())
	m_bus.sel = true;
	m_bus.SBaddress = rw_address;
	m_bus.SBvalid = true;
	m_bus.SBwdata = rw_value;
	m_bus.SBwrite = true;
	// wait(clock.posedge())
	// wait(clock.negedge())
}

void test_runner::w2() {
	// w1 first
	// wait(clock.posedge())
	// wait(clock.negedge())
	m_bus.SBvalid = false;
	m_bus.sel = false;
	// wait(clock.posedge())
}

void test_runner::run() {
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
	}
}
