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
	, hart{nullptr}
	, clk_{clk}
	, simple_bus_{clk}
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
}

void PlicRtlWrapper::gateway_trigger_interrupt(uint32_t irq_id)
{
	if (irq_id >= kNumIrqs)
		return;
	pendings_[irq_id] = true;
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
