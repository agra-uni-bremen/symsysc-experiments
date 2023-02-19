#pragma once

#include <systemc.h>


// model clock as module with sensitivity bar and processes
class clock_test : public sc_module {
public:
    sc_event m_posedge;
    sc_event m_negedge;

    sc_time time;

    explicit clock_test(sc_core::sc_module_name name) : sc_module(name) {
//        sc_clock clock = sc_clock("clock", sc_time(10, SC_SEC));
//
//        SC_HAS_PROCESS(clock_test);
//        SC_PROCESS(run_pos);
//        sensitive << clock.posedge_event();
//
//        SC_PROCESS(run_neg);
//        sensitive << clock.negedge_event();

        m_posedge = sc_event();
        m_negedge = sc_event();
        time = sc_time(10, SC_SEC);

        SC_HAS_PROCESS(clock_test);

        SC_PROCESS(run_pos);
        sensitive << m_posedge;
        SC_PROCESS(run_neg);
        sensitive << m_negedge;

        m_posedge.notify(time);
    }

    void run_pos() {
        m_negedge.notify(time);
    }

    void run_neg() {
        m_posedge.notify(time);
    }

};
