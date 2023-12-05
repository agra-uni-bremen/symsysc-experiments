#include "hash_rtl.h"

#include <iostream>

HashRtlWrapper::HashRtlWrapper(sc_core::sc_module_name, sc_core::sc_clock &clk)
		: hash{"hash rtl"}
		, clk{clk}
		, hash_regs_mem{&hash_regs}
		, simple_bus{clk}
		, irq{"hash rtl irq"}
{
	hash.clk(clk);

	irq = false;
	hash.io_irq(irq);
	hash.reset(idle_reset);

	hash.io_sel(simple_bus.sel);
	hash.io_sb_SBaddress(simple_bus.SBaddress);
	hash.io_sb_SBvalid(simple_bus.SBvalid);
	hash.io_sb_SBwdata(simple_bus.SBwdata);
	hash.io_sb_SBwrite(simple_bus.SBwrite);
	hash.io_sb_SBsize(simple_bus.SBsize);
	hash.io_sb_SBready(simple_bus.SBready);
	hash.io_sb_SBrdata(simple_bus.SBrdata);

	hash_regs.post_write_callback = std::bind(&HashRtlWrapper::post_write_regs, this, std::placeholders::_1);
	hash_regs.pre_read_callback = std::bind(&HashRtlWrapper::pre_read_regs, this, std::placeholders::_1);
}


void HashRtlWrapper::w1(uint64_t _sba, uint32_t _sbv) {
	// wait(clock.negedge())
	simple_bus.sel = true;
	simple_bus.SBaddress = _sba;
	simple_bus.SBvalid = true;
	simple_bus.SBwdata = _sbv;
	simple_bus.SBwrite = true;

	// wait(clock.posedge())
	// wait(clock.negedge())
}

void HashRtlWrapper::w2() {
	// davor s1 + einmal clock.pos  + clock.neg
	simple_bus.SBvalid = false;
	simple_bus.sel = false;
	// einmal clock pos
}

void HashRtlWrapper::r1(uint64_t _sba) {
//	wait(clk_.negedge_event());
	simple_bus.sel = true;
	simple_bus.SBaddress = _sba;
	simple_bus.SBvalid = true;
	simple_bus.SBwdata = 0;
	simple_bus.SBwrite = false;
//	wait(clk_.posedge_event());
//	wait(clk_.negedge_event());
}

uint32_t HashRtlWrapper::r2(uint64_t _sba) {
	// davor r1 + einmal clock.pos + clock.neg
	simple_bus.SBaddress = 0;
	simple_bus.SBvalid = false;
	const uint32_t value = simple_bus.SBrdata.read();
	simple_bus.sel = false;

//	wait(clk_.posedge_event());
	memcpy(hash_regs.mem.data() + _sba, &value, sizeof(uint32_t)); // aus pre read
	return value;
}

void HashRtlWrapper::transport(tlm::tlm_generic_payload &trans, sc_time &delay)
{
	vp::mm::route("HashRtlWrapper", hash_regs_mem, trans, delay);
}

bool HashRtlWrapper::pre_read_regs(RegisterRange::ReadInfo t)
{
//	std::cout << "[WARNING] threads not correctly implemented, simple bus does not work" << std::endl;
//	const auto res = simple_bus.read(t.addr);
//	memcpy(hash_regs.mem.data() + t.addr, &res, sizeof(res));
	// std::cout << "read " << std::hex << t.addr << std::dec << std::endl;
	r1(t.addr);
	return true;
}

void HashRtlWrapper::post_write_regs(RegisterRange::WriteInfo t)
{
//	std::cout << "[WARNING] threads not correctly implemented, simple bus does not work" << std::endl;
	uint32_t val;
	memcpy(&val, hash_regs.mem.data() + t.addr, sizeof(val));
	// std::cout << "write " << std::hex << t.addr << " = " << val << std::dec << std::endl;
//	simple_bus.write(t.addr, val);
	w1(t.addr, val);
}
