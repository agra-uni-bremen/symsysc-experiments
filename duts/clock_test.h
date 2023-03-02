#pragma once

#include <systemc.h>


// model clock as module with sensitivity bar and processes
class clock_test : public sc_module {
public:
    sc_clock m_clock;
	sc_signal<bool,SC_ONE_WRITER> m_signal;

    explicit clock_test(sc_core::sc_module_name name) : sc_module(name),
    m_clock(sc_clock("clock", sc_time(10, SC_SEC))), m_signal() {

        SC_HAS_PROCESS(clock_test);
        SC_METHOD(run_pos);
        sensitive << m_clock.posedge_event();

        SC_METHOD(run_neg);
        sensitive << m_clock.negedge_event();

		SC_METHOD(run_signal);
		sensitive << m_signal;
    }

    void run_pos() {
        std::cout << "posedge clock" << std::endl;
		m_signal.write(true);
    }

    void run_neg() {
        std::cout << "negedge clock" << std::endl;
		m_signal.write(false);
    }

	void run_signal() {
		std::cout << "value change on signal" << std::endl;
	}

};
