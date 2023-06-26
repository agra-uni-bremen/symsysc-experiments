#pragma once

#include <iostream>
#include <systemc.h>


// model clock as module with sensitivity bar and processes
class clock_signal : public sc_module {
public:
	sc_clock m_clock;

	explicit clock_signal(sc_core::sc_module_name name) : sc_module(name),
	m_clock(sc_clock("clock", sc_time(10, SC_SEC))) {

		SC_HAS_PROCESS(clock_signal);
		SC_METHOD(run_pos);
		sensitive << m_clock.posedge_event();

		SC_METHOD(run_neg);
		sensitive << m_clock.negedge_event();

		SC_METHOD(run_signal);
		sensitive << m_clock;
	}

	void run_pos() {
		std::cout << "\t[clock_signal module] posedge clock" << std::endl;
	}

	void run_neg() {
		std::cout << "\t[clock_signal module] negedge clock" << std::endl;
	}

	void run_signal() {
		std::cout << "\t[clock_signal module] value change on clock signal" << std::endl;
	}

};
