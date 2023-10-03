// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBTaskMap.h for the primary calling header

#include "verilated.h"

#include "VSBTaskMap___024root.h"

VL_INLINE_OPT void VSBTaskMap___024root___combo__TOP__0(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___combo__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite, vlSelf->io_sb_SBwrite);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__io_sel, vlSelf->io_sel);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__clk, vlSelf->clk);
}

extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_h1b612472_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_he9a7748b_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_had94c6d3_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_h99953dd5_0;
extern const VlUnpacked<CData/*2:0*/, 64> VSBTaskMap__ConstPool__TABLE_hfbf3e285_0;

VL_INLINE_OPT void VSBTaskMap___024root___sequent__TOP__0(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_wantStart;
    CData/*0:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement;
    CData/*0:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willClear;
    CData/*2:0*/ __Vtableidx3;
    CData/*2:0*/ __Vtableidx4;
    CData/*2:0*/ __Vtableidx5;
    CData/*2:0*/ __Vtableidx6;
    CData/*5:0*/ __Vtableidx10;
    // Body
    if (vlSelf->__Vcellinp__SBTaskMap__reset) {
        vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_readyFlag = 0U;
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value = 0U;
        vlSelf->SBTaskMap__DOT__sbDataOutputReg = 0U;
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg = 0U;
        vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg = 0U;
        vlSelf->SBTaskMap__DOT__regReadyBuf = 0U;
        vlSelf->SBTaskMap__DOT__regValid = 0U;
        vlSelf->SBTaskMap__DOT__regAddr = 0U;
    } else {
        if ((1U == (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
            if (vlSelf->SBTaskMap__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
                vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_readyFlag = 1U;
            }
        } else if ((2U == (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
            vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_readyFlag = 0U;
        }
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value 
            = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_valueNext;
        vlSelf->SBTaskMap__DOT__sbDataOutputReg = 0U;
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg 
            = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateNext;
        vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg 
            = vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext;
        if ((1U & (~ (IData)(vlSelf->SBTaskMap__DOT__mmioRegLogic_write)))) {
            if (vlSelf->SBTaskMap__DOT__mmioRegLogic_read) {
                if ((0U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regAddr;
                } else if ((4U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regWData;
                } else if ((8U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
                            ? 0U : vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT___zz_memory_port0);
                } else if ((0xcU == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regWREna;
                } else if ((0x10U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regMappingVal;
                } else if ((0x14U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regValid;
                } else if ((0x18U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regReadyBuf;
                }
            }
        }
        if (vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_ready) {
            vlSelf->SBTaskMap__DOT__regReadyBuf = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_ready;
        }
        if ((1U & (~ (IData)(vlSelf->SBTaskMap__DOT__mmioRegLogic_write)))) {
            if (vlSelf->SBTaskMap__DOT__mmioRegLogic_read) {
                if ((0U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    if ((4U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                        if ((8U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                            if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                                if ((0x10U != (0xffU 
                                               & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                                    if ((0x14U != (0xffU 
                                                   & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                                        if ((0x18U 
                                             == (0xffU 
                                                 & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                                            vlSelf->SBTaskMap__DOT__regReadyBuf = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->SBTaskMap__DOT__regValid = 0U;
        if (vlSelf->SBTaskMap__DOT__mmioRegLogic_write) {
            if ((0U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                if ((4U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    if ((8U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                        if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                            if ((0x10U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                                if ((0x14U == (0xffU 
                                               & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                                    vlSelf->SBTaskMap__DOT__regValid 
                                        = (1U == vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
                                }
                            }
                        }
                    }
                }
            }
            if ((0U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                vlSelf->SBTaskMap__DOT__regAddr = (7U 
                                                   & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
            }
        }
    }
    VL_ASSIGN_SII(1,vlSelf->io_sb_SBready, vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_readyFlag);
    VL_ASSIGN_SII(32,vlSelf->io_sb_SBrdata, vlSelf->SBTaskMap__DOT__sbDataOutputReg);
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
    __Vtableidx4 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement 
        = VSBTaskMap__ConstPool__TABLE_had94c6d3_0[__Vtableidx4];
    __Vtableidx6 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_ready 
        = VSBTaskMap__ConstPool__TABLE_h99953dd5_0[__Vtableidx6];
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_valueNext 
        = (7U & ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value) 
                 + (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)));
    if (SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willClear) {
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_valueNext = 0U;
    }
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_wantStart = 0U;
    if ((1U != (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
        if ((2U != (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
            vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_wantStart = 1U;
        }
    }
    VL_ASSIGN_SII(1,vlSelf->io_irq, vlSelf->SBTaskMap__DOT__regReadyBuf);
    __Vtableidx10 = (((IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_wantStart) 
                      << 5U) | (((IData)(vlSelf->SBTaskMap__DOT__regValid) 
                                 << 4U) | ((((7U == (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
                                             & (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)) 
                                            << 3U) 
                                           | (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))));
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateNext 
        = VSBTaskMap__ConstPool__TABLE_hfbf3e285_0[__Vtableidx10];
}

VL_INLINE_OPT void VSBTaskMap___024root___sequent__TOP__1(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory__v0;
    IData/*31:0*/ __Vdlyvval__SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory__v0;
    // Body
    __Vdlyvset__SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory__v0 = 0U;
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__io_valid_regNext 
        = vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid;
    if (((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
          ? (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_writeEna)
          : (IData)(vlSelf->SBTaskMap__DOT__regWREna))) {
        __Vdlyvval__SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory__v0 
            = ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
                ? ((IData)(0x13U) + (((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
                                       ? vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT___zz_memory_port0
                                       : 0U) & vlSelf->SBTaskMap__DOT__taskMap_1__DOT__data__DOT__mappingValReg))
                : vlSelf->SBTaskMap__DOT__regWData);
        __Vdlyvset__SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory__v0 = 1U;
        __Vdlyvdim0__SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory__v0 
            = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__localMemAddr;
    }
    if (__Vdlyvset__SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory__v0) {
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory[__Vdlyvdim0__SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory__v0] 
            = __Vdlyvval__SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory__v0;
    }
}

VL_INLINE_OPT void VSBTaskMap___024root___combo__TOP__1(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid, vlSelf->io_sb_SBvalid);
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22 
        = ((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel) 
           & ((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
              & (~ (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__io_valid_regNext))));
    vlSelf->SBTaskMap__DOT__mmioRegLogic_read = (((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
                                                  & (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel)) 
                                                 & (~ (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite)));
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
}

extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_h5735b789_0;

VL_INLINE_OPT void VSBTaskMap___024root___sequent__TOP__2(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___sequent__TOP__2\n"); );
    // Init
    CData/*2:0*/ __Vtableidx7;
    CData/*2:0*/ __Vtableidx8;
    CData/*2:0*/ __Vtableidx9;
    // Body
    __Vtableidx7 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_writeEna 
        = VSBTaskMap__ConstPool__TABLE_had94c6d3_0[__Vtableidx7];
    __Vtableidx9 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux 
        = VSBTaskMap__ConstPool__TABLE_h5735b789_0[__Vtableidx9];
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__localMemAddr 
        = ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
            ? (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_bufElement)
            : (IData)(vlSelf->SBTaskMap__DOT__regAddr));
    if (vlSelf->__Vcellinp__SBTaskMap__reset) {
        vlSelf->SBTaskMap__DOT__regWREna = 0U;
        vlSelf->SBTaskMap__DOT__regWData = 0U;
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__data__DOT__mappingValReg = 0U;
        vlSelf->SBTaskMap__DOT__regMappingVal = 0U;
    } else {
        vlSelf->SBTaskMap__DOT__regWREna = 0U;
        if (vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_init) {
            vlSelf->SBTaskMap__DOT__taskMap_1__DOT__data__DOT__mappingValReg 
                = vlSelf->SBTaskMap__DOT__regMappingVal;
        }
        if (vlSelf->SBTaskMap__DOT__mmioRegLogic_write) {
            if ((0U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                if ((4U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    if ((8U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                        if ((0xcU == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                            vlSelf->SBTaskMap__DOT__regWREna 
                                = (1U == vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
                        }
                        if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                            if ((0x10U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                                vlSelf->SBTaskMap__DOT__regMappingVal 
                                    = vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata;
                            }
                        }
                    }
                }
                if ((4U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
                    vlSelf->SBTaskMap__DOT__regWData 
                        = vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata;
                }
            }
        }
    }
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT___zz_memory_port0 
        = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory
        [vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__localMemAddr];
    __Vtableidx8 = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_init 
        = VSBTaskMap__ConstPool__TABLE_h1b612472_0[__Vtableidx8];
}

VL_INLINE_OPT void VSBTaskMap___024root___combo__TOP__2(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___combo__TOP__2\n"); );
    // Body
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata, vlSelf->io_sb_SBwdata);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress, vlSelf->io_sb_SBaddress);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__reset, vlSelf->reset);
    vlSelf->SBTaskMap__DOT__mmioRegLogic_write = (((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
                                                   & (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel)) 
                                                  & (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite));
}

void VSBTaskMap___024root___eval(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___eval\n"); );
    // Body
    VSBTaskMap___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->__Vcellinp__SBTaskMap__clk) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset))))) {
        VSBTaskMap___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->__Vcellinp__SBTaskMap__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk)))) {
        VSBTaskMap___024root___sequent__TOP__1(vlSelf);
    }
    VSBTaskMap___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->__Vcellinp__SBTaskMap__clk) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset))))) {
        VSBTaskMap___024root___sequent__TOP__2(vlSelf);
    }
    VSBTaskMap___024root___combo__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk 
        = vlSelf->__Vcellinp__SBTaskMap__clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset 
        = vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset;
    vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset 
        = vlSelf->__Vcellinp__SBTaskMap__reset;
}

QData VSBTaskMap___024root___change_request_1(VSBTaskMap___024root* vlSelf);

VL_INLINE_OPT QData VSBTaskMap___024root___change_request(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___change_request\n"); );
    // Body
    return (VSBTaskMap___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSBTaskMap___024root___change_request_1(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->__Vcellinp__SBTaskMap__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset));
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBTaskMap__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskMap.v:18: __Vcellinp__SBTaskMap__reset\n"); );
    // Final
    vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset 
        = vlSelf->__Vcellinp__SBTaskMap__reset;
    return __req;
}

#ifdef VL_DEBUG
void VSBTaskMap___024root___eval_debug_assertions(VSBTaskMap___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
