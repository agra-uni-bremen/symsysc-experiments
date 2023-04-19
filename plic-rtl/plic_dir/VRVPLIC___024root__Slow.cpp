// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVPLIC.h for the primary calling header

#include "verilated.h"

#include "VRVPLIC__Syms.h"
#include "VRVPLIC___024root.h"

void VRVPLIC___024root___ctor_var_reset(VRVPLIC___024root* vlSelf);

VRVPLIC___024root::VRVPLIC___024root(VRVPLIC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , io_sb_SBvalid("io_sb_SBvalid")
    , io_sb_SBwrite("io_sb_SBwrite")
    , io_sb_SBsize("io_sb_SBsize")
    , io_sb_SBready("io_sb_SBready")
    , io_sel("io_sel")
    , io_irq_pending("io_irq_pending")
    , io_has_pending_irq_0("io_has_pending_irq_0")
    , io_has_pending_irq_1("io_has_pending_irq_1")
    , io_has_pending_irq_2("io_has_pending_irq_2")
    , io_has_pending_irq_3("io_has_pending_irq_3")
    , io_has_pending_irq_4("io_has_pending_irq_4")
    , io_has_pending_irq_5("io_has_pending_irq_5")
    , io_has_pending_irq_6("io_has_pending_irq_6")
    , io_has_pending_irq_7("io_has_pending_irq_7")
    , io_has_pending_irq_8("io_has_pending_irq_8")
    , io_has_pending_irq_9("io_has_pending_irq_9")
    , io_has_pending_irq_10("io_has_pending_irq_10")
    , io_has_pending_irq_11("io_has_pending_irq_11")
    , io_has_pending_irq_12("io_has_pending_irq_12")
    , io_has_pending_irq_13("io_has_pending_irq_13")
    , io_has_pending_irq_14("io_has_pending_irq_14")
    , io_has_pending_irq_15("io_has_pending_irq_15")
    , io_has_pending_irq_16("io_has_pending_irq_16")
    , io_has_pending_irq_17("io_has_pending_irq_17")
    , io_has_pending_irq_18("io_has_pending_irq_18")
    , io_has_pending_irq_19("io_has_pending_irq_19")
    , io_has_pending_irq_20("io_has_pending_irq_20")
    , io_has_pending_irq_21("io_has_pending_irq_21")
    , io_has_pending_irq_22("io_has_pending_irq_22")
    , io_has_pending_irq_23("io_has_pending_irq_23")
    , io_has_pending_irq_24("io_has_pending_irq_24")
    , io_has_pending_irq_25("io_has_pending_irq_25")
    , io_has_pending_irq_26("io_has_pending_irq_26")
    , io_has_pending_irq_27("io_has_pending_irq_27")
    , io_has_pending_irq_28("io_has_pending_irq_28")
    , io_has_pending_irq_29("io_has_pending_irq_29")
    , io_has_pending_irq_30("io_has_pending_irq_30")
    , io_has_pending_irq_31("io_has_pending_irq_31")
    , io_has_pending_irq_32("io_has_pending_irq_32")
    , io_has_pending_irq_33("io_has_pending_irq_33")
    , io_has_pending_irq_34("io_has_pending_irq_34")
    , io_has_pending_irq_35("io_has_pending_irq_35")
    , io_has_pending_irq_36("io_has_pending_irq_36")
    , io_has_pending_irq_37("io_has_pending_irq_37")
    , io_has_pending_irq_38("io_has_pending_irq_38")
    , io_has_pending_irq_39("io_has_pending_irq_39")
    , io_has_pending_irq_40("io_has_pending_irq_40")
    , io_has_pending_irq_41("io_has_pending_irq_41")
    , io_has_pending_irq_42("io_has_pending_irq_42")
    , io_has_pending_irq_43("io_has_pending_irq_43")
    , io_has_pending_irq_44("io_has_pending_irq_44")
    , io_has_pending_irq_45("io_has_pending_irq_45")
    , io_has_pending_irq_46("io_has_pending_irq_46")
    , io_has_pending_irq_47("io_has_pending_irq_47")
    , io_has_pending_irq_48("io_has_pending_irq_48")
    , io_has_pending_irq_49("io_has_pending_irq_49")
    , io_has_pending_irq_50("io_has_pending_irq_50")
    , io_has_pending_irq_51("io_has_pending_irq_51")
    , io_has_pending_irq_52("io_has_pending_irq_52")
    , clk("clk")
    , reset("reset")
    , io_sb_SBaddress("io_sb_SBaddress")
    , io_sb_SBwdata("io_sb_SBwdata")
    , io_sb_SBrdata("io_sb_SBrdata")
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVPLIC___024root___ctor_var_reset(this);
}

void VRVPLIC___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVPLIC___024root::~VRVPLIC___024root() {
}
