#include "plic_rtl.h"
#include <iostream>
#include <boost/preprocessor/repetition/repeat.hpp>
#include "plic/VRVPLIC___024root.h"
// #include "plic_dir/VRVPLIC.h"
#define IO_INIT_PENDING(z, n, data) plic_.io_has_pending_irq_##n(pendings_[n]);

#define RESET_PENDING(z, n, data)                                                                                      \
	if (plic_.rootp->RVPLIC__DOT__pending_interrupts_##n)                                                              \
		pendings_[n] = false;

PlicRtlWrapper::PlicRtlWrapper(sc_module_name, sc_clock &clk, PrivilegeLevel level)
	: plic_{"plic_rtl"}
	, plic_regs_mem_{&plic_regs_}
	, hart{nullptr}
	, clk_{clk}
	, simple_bus_{clk_}
	, irq_pending_{"PlicRtlWrapper_IrqPending"}
{
	for (auto &p : pendings_)
		p = false;
	init();
	declare_method_process(resetPendings_handle, "resetPendings", PlicRtlWrapper, resetPendings);
	sensitive << clk_.negedge_event();
	declare_method_process(watchIrqPending_handle, "watchIrqPending", PlicRtlWrapper, watchIrqPending);
	sensitive << irq_pending_;
}

void PlicRtlWrapper::init()
{
	plic_.io_irq_pending(irq_pending_);

	// expands to IO_INIT_PENDING(z, 0, void) IO_INIT_PENDING(z, 1, void) ... IO_INIT_PENDING(z, count - 1, void)
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, IO_INIT_PENDING, void)
	plic_.io_sel(simple_bus_.sel);
	plic_.io_sb_SBaddress(simple_bus_.SBaddress);
	plic_.io_sb_SBvalid(simple_bus_.SBvalid);
	plic_.io_sb_SBwdata(simple_bus_.SBwdata);
	plic_.io_sb_SBwrite(simple_bus_.SBwrite);
	plic_.io_sb_SBsize(simple_bus_.SBsize);
	plic_.io_sb_SBready(simple_bus_.SBready);
	plic_.io_sb_SBrdata(simple_bus_.SBrdata);

	plic_.clk(clk_);
	plic_.reset(idle_reset_);

	plic_regs_.post_write_callback = std::bind(&PlicRtlWrapper::post_write_regs, this, std::placeholders::_1);
	plic_regs_.pre_read_callback = std::bind(&PlicRtlWrapper::pre_read_regs, this, std::placeholders::_1);

	tsock.register_b_transport(this, &PlicRtlWrapper::transport);
}

void PlicRtlWrapper::w1(uint64_t _sba, uint32_t _sbv) {
	// wait(clock.negedge())
	simple_bus_.sel = true;
	simple_bus_.SBaddress = _sba;
	simple_bus_.SBvalid = true;
	simple_bus_.SBwdata = _sbv;
	simple_bus_.SBwrite = true;

	// wait(clock.posedge())
	// wait(clock.negedge())
}

void PlicRtlWrapper::w2() {
	// davor s1 + einmal clock.pos  + clock.neg
	simple_bus_.SBvalid = false;
	simple_bus_.sel = false;
	// einmal clock pos
}

void PlicRtlWrapper::r1(uint64_t _sba) {
//	wait(clk_.negedge_event());
	simple_bus_.sel = true;
	simple_bus_.SBaddress = _sba;
	simple_bus_.SBvalid = true;
	simple_bus_.SBwdata = 0;
	simple_bus_.SBwrite = false;
//	wait(clk_.posedge_event());
//	wait(clk_.negedge_event());
}

uint32_t PlicRtlWrapper::r2(uint64_t _sba) {
	// davor r1 + einmal clock.pos + clock.neg
	simple_bus_.SBaddress = 0;
	simple_bus_.SBvalid = false;
	const uint32_t value = simple_bus_.SBrdata.read();
	simple_bus_.sel = false;

//	wait(clk_.posedge_event());
	memcpy(plic_regs_.mem.data() + _sba, &value, sizeof(uint32_t)); // aus pre read
	return value;
}

void PlicRtlWrapper::gateway_trigger_interrupt(uint32_t irq_id)
{
	if (irq_id >= kNumIrqs)
		return;
	pendings_[irq_id] = true;
}

void PlicRtlWrapper::transport(tlm::tlm_generic_payload &trans, sc_time &delay)
{
	vp::mm::route("PlicRtlWrapper", plic_regs_mem_, trans, delay);
}

bool PlicRtlWrapper::pre_read_regs(RegisterRange::ReadInfo t)
{
//	std::cout << "[WARNING] threads not correctly implemented, simple bus does not work" << std::endl;
//	const auto res = simple_bus_.read(t.addr);
//	memcpy(plic_regs_.mem.data() + t.addr, &res, sizeof(res));
	// std::cout << "read " << std::hex << t.addr << std::dec << std::endl;
	r1(t.addr);
	return true;
}

void PlicRtlWrapper::post_write_regs(RegisterRange::WriteInfo t)
{
//	std::cout << "[WARNING] threads not correctly implemented, simple bus does not work" << std::endl;
	uint32_t val;
	memcpy(&val, plic_regs_.mem.data() + t.addr, sizeof(val));
	// std::cout << "write " << std::hex << t.addr << " = " << val << std::dec << std::endl;
//	simple_bus_.write(t.addr, val);
	w1(t.addr, val);
}

void PlicRtlWrapper::watchIrqPending()
{
//	std::cout << "[plic rtl] some irq ready: " << irq_pending_.read() << std::endl;
	if (hart && irq_pending_.read())
	{
//		std::cout << "[plic rtl] trigger external irq" << std::endl;
		hart->trigger_external_interrupt(MachineMode);
	}
	else if (hart)
	{
//		std::cout << "[plic rtl] clear eip" << std::endl;
		hart->clear_external_interrupt(MachineMode);
	}
}

void PlicRtlWrapper::resetPendings()
{
//	std::cout << "[plic rtl] reset pending" << std::endl;
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, RESET_PENDING, void)
}
