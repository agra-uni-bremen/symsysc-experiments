#pragma once
#include <mutex>
#include <systemc.h>

struct SimpleBusRtl
{
	explicit SimpleBusRtl(sc_clock &clk);

	sc_signal<bool, SC_MANY_WRITERS> sel;
	sc_signal<uint32_t, SC_MANY_WRITERS> SBaddress;
	sc_signal<bool, SC_MANY_WRITERS> SBvalid;
	sc_signal<uint32_t, SC_MANY_WRITERS> SBwdata;
	sc_signal<bool, SC_MANY_WRITERS> SBwrite;
	sc_signal<uint32_t, SC_MANY_WRITERS> SBsize;
	sc_signal<bool> SBready;
	sc_signal<uint32_t> SBrdata;

	void write(uint64_t addr, uint32_t value);
	uint32_t read(uint64_t addr);

	void w1(uint64_t address, uint32_t value);
	void w2();
	void r1(uint64_t address);
	uint32_t r2();

private:
	std::mutex mtx_;
	sc_clock &clk_;
};