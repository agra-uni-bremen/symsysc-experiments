// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBGCDCtrl.h for the primary calling header

#include "verilated.h"

#include "VSBGCDCtrl___024root.h"

VL_INLINE_OPT void VSBGCDCtrl___024root___combo__TOP__0(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___combo__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite, vlSelf->io_sb_SBwrite);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__io_sel, vlSelf->io_sel);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__clk, vlSelf->clk);
}

extern const VlUnpacked<CData/*0:0*/, 8> VSBGCDCtrl__ConstPool__TABLE_h99953dd5_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBGCDCtrl__ConstPool__TABLE_had94c6d3_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBGCDCtrl__ConstPool__TABLE_ha5c72c4f_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBGCDCtrl__ConstPool__TABLE_h15a984f6_0;
extern const VlUnpacked<CData/*0:0*/, 16> VSBGCDCtrl__ConstPool__TABLE_hb62e4706_0;
extern const VlUnpacked<CData/*2:0*/, 256> VSBGCDCtrl__ConstPool__TABLE_h7598e08f_0;

VL_INLINE_OPT void VSBGCDCtrl___024root___sequent__TOP__0(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___sequent__TOP__0\n"); );
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
    if (vlSelf->__Vcellinp__SBGCDCtrl__reset) {
        vlSelf->SBGCDCtrl__DOT__regValid = 0U;
        vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_readyFlag = 0U;
        vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB = 0U;
        vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg = 0U;
        vlSelf->SBGCDCtrl__DOT__sbDataOutputReg = 0U;
        vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg = 0U;
        vlSelf->SBGCDCtrl__DOT__regB = 0U;
        vlSelf->SBGCDCtrl__DOT__regReadyBuf = 0U;
        vlSelf->SBGCDCtrl__DOT__regResBuf = 0U;
        vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA = 0U;
        vlSelf->SBGCDCtrl__DOT__regA = 0U;
    } else {
        vlSelf->SBGCDCtrl__DOT__regValid = 0U;
        if ((1U == (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
            if (vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
                vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_readyFlag = 1U;
            }
        } else if ((2U == (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
            vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_readyFlag = 0U;
        }
        if (vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_init) {
            vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB 
                = vlSelf->SBGCDCtrl__DOT__regB;
        }
        if (vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_loadB) {
            vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB 
                = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__subXY;
        }
        vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg 
            = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateNext;
        vlSelf->SBGCDCtrl__DOT__sbDataOutputReg = 0U;
        if ((1U & (~ (IData)(vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write)))) {
            if (vlSelf->SBGCDCtrl__DOT__mmioRegLogic_read) {
                if ((0U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                    vlSelf->SBGCDCtrl__DOT__sbDataOutputReg 
                        = vlSelf->SBGCDCtrl__DOT__regA;
                } else if ((4U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                    vlSelf->SBGCDCtrl__DOT__sbDataOutputReg 
                        = vlSelf->SBGCDCtrl__DOT__regB;
                } else if ((8U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                    vlSelf->SBGCDCtrl__DOT__sbDataOutputReg 
                        = vlSelf->SBGCDCtrl__DOT__regResBuf;
                } else if ((0xcU == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                    vlSelf->SBGCDCtrl__DOT__sbDataOutputReg 
                        = vlSelf->SBGCDCtrl__DOT__regReadyBuf;
                }
            }
        }
        vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg 
            = vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext;
        if (vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_ready) {
            vlSelf->SBGCDCtrl__DOT__regReadyBuf = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_ready;
            vlSelf->SBGCDCtrl__DOT__regResBuf = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA;
        }
        if (vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_init) {
            vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA 
                = vlSelf->SBGCDCtrl__DOT__regA;
        }
        if (vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write) {
            if ((0U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                if ((4U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                    if ((8U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                        if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                            if ((0x10U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                                vlSelf->SBGCDCtrl__DOT__regValid 
                                    = (1U == vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata);
                            }
                        }
                    }
                }
                if ((4U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                    vlSelf->SBGCDCtrl__DOT__regB = vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata;
                }
            }
            if ((0U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                vlSelf->SBGCDCtrl__DOT__regResBuf = 0U;
                vlSelf->SBGCDCtrl__DOT__regA = vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata;
            } else if ((4U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                vlSelf->SBGCDCtrl__DOT__regResBuf = 0U;
            } else if ((8U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                    if ((0x10U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                        vlSelf->SBGCDCtrl__DOT__regResBuf = 0U;
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write)))) {
            if (vlSelf->SBGCDCtrl__DOT__mmioRegLogic_read) {
                if ((0U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                    if ((4U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                        if ((8U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
                            vlSelf->SBGCDCtrl__DOT__regReadyBuf = 0U;
                        }
                    }
                }
            }
        }
        if (vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_loadA) {
            vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA 
                = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__subXY;
        }
    }
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
    VL_ASSIGN_SII(32,vlSelf->io_sb_SBrdata, vlSelf->SBGCDCtrl__DOT__sbDataOutputReg);
    __Vtableidx9 = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg;
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_ready 
        = VSBGCDCtrl__ConstPool__TABLE_h15a984f6_0[__Vtableidx9];
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_wantStart = 0U;
    if ((1U != (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        if ((2U != (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
            vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_wantStart = 1U;
        }
    }
    VL_ASSIGN_SII(1,vlSelf->io_irq, vlSelf->SBGCDCtrl__DOT__regReadyBuf);
    __Vtableidx4 = vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg;
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_loadA 
        = VSBGCDCtrl__ConstPool__TABLE_had94c6d3_0[__Vtableidx4];
    __Vtableidx6 = (((IData)(vlSelf->SBGCDCtrl__DOT__regValid) 
                     << 3U) | (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg));
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_init 
        = VSBGCDCtrl__ConstPool__TABLE_hb62e4706_0[__Vtableidx6];
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__subXY 
        = (((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selL)
             ? vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB
             : vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA) 
           - ((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selR)
               ? vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB
               : vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA));
    SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__xGTy 
        = (vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB 
           < vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA);
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
}

VL_INLINE_OPT void VSBGCDCtrl___024root___sequent__TOP__1(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__io_valid_regNext 
        = vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid;
}

VL_INLINE_OPT void VSBGCDCtrl___024root___combo__TOP__1(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata, vlSelf->io_sb_SBwdata);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress, vlSelf->io_sb_SBaddress);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__reset, vlSelf->reset);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid, vlSelf->io_sb_SBvalid);
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

void VSBGCDCtrl___024root___eval(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___eval\n"); );
    // Body
    VSBGCDCtrl___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->__Vcellinp__SBGCDCtrl__clk) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBGCDCtrl__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBGCDCtrl__reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBGCDCtrl__reset))))) {
        VSBGCDCtrl___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->__Vcellinp__SBGCDCtrl__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBGCDCtrl__clk)))) {
        VSBGCDCtrl___024root___sequent__TOP__1(vlSelf);
    }
    VSBGCDCtrl___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP____Vcellinp__SBGCDCtrl__clk 
        = vlSelf->__Vcellinp__SBGCDCtrl__clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBGCDCtrl__reset 
        = vlSelf->__VinpClk__TOP____Vcellinp__SBGCDCtrl__reset;
    vlSelf->__VinpClk__TOP____Vcellinp__SBGCDCtrl__reset 
        = vlSelf->__Vcellinp__SBGCDCtrl__reset;
}

QData VSBGCDCtrl___024root___change_request_1(VSBGCDCtrl___024root* vlSelf);

VL_INLINE_OPT QData VSBGCDCtrl___024root___change_request(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___change_request\n"); );
    // Body
    return (VSBGCDCtrl___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSBGCDCtrl___024root___change_request_1(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->__Vcellinp__SBGCDCtrl__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset));
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBGCDCtrl__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBGCDCtrl.v:18: __Vcellinp__SBGCDCtrl__reset\n"); );
    // Final
    vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset 
        = vlSelf->__Vcellinp__SBGCDCtrl__reset;
    return __req;
}

#ifdef VL_DEBUG
void VSBGCDCtrl___024root___eval_debug_assertions(VSBGCDCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
