// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBTaskMap.h for the primary calling header

#include "verilated.h"

#include "VSBTaskMap__Syms.h"
#include "VSBTaskMap___024root.h"

void VSBTaskMap___024root___ctor_var_reset(VSBTaskMap___024root* vlSelf);

VSBTaskMap___024root::VSBTaskMap___024root(VSBTaskMap__Syms* symsp, const char* name)
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
    VSBTaskMap___024root___ctor_var_reset(this);
}

void VSBTaskMap___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSBTaskMap___024root::~VSBTaskMap___024root() {
}
