#pragma once
#include "plic/VRVPLIC.h"
#include "core/common/irq_if_rtl.h"
#include "util/tlm_map.h"
#include "util/memory_map.h"
#include "simple_bus_rtl.h"

#include <systemc>

#include <array>
#include <mutex>
#include <tlm_utils/simple_target_socket.h>

#define PLIC_RTL_NUM_IRQS 53

class PlicRtlWrapper : public sc_module , public interrupt_gateway_rtl
{
private:
	static constexpr uint32_t kNumIrqs = PLIC_RTL_NUM_IRQS;

public:
	SC_HAS_PROCESS(PlicRtlWrapper);
	PlicRtlWrapper(sc_module_name, sc_clock& clk, PrivilegeLevel level = MachineMode);
	void init();
	void gateway_trigger_interrupt(uint32_t irq_id) override;

private:
	void run();
	void watchIrqPending();
	void resetPendings();

public:
	VRVPLIC plic_;
	SimpleBusRtl simple_bus_;

private:
	sc_clock& clk_;
	sc_signal<bool> idle_reset_;

public:
	sc_signal<bool> irq_pending_;
	std::array<sc_core::sc_signal<bool, SC_MANY_WRITERS>, kNumIrqs> pendings_;
	external_interrupt_target_rtl *hart;
};
