#include "gcd_rtl.h"

#include <iostream>

GcdRtlWrapper::GcdRtlWrapper(sc_core::sc_module_name, sc_core::sc_clock &clk)
: gcd{"gcd rtl"}
, clk{clk}
, simple_bus{clk}
, irq{"gcd rtl irq"}
{
	gcd.clk(clk);

	irq = false;
	gcd.io_irq(irq);
	gcd.reset(idle_reset);

	gcd.io_sel(simple_bus.sel);
	gcd.io_sb_SBaddress(simple_bus.SBaddress);
	gcd.io_sb_SBvalid(simple_bus.SBvalid);
	gcd.io_sb_SBwdata(simple_bus.SBwdata);
	gcd.io_sb_SBwrite(simple_bus.SBwrite);
	gcd.io_sb_SBsize(simple_bus.SBsize);
	gcd.io_sb_SBready(simple_bus.SBready);
	gcd.io_sb_SBrdata(simple_bus.SBrdata);
}
