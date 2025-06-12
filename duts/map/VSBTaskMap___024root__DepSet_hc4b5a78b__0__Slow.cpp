// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBTaskMap.h for the primary calling header

#include "verilated.h"

#include "VSBTaskMap___024root.h"

extern const VlWide<18>/*575:0*/ VSBTaskMap__ConstPool__CONST_h6846574f_0;

VL_ATTR_COLD void VSBTaskMap___024root___initial__TOP__0(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(false, 32, 8, 0, VL_CVT_PACK_STR_NW(18, VSBTaskMap__ConstPool__CONST_h6846574f_0)
                 ,  &(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_had94c6d3_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_h1b612472_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_he9a7748b_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_h5735b789_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_h99953dd5_0;
extern const VlUnpacked<CData/*2:0*/, 64> VSBTaskMap__ConstPool__TABLE_hfbf3e285_0;

VL_ATTR_COLD void VSBTaskMap___024root___settle__TOP__0(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_wantStart;
    CData/*0:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement;
    CData/*0:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willClear;
    CData/*2:0*/ __Vtableidx3;
    CData/*2:0*/ __Vtableidx4;
    CData/*2:0*/ __Vtableidx5;
    CData/*2:0*/ __Vtableidx6;
    CData/*2:0*/ __Vtableidx7;
    CData/*2:0*/ __Vtableidx8;
    CData/*2:0*/ __Vtableidx9;
    CData/*5:0*/ __Vtableidx10;
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite, vlSelf->io_sb_SBwrite);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__io_sel, vlSelf->io_sel);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__clk, vlSelf->clk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid, vlSelf->io_sb_SBvalid);
    VL_ASSIGN_SII(32,vlSelf->io_sb_SBrdata, vlSelf->SBTaskMap__DOT__sbDataOutputReg);
    VL_ASSIGN_SII(1,vlSelf->io_sb_SBready, vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_readyFlag);
    __Vtableidx7 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_writeEna 
        = VSBTaskMap__ConstPool__TABLE_had94c6d3_0[__Vtableidx7];
    __Vtableidx5 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willClear 
        = VSBTaskMap__ConstPool__TABLE_h1b612472_0[__Vtableidx5];
    __Vtableidx3 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_wantStart 
        = VSBTaskMap__ConstPool__TABLE_he9a7748b_0[__Vtableidx3];
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_bufElement = 0U;
    if ((1U & (~ ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))) {
            if ((1U & (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))) {
                vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_bufElement 
                    = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value;
            }
        }
    }
    __Vtableidx9 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux 
        = VSBTaskMap__ConstPool__TABLE_h5735b789_0[__Vtableidx9];
    __Vtableidx4 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement 
        = VSBTaskMap__ConstPool__TABLE_had94c6d3_0[__Vtableidx4];
    __Vtableidx6 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_ready 
        = VSBTaskMap__ConstPool__TABLE_h99953dd5_0[__Vtableidx6];
    __Vtableidx8 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_init 
        = VSBTaskMap__ConstPool__TABLE_h1b612472_0[__Vtableidx8];
    VL_ASSIGN_SII(1,vlSelf->io_irq, vlSelf->SBTaskMap__DOT__regReadyBuf);
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_wantStart = 0U;
    if ((1U != (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        if ((2U != (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
            vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_wantStart = 1U;
        }
    }
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__reset, vlSelf->reset);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata, vlSelf->io_sb_SBwdata);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress, vlSelf->io_sb_SBaddress);
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22 
        = ((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel) 
           & ((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
              & (~ (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__io_valid_regNext))));
    vlSelf->SBTaskMap__DOT__mmioRegLogic_read = (((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
                                                  & (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel)) 
                                                 & (~ (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite)));
    vlSelf->SBTaskMap__DOT__mmioRegLogic_write = (((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
                                                   & (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel)) 
                                                  & (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite));
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__localMemAddr 
        = ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
            ? (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_bufElement)
            : (IData)(vlSelf->SBTaskMap__DOT__regAddr));
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_valueNext 
        = (7U & ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value) 
                 + (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)));
    if (SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willClear) {
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_valueNext = 0U;
    }
    __Vtableidx10 = (((IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_wantStart) 
                      << 5U) | (((IData)(vlSelf->SBTaskMap__DOT__regValid) 
                                 << 4U) | ((((7U == (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
                                             & (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)) 
                                            << 3U) 
                                           | (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))));
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateNext 
        = VSBTaskMap__ConstPool__TABLE_hfbf3e285_0[__Vtableidx10];
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext 
        = vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg;
    if ((1U == (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        if (vlSelf->SBTaskMap__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
            vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext = 2U;
        }
    } else if ((2U == (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
    }
    if (vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_wantStart) {
        vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
    }
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT___zz_memory_port0 
        = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory
        [vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__localMemAddr];
}

VL_ATTR_COLD void VSBTaskMap___024root___eval_initial(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___eval_initial\n"); );
    // Body
    VSBTaskMap___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk 
        = vlSelf->__Vcellinp__SBTaskMap__clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset 
        = vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset;
}

VL_ATTR_COLD void VSBTaskMap___024root___eval_settle(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___eval_settle\n"); );
    // Body
    VSBTaskMap___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSBTaskMap___024root___final(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___final\n"); );
}

VL_ATTR_COLD void VSBTaskMap___024root___ctor_var_reset(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__SBTaskMap__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBTaskMap__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBTaskMap__io_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress = VL_RAND_RESET_I(32);
    vlSelf->SBTaskMap__DOT__sbDataOutputReg = VL_RAND_RESET_I(32);
    vlSelf->SBTaskMap__DOT__regAddr = VL_RAND_RESET_I(3);
    vlSelf->SBTaskMap__DOT__regWData = VL_RAND_RESET_I(32);
    vlSelf->SBTaskMap__DOT__regWREna = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__regValid = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__regMappingVal = VL_RAND_RESET_I(32);
    vlSelf->SBTaskMap__DOT__regReadyBuf = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__mmioRegLogic_read = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__mmioRegLogic_write = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_ready = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_writeEna = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_init = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_bufElement = VL_RAND_RESET_I(3);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_valueNext = VL_RAND_RESET_I(3);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value = VL_RAND_RESET_I(3);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg = VL_RAND_RESET_I(3);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateNext = VL_RAND_RESET_I(3);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__data__DOT__mappingValReg = VL_RAND_RESET_I(32);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT___zz_memory_port0 = VL_RAND_RESET_I(32);
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__localMemAddr = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_wantStart = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_readyFlag = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg = VL_RAND_RESET_I(2);
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext = VL_RAND_RESET_I(2);
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__io_valid_regNext = VL_RAND_RESET_I(1);
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset = VL_RAND_RESET_I(1);
}
