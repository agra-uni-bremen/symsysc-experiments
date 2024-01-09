#include "simple_bus_rtl.h"

// TODO: does not work bc threads are not implemented!

SimpleBusRtl::SimpleBusRtl(sc_clock &clk)
		: clk_{clk}
		, sel{"SimpleBusRTL_sel"}
		, SBaddress{"SimpleBusRTL_SBaddress"}
		, SBvalid{"SimpleBusRTL_SBvalid"}
		, SBwdata{"SimpleBusRTL_SBwdata"}
		, SBwrite{"SimpleBusRTL_SBwrite"}
		, SBsize{"SimpleBusRTL_SBsize"}
		, SBready{"SimpleBusRTL_SBready"}
		, SBrdata{"SimpleBusRTL_SBrdata"}
{}

void SimpleBusRtl::write(uint64_t addr, uint32_t value)
{
	wait(clk_.negedge_event());
	sel = true;
	SBaddress = addr;
	SBvalid = true;
	SBwdata = value;
	SBwrite = true;
	wait(clk_.posedge_event());
	wait(clk_.negedge_event());
	SBvalid = false;
	sel = false;
	wait(clk_.posedge_event());
}

uint32_t SimpleBusRtl::read(uint64_t addr)
{
	wait(clk_.negedge_event());
	sel = true;
	SBaddress = addr;
	SBvalid = true;
	SBwdata = 0;
	SBwrite = false;
	wait(clk_.posedge_event());
	wait(clk_.negedge_event());
	SBaddress = 0;
	SBvalid = false;
	const uint32_t value = SBrdata.read();
	sel = false;
	wait(clk_.posedge_event());
	return value;

}

void SimpleBusRtl::w1(uint64_t address, uint32_t value) {
	// wait(clock.negedge())
	sel = true;
	SBaddress = address;
	SBvalid = true;
	SBwdata = value;
	SBwrite = true;
	// wait(clock.posedge())
	// wait(clock.negedge())
}

void SimpleBusRtl::w2() {
	// w1()
	// wait(clock.posedge())
	// wait(clock.negedge())
	SBvalid = false;
	sel = false;
	// wait(clock.posedge())
}

void SimpleBusRtl::r1(uint64_t address) {
//	wait(clk_.negedge_event());
	sel = true;
	SBaddress = address;
	SBvalid = true;
	SBwdata = 0;
	SBwrite = false;
//	wait(clk_.posedge_event());
//	wait(clk_.negedge_event());
}

uint32_t SimpleBusRtl::r2() {
	// r1()
	// wait(clock.posedge())
	// wait(clock.negedge())
	SBaddress = 0;
	SBvalid = false;
	const uint32_t value = SBrdata.read();
	sel = false;
	// wait(clock.posedge())
	return value;
}
