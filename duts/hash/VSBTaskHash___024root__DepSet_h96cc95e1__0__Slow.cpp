// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBTaskHash.h for the primary calling header

#include "verilated.h"

#include "VSBTaskHash___024root.h"

extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskHash__ConstPool__TABLE_h1b612472_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskHash__ConstPool__TABLE_he9a7748b_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskHash__ConstPool__TABLE_h99953dd5_0;
extern const VlUnpacked<CData/*2:0*/, 64> VSBTaskHash__ConstPool__TABLE_hfbf3e285_0;
extern const VlUnpacked<CData/*1:0*/, 16> VSBTaskHash__ConstPool__TABLE_hc9fc7c73_0;

VL_ATTR_COLD void VSBTaskHash___024root___settle__TOP__0(VSBTaskHash___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_wantStart;
    CData/*0:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement;
    CData/*0:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willClear;
    CData/*0:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willOverflow;
    CData/*0:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantExit;
    CData/*0:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantStart;
    IData/*31:0*/ SBTaskHash__DOT__taskHash_1__DOT__data__DOT__mulHash;
    CData/*2:0*/ __Vtableidx6;
    CData/*2:0*/ __Vtableidx7;
    CData/*2:0*/ __Vtableidx8;
    CData/*2:0*/ __Vtableidx9;
    CData/*3:0*/ __Vtableidx10;
    CData/*5:0*/ __Vtableidx11;
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwrite, vlSelf->io_sb_SBwrite);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskHash__io_sel, vlSelf->io_sel);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskHash__clk, vlSelf->clk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid, vlSelf->io_sb_SBvalid);
    VL_ASSIGN_SII(32,vlSelf->io_sb_SBrdata, vlSelf->SBTaskHash__DOT__sbDataOutputReg);
    VL_ASSIGN_SII(1,vlSelf->io_sb_SBready, vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_readyFlag);
    __Vtableidx7 = vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg;
    SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willClear 
        = VSBTaskHash__ConstPool__TABLE_h1b612472_0
        [__Vtableidx7];
    __Vtableidx6 = vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg;
    SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_wantStart 
        = VSBTaskHash__ConstPool__TABLE_he9a7748b_0
        [__Vtableidx6];
    SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement = 0U;
    __Vtableidx8 = vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg;
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_ready 
        = VSBTaskHash__ConstPool__TABLE_h99953dd5_0
        [__Vtableidx8];
    VL_ASSIGN_SII(1,vlSelf->io_irq, vlSelf->SBTaskHash__DOT__regReadyBuf);
    vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_wantStart = 0U;
    if ((1U != (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        if ((2U != (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
            vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_wantStart = 1U;
        }
    }
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskHash__reset, vlSelf->reset);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwdata, vlSelf->io_sb_SBwdata);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress, vlSelf->io_sb_SBaddress);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute = 0U;
    if ((1U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
        vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute = 1U;
    } else if ((2U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
        vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute = 2U;
    } else if ((3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
        vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute = 3U;
    }
    __Vtableidx9 = vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg;
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_init 
        = VSBTaskHash__ConstPool__TABLE_h1b612472_0
        [__Vtableidx9];
    SBTaskHash__DOT__taskHash_1__DOT__data__DOT__mulHash 
        = ((((vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash 
              << 4U) + (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash 
                        << 2U)) + (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash 
                                   << 1U)) + vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash);
    vlSelf->SBTaskHash__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22 
        = ((IData)(vlSelf->__Vcellinp__SBTaskHash__io_sel) 
           & ((IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid) 
              & (~ (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__io_valid_regNext))));
    vlSelf->SBTaskHash__DOT__mmioRegLogic_read = (((IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid) 
                                                   & (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sel)) 
                                                  & (~ (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwrite)));
    vlSelf->SBTaskHash__DOT__mmioRegLogic_write = (
                                                   ((IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid) 
                                                    & (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sel)) 
                                                   & (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwrite));
    if ((1U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
        if ((2U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
            if ((3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
                SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement = 1U;
            }
        }
    }
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_valueNext 
        = (7U & ((IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value) 
                 + (IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement)));
    if (SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willClear) {
        vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_valueNext = 0U;
    }
    SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willOverflow 
        = ((7U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value)) 
           & (IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement));
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s2hash 
        = (SBTaskHash__DOT__taskHash_1__DOT__data__DOT__mulHash 
           + (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x 
              ^ ((vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y 
                  << 0xdU) | VL_SHIFTRS_III(32,32,32, vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y, 0x13U))));
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s3hash 
        = (SBTaskHash__DOT__taskHash_1__DOT__data__DOT__mulHash 
           + (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y 
              ^ ((vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x 
                  << 7U) | VL_SHIFTRS_III(32,32,32, vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x, 0x19U))));
    vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext 
        = vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg;
    if ((1U == (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        if (vlSelf->SBTaskHash__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
            vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext = 2U;
        }
    } else if ((2U == (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
    }
    if (vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_wantStart) {
        vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
    }
    SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantExit = 0U;
    if ((1U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
        if ((2U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
            if ((3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
                if (SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willOverflow) {
                    SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantExit = 1U;
                }
            }
        }
    }
    __Vtableidx11 = (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_wantStart) 
                      << 5U) | (((IData)(vlSelf->SBTaskHash__DOT__regValid) 
                                 << 4U) | (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantExit) 
                                            << 3U) 
                                           | (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg))));
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext 
        = VSBTaskHash__ConstPool__TABLE_hfbf3e285_0
        [__Vtableidx11];
    SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantStart = 0U;
    if (((3U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg)) 
         & (3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
        SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantStart = 1U;
    }
    __Vtableidx10 = (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantStart) 
                      << 3U) | (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willOverflow) 
                                 << 2U) | (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg)));
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateNext 
        = VSBTaskHash__ConstPool__TABLE_hc9fc7c73_0
        [__Vtableidx10];
}

VL_ATTR_COLD void VSBTaskHash___024root___eval_initial(VSBTaskHash___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____Vcellinp__SBTaskHash__clk 
        = vlSelf->__Vcellinp__SBTaskHash__clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskHash__reset 
        = vlSelf->__VinpClk__TOP____Vcellinp__SBTaskHash__reset;
}

VL_ATTR_COLD void VSBTaskHash___024root___eval_settle(VSBTaskHash___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___eval_settle\n"); );
    // Body
    VSBTaskHash___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSBTaskHash___024root___final(VSBTaskHash___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___final\n"); );
}

VL_ATTR_COLD void VSBTaskHash___024root___ctor_var_reset(VSBTaskHash___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__SBTaskHash__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBTaskHash__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBTaskHash__io_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwrite = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwdata = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__regA = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__regB = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__regHashBuf = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__regValid = VL_RAND_RESET_I(1);
    vlSelf->SBTaskHash__DOT__regReadyBuf = VL_RAND_RESET_I(1);
    vlSelf->SBTaskHash__DOT__sbDataOutputReg = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__mmioRegLogic_read = VL_RAND_RESET_I(1);
    vlSelf->SBTaskHash__DOT__mmioRegLogic_write = VL_RAND_RESET_I(1);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_ready = VL_RAND_RESET_I(1);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_init = VL_RAND_RESET_I(1);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute = VL_RAND_RESET_I(2);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_valueNext = VL_RAND_RESET_I(3);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value = VL_RAND_RESET_I(3);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg = VL_RAND_RESET_I(2);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateNext = VL_RAND_RESET_I(2);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg = VL_RAND_RESET_I(3);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext = VL_RAND_RESET_I(3);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__a2 = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__b2 = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s2hash = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s3hash = VL_RAND_RESET_I(32);
    vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_wantStart = VL_RAND_RESET_I(1);
    vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_readyFlag = VL_RAND_RESET_I(1);
    vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg = VL_RAND_RESET_I(2);
    vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext = VL_RAND_RESET_I(2);
    vlSelf->SBTaskHash__DOT__busCtrl__DOT__io_valid_regNext = VL_RAND_RESET_I(1);
    vlSelf->SBTaskHash__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP____Vcellinp__SBTaskHash__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset = VL_RAND_RESET_I(1);
}
