#pragma once

#include "gcd/VSBGCDCtrl.h"
#include "util/tlm_map.h"
#include "util/memory_map.h"
#include "simple_bus_rtl.h"

#include <systemc.h>

class GcdRtlWrapper : public sc_module {
	sc_clock &clk;
	SimpleBusRtl simple_bus;
	VSBGCDCtrl gcd;

	sc_signal<bool> idle_reset;

public:
	sc_signal<bool> irq;

	SC_HAS_PROCESS(GcdRtlWrapper);
	GcdRtlWrapper(sc_module_name, sc_clock &clk);
};
