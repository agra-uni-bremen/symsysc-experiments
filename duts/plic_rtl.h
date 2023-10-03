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
	void transport(tlm::tlm_generic_payload &trans, sc_time &delay);

	void w1(uint64_t _sba, uint32_t _sbv);
	void w2();
	void r1(uint64_t _sba);
	uint32_t r2(uint64_t _sba);

private:
	void run();
	bool pre_read_regs(RegisterRange::ReadInfo t);
	void post_write_regs(RegisterRange::WriteInfo t);
	void watchIrqPending();
	void resetPendings();

public:
	VRVPLIC plic_;

private:
	std::mutex pendings_mtx_;
	RegisterRange plic_regs_{0x0, 0x20'0008};
	std::vector<RegisterRange *> plic_regs_mem_;
	sc_clock& clk_;
	SimpleBusRtl simple_bus_;

	sc_signal<bool> idle_reset_;

public:
	sc_signal<bool> irq_pending_;
	std::array<sc_core::sc_signal<bool, SC_MANY_WRITERS>, kNumIrqs> pendings_;
	tlm_utils::simple_target_socket<PlicRtlWrapper> tsock;
	external_interrupt_target_rtl *hart;
};
