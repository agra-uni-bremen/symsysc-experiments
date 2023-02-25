#pragma once

#include <systemc.h>


// model clock as module with sensitivity bar and processes
class clock_test : public sc_module {
public:
    sc_clock m_clock;

    explicit clock_test(sc_core::sc_module_name name) : sc_module(name),
    m_clock(sc_clock("clock", sc_time(10, SC_SEC))) {

        SC_HAS_PROCESS(clock_test);
        SC_METHOD(run_pos);
        sensitive << m_clock.posedge_event();

        SC_METHOD(run_neg);
        sensitive << m_clock.negedge_event();
    }

    void run_pos() {
        std::cout << "posedge clock" << std::endl;
    }

    void run_neg() {
        std::cout << "negedge clock" << std::endl;
    }

};
