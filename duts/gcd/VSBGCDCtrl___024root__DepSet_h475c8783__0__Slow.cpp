// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBGCDCtrl.h for the primary calling header

#include "verilated.h"

#include "VSBGCDCtrl___024root.h"

extern const VlUnpacked<CData/*0:0*/, 8> VSBGCDCtrl__ConstPool__TABLE_h99953dd5_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBGCDCtrl__ConstPool__TABLE_had94c6d3_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBGCDCtrl__ConstPool__TABLE_ha5c72c4f_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBGCDCtrl__ConstPool__TABLE_h15a984f6_0;
extern const VlUnpacked<CData/*0:0*/, 16> VSBGCDCtrl__ConstPool__TABLE_hb62e4706_0;
extern const VlUnpacked<CData/*2:0*/, 256> VSBGCDCtrl__ConstPool__TABLE_h7598e08f_0;

VL_ATTR_COLD void VSBGCDCtrl___024root___settle__TOP__0(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selL;
    CData/*0:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selR;
    CData/*0:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_wantStart;
    CData/*0:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__xGTy;
    CData/*2:0*/ __Vtableidx3;
    CData/*2:0*/ __Vtableidx4;
    CData/*2:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    CData/*2:0*/ __Vtableidx7;
    CData/*2:0*/ __Vtableidx8;
    CData/*2:0*/ __Vtableidx9;
    CData/*7:0*/ __Vtableidx10;
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite, vlSelf->io_sb_SBwrite);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__io_sel, vlSelf->io_sel);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__clk, vlSelf->clk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid, vlSelf->io_sb_SBvalid);
    VL_ASSIGN_SII(32,vlSelf->io_sb_SBrdata, vlSelf->SBGCDCtrl__DOT__sbDataOutputReg);
    VL_ASSIGN_SII(1,vlSelf->io_sb_SBready, vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_readyFlag);
    __Vtableidx5 = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg;
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_loadB 
        = VSBGCDCtrl__ConstPool__TABLE_h99953dd5_0[__Vtableidx5];
    __Vtableidx7 = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg;
    SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selL 
        = VSBGCDCtrl__ConstPool__TABLE_h99953dd5_0[__Vtableidx7];
    __Vtableidx8 = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg;
    SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selR 
        = VSBGCDCtrl__ConstPool__TABLE_had94c6d3_0[__Vtableidx8];
    __Vtableidx3 = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg;
    SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_wantStart 
        = VSBGCDCtrl__ConstPool__TABLE_ha5c72c4f_0[__Vtableidx3];
    __Vtableidx9 = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg;
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_ready 
        = VSBGCDCtrl__ConstPool__TABLE_h15a984f6_0[__Vtableidx9];
    VL_ASSIGN_SII(1,vlSelf->io_irq, vlSelf->SBGCDCtrl__DOT__regReadyBuf);
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_wantStart = 0U;
    if ((1U != (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        if ((2U != (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
            vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_wantStart = 1U;
        }
    }
    __Vtableidx4 = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg;
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_loadA 
        = VSBGCDCtrl__ConstPool__TABLE_had94c6d3_0[__Vtableidx4];
    __Vtableidx6 = (((IData)(vlSelf->SBGCDCtrl__DOT__regValid) 
                     << 3U) | (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg));
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_init 
        = VSBGCDCtrl__ConstPool__TABLE_hb62e4706_0[__Vtableidx6];
    SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__xGTy 
        = (vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB 
           < vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__reset, vlSelf->reset);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata, vlSelf->io_sb_SBwdata);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress, vlSelf->io_sb_SBaddress);
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22 
        = ((IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sel) 
           & ((IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid) 
              & (~ (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__io_valid_regNext))));
    vlSelf->SBGCDCtrl__DOT__mmioRegLogic_read = (((IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid) 
                                                  & (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sel)) 
                                                 & (~ (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite)));
    vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write = (((IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid) 
                                                   & (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sel)) 
                                                  & (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite));
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__subXY 
        = (((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selL)
             ? vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB
             : vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA) 
           - ((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selR)
               ? vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB
               : vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA));
    __Vtableidx10 = (((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_wantStart) 
                      << 7U) | (((IData)(vlSelf->SBGCDCtrl__DOT__regValid) 
                                 << 6U) | ((0x20U & 
                                            ((~ (IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__xGTy)) 
                                             << 5U)) 
                                           | (((vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA 
                                                < vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB) 
                                               << 4U) 
                                              | (((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__xGTy) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg))))));
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateNext 
        = VSBGCDCtrl__ConstPool__TABLE_h7598e08f_0[__Vtableidx10];
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext 
        = vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg;
    if ((1U == (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        if (vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
            vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext = 2U;
        }
    } else if ((2U == (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
    }
    if (vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_wantStart) {
        vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
    }
}

VL_ATTR_COLD void VSBGCDCtrl___024root___eval_initial(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____Vcellinp__SBGCDCtrl__clk 
        = vlSelf->__Vcellinp__SBGCDCtrl__clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBGCDCtrl__reset 
        = vlSelf->__VinpClk__TOP____Vcellinp__SBGCDCtrl__reset;
}

VL_ATTR_COLD void VSBGCDCtrl___024root___eval_settle(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___eval_settle\n"); );
    // Body
    VSBGCDCtrl___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSBGCDCtrl___024root___final(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___final\n"); );
}

VL_ATTR_COLD void VSBGCDCtrl___024root___ctor_var_reset(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__SBGCDCtrl__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBGCDCtrl__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBGCDCtrl__io_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress = VL_RAND_RESET_I(32);
    vlSelf->SBGCDCtrl__DOT__regA = VL_RAND_RESET_I(32);
    vlSelf->SBGCDCtrl__DOT__regB = VL_RAND_RESET_I(32);
    vlSelf->SBGCDCtrl__DOT__regResBuf = VL_RAND_RESET_I(32);
    vlSelf->SBGCDCtrl__DOT__regValid = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__regReadyBuf = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__sbDataOutputReg = VL_RAND_RESET_I(32);
    vlSelf->SBGCDCtrl__DOT__mmioRegLogic_read = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_ready = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_loadA = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_loadB = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_init = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg = VL_RAND_RESET_I(3);
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateNext = VL_RAND_RESET_I(3);
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA = VL_RAND_RESET_I(32);
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB = VL_RAND_RESET_I(32);
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__subXY = VL_RAND_RESET_I(32);
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_wantStart = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_readyFlag = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg = VL_RAND_RESET_I(2);
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext = VL_RAND_RESET_I(2);
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__io_valid_regNext = VL_RAND_RESET_I(1);
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP____Vcellinp__SBGCDCtrl__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset = VL_RAND_RESET_I(1);
}
