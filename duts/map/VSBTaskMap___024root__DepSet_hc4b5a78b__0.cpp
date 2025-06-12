// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBTaskMap.h for the primary calling header

#include "verilated.h"

#include "VSBTaskMap___024root.h"

VL_INLINE_OPT void VSBTaskMap___024root___combo__TOP__0(VSBTaskMap___024root* vlSelf) {
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__00
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__01
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__02
        if ((1U < (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__03)
        if ((1U > (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__04)
        if ((1U <= (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__05)
        if ((1U >= (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
        if ((1U == (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
            if (vlSelf->SBTaskMap__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
                vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_readyFlag = 1U;
            }
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__06
        } else if ((2U < (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__07)
        } else if ((2U > (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__08)
        } else if ((2U <= (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__09)
        } else if ((2U >= (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
        } else if ((2U == (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
            vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_readyFlag = 0U;
        }
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value 
            = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_valueNext;
        vlSelf->SBTaskMap__DOT__sbDataOutputReg = 0U;
        vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg 
            = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateNext;
        vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg 
            = vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext;
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__010
        if ((1U | (~ (IData)(vlSelf->SBTaskMap__DOT__mmioRegLogic_write)))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__011)
        if ((1U ^ (~ (IData)(vlSelf->SBTaskMap__DOT__mmioRegLogic_write)))) {
#else
        if ((1U & (~ (IData)(vlSelf->SBTaskMap__DOT__mmioRegLogic_write)))) {
#endif
            if (vlSelf->SBTaskMap__DOT__mmioRegLogic_read) {
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__012
                if ((0U == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__013)
                if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__014)
                if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__015)
                if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__016)
                if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__017)
                if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__018)
                if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__019)
                if ((0U <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__020)
                if ((0U >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__021)
                if ((0U == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__022)
                if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__023)
                if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__024)
                if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__025)
                if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__026)
                if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__027)
                if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__028)
                if ((0U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__029)
                if ((0U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__030)
                if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__031)
                if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__032)
                if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__033)
                if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__034)
                if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__035)
                if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__036)
                if ((0U <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__037)
                if ((0U >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                if ((0U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regAddr;
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__038
                } else if ((4U == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__039)
                } else if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__040)
                } else if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__041)
                } else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__042)
                } else if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__043)
                } else if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__044)
                } else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__045)
                } else if ((4U <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__046)
                } else if ((4U >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__047)
                } else if ((4U == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__048)
                } else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__049)
                } else if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__050)
                } else if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__051)
                } else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__052)
                } else if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__053)
                } else if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__054)
                } else if ((4U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__055)
                } else if ((4U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__056)
                } else if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__057)
                } else if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__058)
                } else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__059)
                } else if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__060)
                } else if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__061)
                } else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__062)
                } else if ((4U <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__063)
                } else if ((4U >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                } else if ((4U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regWData;
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__064
                } else if ((8U == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__065)
                } else if ((8U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__066)
                } else if ((8U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__067)
                } else if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__068)
                } else if ((8U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__069)
                } else if ((8U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__070)
                } else if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__071)
                } else if ((8U <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__072)
                } else if ((8U >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__073)
                } else if ((8U == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__074)
                } else if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__075)
                } else if ((8U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__076)
                } else if ((8U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__077)
                } else if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__078)
                } else if ((8U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__079)
                } else if ((8U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__080)
                } else if ((8U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__081)
                } else if ((8U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__082)
                } else if ((8U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__083)
                } else if ((8U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__084)
                } else if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__085)
                } else if ((8U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__086)
                } else if ((8U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__087)
                } else if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__088)
                } else if ((8U <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__089)
                } else if ((8U >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                } else if ((8U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
                            ? 0U : vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT___zz_memory_port0);
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__090
                } else if ((0xcU == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__091)
                } else if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__092)
                } else if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__093)
                } else if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__094)
                } else if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__095)
                } else if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__096)
                } else if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__097)
                } else if ((0xcU <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__098)
                } else if ((0xcU >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__099)
                } else if ((0xcU == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0100)
                } else if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0101)
                } else if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0102)
                } else if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0103)
                } else if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0104)
                } else if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0105)
                } else if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0106)
                } else if ((0xcU <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0107)
                } else if ((0xcU >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0108)
                } else if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0109)
                } else if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0110)
                } else if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0111)
                } else if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0112)
                } else if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0113)
                } else if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0114)
                } else if ((0xcU <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0115)
                } else if ((0xcU >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                } else if ((0xcU == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regWREna;
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0116
                } else if ((0x10U == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0117)
                } else if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0118)
                } else if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0119)
                } else if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0120)
                } else if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0121)
                } else if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0122)
                } else if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0123)
                } else if ((0x10U <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0124)
                } else if ((0x10U >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0125)
                } else if ((0x10U == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0126)
                } else if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0127)
                } else if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0128)
                } else if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0129)
                } else if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0130)
                } else if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0131)
                } else if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0132)
                } else if ((0x10U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0133)
                } else if ((0x10U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0134)
                } else if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0135)
                } else if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0136)
                } else if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0137)
                } else if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0138)
                } else if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0139)
                } else if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0140)
                } else if ((0x10U <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0141)
                } else if ((0x10U >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                } else if ((0x10U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regMappingVal;
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0142
                } else if ((0x14U == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0143)
                } else if ((0x14U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0144)
                } else if ((0x14U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0145)
                } else if ((0x14U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0146)
                } else if ((0x14U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0147)
                } else if ((0x14U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0148)
                } else if ((0x14U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0149)
                } else if ((0x14U <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0150)
                } else if ((0x14U >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0151)
                } else if ((0x14U == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0152)
                } else if ((0x14U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0153)
                } else if ((0x14U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0154)
                } else if ((0x14U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0155)
                } else if ((0x14U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0156)
                } else if ((0x14U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0157)
                } else if ((0x14U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0158)
                } else if ((0x14U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0159)
                } else if ((0x14U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0160)
                } else if ((0x14U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0161)
                } else if ((0x14U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0162)
                } else if ((0x14U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0163)
                } else if ((0x14U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0164)
                } else if ((0x14U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0165)
                } else if ((0x14U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0166)
                } else if ((0x14U <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0167)
                } else if ((0x14U >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                } else if ((0x14U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regValid;
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0168
                } else if ((0x18U == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0169)
                } else if ((0x18U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0170)
                } else if ((0x18U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0171)
                } else if ((0x18U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0172)
                } else if ((0x18U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0173)
                } else if ((0x18U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0174)
                } else if ((0x18U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0175)
                } else if ((0x18U <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0176)
                } else if ((0x18U >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0177)
                } else if ((0x18U == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0178)
                } else if ((0x18U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0179)
                } else if ((0x18U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0180)
                } else if ((0x18U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0181)
                } else if ((0x18U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0182)
                } else if ((0x18U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0183)
                } else if ((0x18U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0184)
                } else if ((0x18U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0185)
                } else if ((0x18U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0186)
                } else if ((0x18U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0187)
                } else if ((0x18U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0188)
                } else if ((0x18U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0189)
                } else if ((0x18U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0190)
                } else if ((0x18U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0191)
                } else if ((0x18U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0192)
                } else if ((0x18U <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0193)
                } else if ((0x18U >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                } else if ((0x18U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                    vlSelf->SBTaskMap__DOT__sbDataOutputReg 
                        = vlSelf->SBTaskMap__DOT__regReadyBuf;
                }
            }
        }
        if (vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_ready) {
            vlSelf->SBTaskMap__DOT__regReadyBuf = vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_ready;
        }
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0194
        if ((1U | (~ (IData)(vlSelf->SBTaskMap__DOT__mmioRegLogic_write)))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0195)
        if ((1U ^ (~ (IData)(vlSelf->SBTaskMap__DOT__mmioRegLogic_write)))) {
#else
        if ((1U & (~ (IData)(vlSelf->SBTaskMap__DOT__mmioRegLogic_write)))) {
#endif
            if (vlSelf->SBTaskMap__DOT__mmioRegLogic_read) {
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0196
                if ((0U != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0197)
                if ((0U != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                if ((0U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0198
                    if ((4U != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0199)
                    if ((4U != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                    if ((4U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0200
                        if ((8U != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0201)
                        if ((8U != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                        if ((8U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0202
                            if ((0xcU != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0203)
                            if ((0xcU != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                            if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                                if ((0x10U != (0xffU 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0204
                                               | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0205)
                                               ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                                               & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                                    if ((0x14U != (0xffU 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0206
                                                   | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0207)
                                                   ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                                                   & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                                        if ((0x18U 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0208
                                             < (0xffU 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0209)
                                             > (0xffU 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0210)
                                             <= (0xffU 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0211)
                                             >= (0xffU 
#else
                                             == (0xffU 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0212
                                                 | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0213)
                                                 ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                                                 & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0214
            if ((0U != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0215)
            if ((0U != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
            if ((0U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0216
                if ((4U != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0217)
                if ((4U != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                if ((4U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0218
                    if ((8U != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0219)
                    if ((8U != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                    if ((8U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0220
                        if ((0xcU != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0221)
                        if ((0xcU != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                        if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0222
                            if ((0x10U != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0223)
                            if ((0x10U != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                            if ((0x10U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0224
                                if ((0x14U < (0xffU 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0225)
                                if ((0x14U > (0xffU 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0226)
                                if ((0x14U <= (0xffU 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0227)
                                if ((0x14U >= (0xffU 
#else
                                if ((0x14U == (0xffU 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0228
                                               | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0229)
                                               ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                                               & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                                    vlSelf->SBTaskMap__DOT__regValid 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0230
                                        = (1U < vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0231)
                                        = (1U > vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0232)
                                        = (1U <= vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0233)
                                        = (1U >= vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#else
                                        = (1U == vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#endif
                                }
                            }
                        }
                    }
                }
            }
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0234
            if ((0U == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0235)
            if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0236)
            if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0237)
            if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0238)
            if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0239)
            if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0240)
            if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0241)
            if ((0U <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0242)
            if ((0U >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0243)
            if ((0U == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0244)
            if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0245)
            if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0246)
            if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0247)
            if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0248)
            if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0249)
            if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0250)
            if ((0U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0251)
            if ((0U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0252)
            if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0253)
            if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0254)
            if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0255)
            if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0256)
            if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0257)
            if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0258)
            if ((0U <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0259)
            if ((0U >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
            if ((0U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                vlSelf->SBTaskMap__DOT__regAddr = (7U 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0260
                                                   | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0261)
                                                   ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#else
                                                   & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0262
    if ((1U | (~ ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0263)
    if ((1U ^ (~ ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg) 
#else
    if ((1U & (~ ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0264
                  << 2U)))) {
#else
                  >> 2U)))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0265
        if ((2U | (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0266)
        if ((2U ^ (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))) {
#else
        if ((2U & (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0267
            if ((1U | (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0268)
            if ((1U ^ (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))) {
#else
            if ((1U & (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))) {
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0269
        = (7U | ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0270)
        = (7U ^ ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value) 
#else
        = (7U & ((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0271
                 - (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)));
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0272)
                 / (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)));
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0273)
                 * (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)));
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0274)
                 % (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)));
#else
                 + (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)));
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0275
                      << 5U) & (((IData)(vlSelf->SBTaskMap__DOT__regValid) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0276)
                      >> 5U) & (((IData)(vlSelf->SBTaskMap__DOT__regValid) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0277)
                      << 5U) ^ (((IData)(vlSelf->SBTaskMap__DOT__regValid) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0278)
                      >> 5U) ^ (((IData)(vlSelf->SBTaskMap__DOT__regValid) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0279)
                      >> 5U) | (((IData)(vlSelf->SBTaskMap__DOT__regValid) 
#else
                      << 5U) | (((IData)(vlSelf->SBTaskMap__DOT__regValid) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0280
                                 << 4U) & ((((7U == (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0281)
                                 >> 4U) & ((((7U == (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0282)
                                 >> 4U) & ((((7U < (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0283)
                                 >> 4U) & ((((7U > (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0284)
                                 >> 4U) & ((((7U <= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0285)
                                 >> 4U) & ((((7U >= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0286)
                                 << 4U) & ((((7U < (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0287)
                                 << 4U) & ((((7U > (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0288)
                                 << 4U) & ((((7U <= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0289)
                                 << 4U) & ((((7U >= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0290)
                                 << 4U) ^ ((((7U == (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0291)
                                 >> 4U) ^ ((((7U == (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0292)
                                 >> 4U) ^ ((((7U < (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0293)
                                 >> 4U) ^ ((((7U > (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0294)
                                 >> 4U) ^ ((((7U <= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0295)
                                 >> 4U) ^ ((((7U >= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0296)
                                 << 4U) ^ ((((7U < (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0297)
                                 << 4U) ^ ((((7U > (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0298)
                                 << 4U) ^ ((((7U <= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0299)
                                 << 4U) ^ ((((7U >= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0300)
                                 >> 4U) | ((((7U == (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0301)
                                 >> 4U) | ((((7U < (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0302)
                                 >> 4U) | ((((7U > (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0303)
                                 >> 4U) | ((((7U <= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0304)
                                 >> 4U) | ((((7U >= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0305)
                                 << 4U) | ((((7U < (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0306)
                                 << 4U) | ((((7U > (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0307)
                                 << 4U) | ((((7U <= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0308)
                                 << 4U) | ((((7U >= (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#else
                                 << 4U) | ((((7U == (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value)) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0309
                                             | (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0310)
                                             ^ (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)) 
#else
                                             & (IData)(SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_willIncrement)) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0311
                                            >> 3U) 
#else
                                            << 3U) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0312
                                           & (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))));
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0313)
                                           ^ (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))));
#else
                                           | (IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg))));
#endif
    vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateNext 
        = VSBTaskMap__ConstPool__TABLE_hfbf3e285_0[__Vtableidx10];
}

VL_INLINE_OPT void VSBTaskMap___024root___sequent__TOP__1(VSBTaskMap___024root* vlSelf) {
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0314
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0315
                ? ((IData)(0x13U) - (((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0316)
                ? ((IData)(0x13U) / (((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0317)
                ? ((IData)(0x13U) * (((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0318)
                ? ((IData)(0x13U) % (((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
#else
                ? ((IData)(0x13U) + (((IData)(vlSelf->SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux)
#endif
                                       ? vlSelf->SBTaskMap__DOT__taskMap_1__DOT__mem__DOT___zz_memory_port0
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0319
                                       : 0U) | vlSelf->SBTaskMap__DOT__taskMap_1__DOT__data__DOT__mappingValReg))
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0320)
                                       : 0U) ^ vlSelf->SBTaskMap__DOT__taskMap_1__DOT__data__DOT__mappingValReg))
#else
                                       : 0U) & vlSelf->SBTaskMap__DOT__taskMap_1__DOT__data__DOT__mappingValReg))
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0321
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid, vlSelf->io_sb_SBvalid);
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22 
        = ((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel) 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0322
           | ((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0323)
           ^ ((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
#else
           & ((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0324
              | (~ (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__io_valid_regNext))));
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0325)
              ^ (~ (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__io_valid_regNext))));
#else
              & (~ (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__io_valid_regNext))));
#endif
    vlSelf->SBTaskMap__DOT__mmioRegLogic_read = (((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0326
                                                  | (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0327)
                                                  ^ (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel)) 
#else
                                                  & (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel)) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0328
                                                 | (~ (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite)));
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0329)
                                                 ^ (~ (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite)));
#else
                                                 & (~ (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite)));
#endif
    vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext 
        = vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg;
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0330
    if ((1U < (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0331)
    if ((1U > (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0332)
    if ((1U <= (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0333)
    if ((1U >= (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
    if ((1U == (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
        if (vlSelf->SBTaskMap__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
            vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext = 2U;
        }
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0334
    } else if ((2U < (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0335)
    } else if ((2U > (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0336)
    } else if ((2U <= (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0337)
    } else if ((2U >= (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
    } else if ((2U == (IData)(vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
        vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
    }
    if (vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_wantStart) {
        vlSelf->SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskMap__ConstPool__TABLE_h5735b789_0;

VL_INLINE_OPT void VSBTaskMap___024root___sequent__TOP__2(VSBTaskMap___024root* vlSelf) {
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0338
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0339
            if ((0U != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0340)
            if ((0U != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
            if ((0U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0341
                if ((4U != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0342)
                if ((4U != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                if ((4U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0343
                    if ((8U != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0344)
                    if ((8U != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                    if ((8U != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0345
                        if ((0xcU == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0346)
                        if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0347)
                        if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0348)
                        if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0349)
                        if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0350)
                        if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0351)
                        if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0352)
                        if ((0xcU <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0353)
                        if ((0xcU >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0354)
                        if ((0xcU == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0355)
                        if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0356)
                        if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0357)
                        if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0358)
                        if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0359)
                        if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0360)
                        if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0361)
                        if ((0xcU <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0362)
                        if ((0xcU >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0363)
                        if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0364)
                        if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0365)
                        if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0366)
                        if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0367)
                        if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0368)
                        if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0369)
                        if ((0xcU <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0370)
                        if ((0xcU >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                        if ((0xcU == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                            vlSelf->SBTaskMap__DOT__regWREna 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0371
                                = (1U < vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0372)
                                = (1U > vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0373)
                                = (1U <= vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0374)
                                = (1U >= vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#else
                                = (1U == vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata);
#endif
                        }
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0375
                        if ((0xcU != (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0376)
                        if ((0xcU != (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                        if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0377
                            if ((0x10U == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0378)
                            if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0379)
                            if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0380)
                            if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0381)
                            if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0382)
                            if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0383)
                            if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0384)
                            if ((0x10U <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0385)
                            if ((0x10U >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0386)
                            if ((0x10U == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0387)
                            if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0388)
                            if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0389)
                            if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0390)
                            if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0391)
                            if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0392)
                            if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0393)
                            if ((0x10U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0394)
                            if ((0x10U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0395)
                            if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0396)
                            if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0397)
                            if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0398)
                            if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0399)
                            if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0400)
                            if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0401)
                            if ((0x10U <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0402)
                            if ((0x10U >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                            if ((0x10U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
                                vlSelf->SBTaskMap__DOT__regMappingVal 
                                    = vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata;
                            }
                        }
                    }
                }
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0403
                if ((4U == (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0404)
                if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0405)
                if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0406)
                if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0407)
                if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0408)
                if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0409)
                if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0410)
                if ((4U <= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0411)
                if ((4U >= (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0412)
                if ((4U == (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0413)
                if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0414)
                if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0415)
                if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0416)
                if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0417)
                if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0418)
                if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0419)
                if ((4U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0420)
                if ((4U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0421)
                if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0422)
                if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0423)
                if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0424)
                if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0425)
                if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0426)
                if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0427)
                if ((4U <= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0428)
                if ((4U >= (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#else
                if ((4U == (0xffU & vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress))) {
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0429
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___combo__TOP__2\n"); );
    // Body
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwdata, vlSelf->io_sb_SBwdata);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBTaskMap__io_sb_SBaddress, vlSelf->io_sb_SBaddress);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskMap__reset, vlSelf->reset);
    vlSelf->SBTaskMap__DOT__mmioRegLogic_write = (((IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBvalid) 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0430
                                                   | (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel)) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0431)
                                                   ^ (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel)) 
#else
                                                   & (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sel)) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0432
                                                  | (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite));
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0433)
                                                  ^ (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite));
#else
                                                  & (IData)(vlSelf->__Vcellinp__SBTaskMap__io_sb_SBwrite));
#endif
}

void VSBTaskMap___024root___eval(VSBTaskMap___024root* vlSelf) {
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0434
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___eval\n"); );
    // Body
    VSBTaskMap___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->__Vcellinp__SBTaskMap__clk) 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0435
          | (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk))) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0436)
          ^ (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk))) 
#else
          & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk))) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0437
         & ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0438)
         ^ ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset) 
#else
         | ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0439
            | (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset))))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0440)
            ^ (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset))))) {
#else
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset))))) {
#endif
        VSBTaskMap___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->__Vcellinp__SBTaskMap__clk) 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0441
         | (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk)))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0442)
         ^ (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk)))) {
#else
         & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk)))) {
#endif
        VSBTaskMap___024root___sequent__TOP__1(vlSelf);
    }
    VSBTaskMap___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->__Vcellinp__SBTaskMap__clk) 
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0443
          | (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk))) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0444)
          ^ (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk))) 
#else
          & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskMap__clk))) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0445
         & ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset) 
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0446)
         ^ ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset) 
#else
         | ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskMap__reset) 
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0447
            | (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset))))) {
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0448)
            ^ (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset))))) {
#else
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset))))) {
#endif
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
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0449
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___change_request\n"); );
    // Body
    return (VSBTaskMap___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSBTaskMap___024root___change_request_1(VSBTaskMap___024root* vlSelf) {
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0450
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0451
    __req |= ((vlSelf->__Vcellinp__SBTaskMap__reset & vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset));
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0452)
    __req |= ((vlSelf->__Vcellinp__SBTaskMap__reset | vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset));
#else
    __req |= ((vlSelf->__Vcellinp__SBTaskMap__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset));
#endif
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0453
    VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__SBTaskMap__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskMap.v:18: __Vcellinp__SBTaskMap__reset\n"); );
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0454)
    VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__SBTaskMap__reset & vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskMap.v:18: __Vcellinp__SBTaskMap__reset\n"); );
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0455)
    VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__SBTaskMap__reset | vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskMap.v:18: __Vcellinp__SBTaskMap__reset\n"); );
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0456)
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBTaskMap__reset & vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskMap.v:18: __Vcellinp__SBTaskMap__reset\n"); );
#elif defined(VSBTaskMap___024root__DepSet_hc4b5a78b__0457)
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBTaskMap__reset | vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskMap.v:18: __Vcellinp__SBTaskMap__reset\n"); );
#else
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBTaskMap__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskMap.v:18: __Vcellinp__SBTaskMap__reset\n"); );
#endif
    // Final
    vlSelf->__Vchglast__TOP____Vcellinp__SBTaskMap__reset 
        = vlSelf->__Vcellinp__SBTaskMap__reset;
    return __req;
}

#ifdef VL_DEBUG
void VSBTaskMap___024root___eval_debug_assertions(VSBTaskMap___024root* vlSelf) {
#ifdef VSBTaskMap___024root__DepSet_hc4b5a78b__0458
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBTaskMap__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskMap___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
