#pragma once

#include "clock_signal.h"
#include <systemc.h>

// model port-signal connection with clock module
class clock_port : public sc_module {
public:
	sc_in<bool> m_input;
	clock_signal m_clock_module;

	explicit clock_port(const char* name) : sc_module(name), m_input(), m_clock_module("clock") {
		m_input(m_clock_module.m_clock);

		SC_HAS_PROCESS(clock_port);
		SC_METHOD(run_port);
		sensitive << m_input;
	}

	void run_port() {
		std::cout << "\t[clock_port module] port value change" << std::endl;
	}
};
