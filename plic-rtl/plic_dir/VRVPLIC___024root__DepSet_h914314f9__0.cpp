// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVPLIC.h for the primary calling header

#include "verilated.h"

#include "VRVPLIC__Syms.h"
#include "VRVPLIC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRVPLIC___024root___dump_triggers__ico(VRVPLIC___024root* vlSelf);
#endif  // VL_DEBUG

void VRVPLIC___024root___eval_triggers__ico(VRVPLIC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRVPLIC___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRVPLIC___024root___dump_triggers__act(VRVPLIC___024root* vlSelf);
#endif  // VL_DEBUG

void VRVPLIC___024root___eval_triggers__act(VRVPLIC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->__Vcellinp__RVPLIC__clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP____Vcellinp__RVPLIC__clk))) 
                                      | ((IData)(vlSelf->__Vcellinp__RVPLIC__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP____Vcellinp__RVPLIC__reset))));
    vlSelf->__Vtrigrprev__TOP____Vcellinp__RVPLIC__clk 
        = vlSelf->__Vcellinp__RVPLIC__clk;
    vlSelf->__Vtrigrprev__TOP____Vcellinp__RVPLIC__reset 
        = vlSelf->__Vcellinp__RVPLIC__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRVPLIC___024root___dump_triggers__act(vlSelf);
    }
#endif
}
