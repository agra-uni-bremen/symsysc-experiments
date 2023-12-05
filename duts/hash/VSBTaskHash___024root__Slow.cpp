// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBTaskHash.h for the primary calling header

#include "verilated.h"

#include "VSBTaskHash__Syms.h"
#include "VSBTaskHash___024root.h"

void VSBTaskHash___024root___ctor_var_reset(VSBTaskHash___024root* vlSelf);

VSBTaskHash___024root::VSBTaskHash___024root(VSBTaskHash__Syms* symsp, const char* name)
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
    VSBTaskHash___024root___ctor_var_reset(this);
}

void VSBTaskHash___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSBTaskHash___024root::~VSBTaskHash___024root() {
}
