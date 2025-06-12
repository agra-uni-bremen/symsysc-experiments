// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBGCDCtrl.h for the primary calling header

#include "verilated.h"

#include "VSBGCDCtrl__Syms.h"
#include "VSBGCDCtrl___024root.h"

void VSBGCDCtrl___024root___ctor_var_reset(VSBGCDCtrl___024root* vlSelf);

VSBGCDCtrl___024root::VSBGCDCtrl___024root(VSBGCDCtrl__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , io_sb_SBvalid("io_sb_SBvalid")
    , io_sb_SBwrite("io_sb_SBwrite")
    , io_sb_SBsize("io_sb_SBsize")
    , io_sb_SBready("io_sb_SBready")
    , io_sel("io_sel")
    , io_irq("io_irq")
    , clk("clk")
    , reset("reset")
    , io_sb_SBaddress("io_sb_SBaddress")
    , io_sb_SBwdata("io_sb_SBwdata")
    , io_sb_SBrdata("io_sb_SBrdata")
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSBGCDCtrl___024root___ctor_var_reset(this);
}

void VSBGCDCtrl___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSBGCDCtrl___024root::~VSBGCDCtrl___024root() {
}
