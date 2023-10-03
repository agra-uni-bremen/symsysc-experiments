#include "gcd_rtl.h"

#include <iostream>

GcdRtlWrapper::GcdRtlWrapper(sc_core::sc_module_name, sc_core::sc_clock &clk)
: gcd{"gcd rtl"}
, clk{clk}
, gcd_regs_mem{&gcd_regs}
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

	gcd_regs.post_write_callback = std::bind(&GcdRtlWrapper::post_write_regs, this, std::placeholders::_1);
	gcd_regs.pre_read_callback = std::bind(&GcdRtlWrapper::pre_read_regs, this, std::placeholders::_1);
}


void GcdRtlWrapper::w1(uint64_t _sba, uint32_t _sbv) {
	// wait(clock.negedge())
	simple_bus.sel = true;
	simple_bus.SBaddress = _sba;
	simple_bus.SBvalid = true;
	simple_bus.SBwdata = _sbv;
	simple_bus.SBwrite = true;

	// wait(clock.posedge())
	// wait(clock.negedge())
}

void GcdRtlWrapper::w2() {
	// davor s1 + einmal clock.pos  + clock.neg
	simple_bus.SBvalid = false;
	simple_bus.sel = false;
	// einmal clock pos
}

void GcdRtlWrapper::r1(uint64_t _sba) {
//	wait(clk_.negedge_event());
	simple_bus.sel = true;
	simple_bus.SBaddress = _sba;
	simple_bus.SBvalid = true;
	simple_bus.SBwdata = 0;
	simple_bus.SBwrite = false;
//	wait(clk_.posedge_event());
//	wait(clk_.negedge_event());
}

uint32_t GcdRtlWrapper::r2(uint64_t _sba) {
	// davor r1 + einmal clock.pos + clock.neg
	simple_bus.SBaddress = 0;
	simple_bus.SBvalid = false;
	const uint32_t value = simple_bus.SBrdata.read();
	simple_bus.sel = false;

//	wait(clk_.posedge_event());
	memcpy(gcd_regs.mem.data() + _sba, &value, sizeof(uint32_t)); // aus pre read
	return value;
}

void GcdRtlWrapper::transport(tlm::tlm_generic_payload &trans, sc_time &delay)
{
	vp::mm::route("GcdRtlWrapper", gcd_regs_mem, trans, delay);
}

bool GcdRtlWrapper::pre_read_regs(RegisterRange::ReadInfo t)
{
//	std::cout << "[WARNING] threads not correctly implemented, simple bus does not work" << std::endl;
//	const auto res = simple_bus.read(t.addr);
//	memcpy(gcd_regs.mem.data() + t.addr, &res, sizeof(res));
	// std::cout << "read " << std::hex << t.addr << std::dec << std::endl;
	r1(t.addr);
	return true;
}

void GcdRtlWrapper::post_write_regs(RegisterRange::WriteInfo t)
{
//	std::cout << "[WARNING] threads not correctly implemented, simple bus does not work" << std::endl;
	uint32_t val;
	memcpy(&val, gcd_regs.mem.data() + t.addr, sizeof(val));
	// std::cout << "write " << std::hex << t.addr << " = " << val << std::dec << std::endl;
//	simple_bus.write(t.addr, val);
	w1(t.addr, val);
}
