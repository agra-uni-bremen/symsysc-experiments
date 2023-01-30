#pragma once
#include "core/common/irq_if.h"
#include "util/tlm_map.h"
#include "util/memory_map.h"
#include "simple_bus_rtl.h"

#include <array>
#include <mutex>
#include <systemc>
#include <VRVPLIC.h>
#include <tlm_utils/simple_target_socket.h>

#define PLIC_RTL_NUM_IRQS 53

class PlicRtlWrapper : public sc_core::sc_module, public interrupt_gateway
{
private:
    static constexpr uint32_t kNumIrqs = PLIC_RTL_NUM_IRQS;

public:
    SC_HAS_PROCESS(PlicRtlWrapper);
    PlicRtlWrapper(sc_core::sc_module_name, sc_core::sc_clock& clk, PrivilegeLevel level = MachineMode);
    void init();
    void gateway_trigger_interrupt(uint32_t irq_id) override;

private:
    void run();
    void transport(tlm::tlm_generic_payload &trans, sc_core::sc_time &delay);
    bool pre_read_regs(RegisterRange::ReadInfo t);
    void post_write_regs(RegisterRange::WriteInfo t);
    void watchIrqPending();
    void resetPendings();

public:
    VRVPLIC plic_;

private:
    std::mutex pendings_mtx_;
    std::array<sc_core::sc_signal<bool, sc_core::SC_MANY_WRITERS>, kNumIrqs> pendings_;
    RegisterRange plic_regs_{0x0, 0x1000'0000};
    std::vector<RegisterRange *> plic_regs_mem_;
    sc_core::sc_clock& clk_;
    SimpleBusRtl simple_bus_;

    sc_core::sc_signal<bool> irq_pending_;
    sc_core::sc_signal<bool> idle_reset_;

public:
    tlm_utils::simple_target_socket<PlicRtlWrapper> tsock;
    external_interrupt_target *hart;
};