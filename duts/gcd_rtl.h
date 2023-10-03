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
	RegisterRange gcd_regs{0x0,0x14};
	std::vector<RegisterRange *> gcd_regs_mem;

	sc_signal<bool> idle_reset;

public:
	sc_signal<bool> irq;

	SC_HAS_PROCESS(GcdRtlWrapper);
	GcdRtlWrapper(sc_module_name, sc_clock &clk);

	void transport(tlm::tlm_generic_payload &trans, sc_time &delay);

	void w1(uint64_t _sba, uint32_t _sbv);
	void w2();
	void r1(uint64_t _sba);
	uint32_t r2(uint64_t _sba);

private:
	bool pre_read_regs(RegisterRange::ReadInfo t);
	void post_write_regs(RegisterRange::WriteInfo t);
};
