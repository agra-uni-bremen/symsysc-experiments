#include "plic_rtl.h"
#include <iostream>
#include <boost/preprocessor/repetition/repeat.hpp>
#include "verilated/VRVPLIC___024root.h"
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

void PlicRtlWrapper::s1(uint64_t _sba, uint32_t _sbv) {
	// wait(clock.negedge())
	simple_bus_.sel = true;
	simple_bus_.SBaddress = _sba;
	simple_bus_.SBvalid = true;
	simple_bus_.SBwdata = _sbv;
	simple_bus_.SBwrite = true;

	// wait(clock.posedge())
	// wait(clock.negedge())
}

void PlicRtlWrapper::s2() {
	// davor s1 + einmal clock.pos  + clock.neg
	simple_bus_.SBvalid = false;
	simple_bus_.sel = false;
	// einmal clock pos
}

void PlicRtlWrapper::gateway_trigger_interrupt(uint32_t irq_id)
{
	if (irq_id >= kNumIrqs)
		return;
	pendings_[irq_id] = true;
}

void PlicRtlWrapper::transport(tlm::tlm_generic_payload &trans, sc_time &delay)
{
	std::cout << "transport called" << std::endl;
	vp::mm::route("PlicRtlWrapper", plic_regs_mem_, trans, delay);
	std::cout << "transport done" << std::endl;
}

bool PlicRtlWrapper::pre_read_regs(RegisterRange::ReadInfo t)
{
	std::cout << "[WARNING] simple bus does not work" << std::endl;
	std::cout << "[plic rtl] pre read regs called" << std::endl;
//	const auto res = simple_bus_.read(t.addr);
//	memcpy(plic_regs_.mem.data() + t.addr, &res, sizeof(res));
	// std::cout << "read " << std::hex << t.addr << std::dec << std::endl;
	return true;
}

void PlicRtlWrapper::post_write_regs(RegisterRange::WriteInfo t)
{
	std::cout << "[WARNING] simple bus does not work" << std::endl;
	std::cout << "[plic rtl] post write regs called" << std::endl;
	uint32_t val;
	memcpy(&val, plic_regs_.mem.data() + t.addr, sizeof(val));
	// std::cout << "write " << std::hex << t.addr << " = " << val << std::dec << std::endl;
//	simple_bus_.write(t.addr, val);
	s1(t.addr, val);
}

void PlicRtlWrapper::watchIrqPending()
{
	std::cout << "some irq ready: " << irq_pending_.read() << std::endl;
	if (hart && irq_pending_.read())
	{
		std::cout << "trigger external irq" << std::endl;
		hart->trigger_external_interrupt(MachineMode);
	}
	else if (hart)
	{
		std::cout << "clear eip" << std::endl;
		hart->clear_external_interrupt(MachineMode);
	}
}

void PlicRtlWrapper::resetPendings()
{
	BOOST_PP_REPEAT(PLIC_RTL_NUM_IRQS, RESET_PENDING, void)
}
