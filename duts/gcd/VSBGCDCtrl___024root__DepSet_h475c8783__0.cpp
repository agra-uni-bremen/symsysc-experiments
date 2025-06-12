// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBGCDCtrl.h for the primary calling header

#include "verilated.h"

#include "VSBGCDCtrl___024root.h"

VL_INLINE_OPT void VSBGCDCtrl___024root___combo__TOP__0(VSBGCDCtrl___024root* vlSelf) {
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__00
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
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
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__01
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
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
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__02
        if ((1U < (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__03)
        if ((1U > (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__04)
        if ((1U <= (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__05)
        if ((1U >= (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
        if ((1U == (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
            if (vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
                vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_readyFlag = 1U;
            }
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__06
        } else if ((2U < (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__07)
        } else if ((2U > (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__08)
        } else if ((2U <= (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__09)
        } else if ((2U >= (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
        } else if ((2U == (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
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
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__010
        if ((1U | (~ (IData)(vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write)))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__011)
        if ((1U ^ (~ (IData)(vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write)))) {
#else
        if ((1U & (~ (IData)(vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write)))) {
#endif
            if (vlSelf->SBGCDCtrl__DOT__mmioRegLogic_read) {
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__012
                if ((0U == (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__013)
                if ((0U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__014)
                if ((0U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__015)
                if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__016)
                if ((0U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__017)
                if ((0U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__018)
                if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__019)
                if ((0U <= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__020)
                if ((0U >= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__021)
                if ((0U == (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__022)
                if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__023)
                if ((0U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__024)
                if ((0U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__025)
                if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__026)
                if ((0U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__027)
                if ((0U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__028)
                if ((0U <= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__029)
                if ((0U >= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__030)
                if ((0U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__031)
                if ((0U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__032)
                if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__033)
                if ((0U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__034)
                if ((0U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__035)
                if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__036)
                if ((0U <= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__037)
                if ((0U >= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                if ((0U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
                    vlSelf->SBGCDCtrl__DOT__sbDataOutputReg 
                        = vlSelf->SBGCDCtrl__DOT__regA;
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__038
                } else if ((4U == (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__039)
                } else if ((4U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__040)
                } else if ((4U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__041)
                } else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__042)
                } else if ((4U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__043)
                } else if ((4U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__044)
                } else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__045)
                } else if ((4U <= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__046)
                } else if ((4U >= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__047)
                } else if ((4U == (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__048)
                } else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__049)
                } else if ((4U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__050)
                } else if ((4U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__051)
                } else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__052)
                } else if ((4U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__053)
                } else if ((4U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__054)
                } else if ((4U <= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__055)
                } else if ((4U >= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__056)
                } else if ((4U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__057)
                } else if ((4U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__058)
                } else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__059)
                } else if ((4U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__060)
                } else if ((4U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__061)
                } else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__062)
                } else if ((4U <= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__063)
                } else if ((4U >= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                } else if ((4U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
                    vlSelf->SBGCDCtrl__DOT__sbDataOutputReg 
                        = vlSelf->SBGCDCtrl__DOT__regB;
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__064
                } else if ((8U == (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__065)
                } else if ((8U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__066)
                } else if ((8U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__067)
                } else if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__068)
                } else if ((8U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__069)
                } else if ((8U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__070)
                } else if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__071)
                } else if ((8U <= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__072)
                } else if ((8U >= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__073)
                } else if ((8U == (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__074)
                } else if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__075)
                } else if ((8U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__076)
                } else if ((8U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__077)
                } else if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__078)
                } else if ((8U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__079)
                } else if ((8U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__080)
                } else if ((8U <= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__081)
                } else if ((8U >= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__082)
                } else if ((8U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__083)
                } else if ((8U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__084)
                } else if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__085)
                } else if ((8U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__086)
                } else if ((8U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__087)
                } else if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__088)
                } else if ((8U <= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__089)
                } else if ((8U >= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                } else if ((8U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
                    vlSelf->SBGCDCtrl__DOT__sbDataOutputReg 
                        = vlSelf->SBGCDCtrl__DOT__regResBuf;
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__090
                } else if ((0xcU == (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__091)
                } else if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__092)
                } else if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__093)
                } else if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__094)
                } else if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__095)
                } else if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__096)
                } else if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__097)
                } else if ((0xcU <= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__098)
                } else if ((0xcU >= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__099)
                } else if ((0xcU == (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0100)
                } else if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0101)
                } else if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0102)
                } else if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0103)
                } else if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0104)
                } else if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0105)
                } else if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0106)
                } else if ((0xcU <= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0107)
                } else if ((0xcU >= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0108)
                } else if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0109)
                } else if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0110)
                } else if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0111)
                } else if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0112)
                } else if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0113)
                } else if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0114)
                } else if ((0xcU <= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0115)
                } else if ((0xcU >= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                } else if ((0xcU == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
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
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0116
            if ((0U != (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0117)
            if ((0U != (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
            if ((0U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0118
                if ((4U != (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0119)
                if ((4U != (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                if ((4U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0120
                    if ((8U != (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0121)
                    if ((8U != (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                    if ((8U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0122
                        if ((0xcU != (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0123)
                        if ((0xcU != (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                        if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0124
                            if ((0x10U == (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0125)
                            if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0126)
                            if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0127)
                            if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0128)
                            if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0129)
                            if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0130)
                            if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0131)
                            if ((0x10U <= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0132)
                            if ((0x10U >= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0133)
                            if ((0x10U == (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0134)
                            if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0135)
                            if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0136)
                            if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0137)
                            if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0138)
                            if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0139)
                            if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0140)
                            if ((0x10U <= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0141)
                            if ((0x10U >= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0142)
                            if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0143)
                            if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0144)
                            if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0145)
                            if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0146)
                            if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0147)
                            if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0148)
                            if ((0x10U <= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0149)
                            if ((0x10U >= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                            if ((0x10U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
                                vlSelf->SBGCDCtrl__DOT__regValid 
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0150
                                    = (1U < vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata);
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0151)
                                    = (1U > vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata);
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0152)
                                    = (1U <= vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata);
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0153)
                                    = (1U >= vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata);
#else
                                    = (1U == vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata);
#endif
                            }
                        }
                    }
                }
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0154
                if ((4U == (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0155)
                if ((4U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0156)
                if ((4U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0157)
                if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0158)
                if ((4U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0159)
                if ((4U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0160)
                if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0161)
                if ((4U <= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0162)
                if ((4U >= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0163)
                if ((4U == (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0164)
                if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0165)
                if ((4U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0166)
                if ((4U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0167)
                if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0168)
                if ((4U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0169)
                if ((4U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0170)
                if ((4U <= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0171)
                if ((4U >= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0172)
                if ((4U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0173)
                if ((4U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0174)
                if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0175)
                if ((4U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0176)
                if ((4U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0177)
                if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0178)
                if ((4U <= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0179)
                if ((4U >= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                if ((4U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
                    vlSelf->SBGCDCtrl__DOT__regB = vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata;
                }
            }
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0180
            if ((0U == (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0181)
            if ((0U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0182)
            if ((0U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0183)
            if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0184)
            if ((0U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0185)
            if ((0U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0186)
            if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0187)
            if ((0U <= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0188)
            if ((0U >= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0189)
            if ((0U == (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0190)
            if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0191)
            if ((0U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0192)
            if ((0U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0193)
            if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0194)
            if ((0U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0195)
            if ((0U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0196)
            if ((0U <= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0197)
            if ((0U >= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0198)
            if ((0U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0199)
            if ((0U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0200)
            if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0201)
            if ((0U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0202)
            if ((0U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0203)
            if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0204)
            if ((0U <= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0205)
            if ((0U >= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
            if ((0U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
                vlSelf->SBGCDCtrl__DOT__regResBuf = 0U;
                vlSelf->SBGCDCtrl__DOT__regA = vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata;
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0206
            } else if ((4U == (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0207)
            } else if ((4U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0208)
            } else if ((4U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0209)
            } else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0210)
            } else if ((4U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0211)
            } else if ((4U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0212)
            } else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0213)
            } else if ((4U <= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0214)
            } else if ((4U >= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0215)
            } else if ((4U == (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0216)
            } else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0217)
            } else if ((4U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0218)
            } else if ((4U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0219)
            } else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0220)
            } else if ((4U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0221)
            } else if ((4U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0222)
            } else if ((4U <= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0223)
            } else if ((4U >= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0224)
            } else if ((4U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0225)
            } else if ((4U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0226)
            } else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0227)
            } else if ((4U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0228)
            } else if ((4U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0229)
            } else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0230)
            } else if ((4U <= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0231)
            } else if ((4U >= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
            } else if ((4U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
                vlSelf->SBGCDCtrl__DOT__regResBuf = 0U;
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0232
            } else if ((8U != (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0233)
            } else if ((8U != (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
            } else if ((8U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0234
                if ((0xcU != (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0235)
                if ((0xcU != (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0236
                    if ((0x10U == (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0237)
                    if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0238)
                    if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0239)
                    if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0240)
                    if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0241)
                    if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0242)
                    if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0243)
                    if ((0x10U <= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0244)
                    if ((0x10U >= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0245)
                    if ((0x10U == (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0246)
                    if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0247)
                    if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0248)
                    if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0249)
                    if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0250)
                    if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0251)
                    if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0252)
                    if ((0x10U <= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0253)
                    if ((0x10U >= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0254)
                    if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0255)
                    if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0256)
                    if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0257)
                    if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0258)
                    if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0259)
                    if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0260)
                    if ((0x10U <= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0261)
                    if ((0x10U >= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                    if ((0x10U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
                        vlSelf->SBGCDCtrl__DOT__regResBuf = 0U;
                    }
                }
            }
        }
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0262
        if ((1U | (~ (IData)(vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write)))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0263)
        if ((1U ^ (~ (IData)(vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write)))) {
#else
        if ((1U & (~ (IData)(vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write)))) {
#endif
            if (vlSelf->SBGCDCtrl__DOT__mmioRegLogic_read) {
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0264
                if ((0U != (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0265)
                if ((0U != (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                if ((0U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0266
                    if ((4U != (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0267)
                    if ((4U != (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                    if ((4U != (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0268
                        if ((8U == (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0269)
                        if ((8U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0270)
                        if ((8U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0271)
                        if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0272)
                        if ((8U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0273)
                        if ((8U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0274)
                        if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0275)
                        if ((8U <= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0276)
                        if ((8U >= (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0277)
                        if ((8U == (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0278)
                        if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0279)
                        if ((8U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0280)
                        if ((8U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0281)
                        if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0282)
                        if ((8U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0283)
                        if ((8U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0284)
                        if ((8U <= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0285)
                        if ((8U >= (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0286)
                        if ((8U < (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0287)
                        if ((8U < (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0288)
                        if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0289)
                        if ((8U > (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0290)
                        if ((8U > (0xffU | vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0291)
                        if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0292)
                        if ((8U <= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0293)
                        if ((8U >= (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#else
                        if ((8U == (0xffU & vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress))) {
#endif
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
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0294
                     << 3U) & (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg));
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0295)
                     >> 3U) & (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg));
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0296)
                     << 3U) ^ (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg));
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0297)
                     >> 3U) ^ (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg));
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0298)
                     >> 3U) | (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg));
#else
                     << 3U) | (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg));
#endif
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_init 
        = VSBGCDCtrl__ConstPool__TABLE_hb62e4706_0[__Vtableidx6];
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__subXY 
        = (((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selL)
             ? vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB
             : vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA) 
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0299
           + ((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selR)
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0300)
           / ((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selR)
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0301)
           * ((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selR)
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0302)
           % ((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selR)
#else
           - ((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_selR)
#endif
               ? vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB
               : vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA));
    SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__xGTy 
        = (vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB 
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0303
           > vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA);
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0304)
           == vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA);
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0305)
           <= vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA);
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0306)
           >= vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA);
#else
           < vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA);
#endif
    __Vtableidx10 = (((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_wantStart) 
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0307
                      << 7U) & (((IData)(vlSelf->SBGCDCtrl__DOT__regValid) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0308)
                      >> 7U) & (((IData)(vlSelf->SBGCDCtrl__DOT__regValid) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0309)
                      << 7U) ^ (((IData)(vlSelf->SBGCDCtrl__DOT__regValid) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0310)
                      >> 7U) ^ (((IData)(vlSelf->SBGCDCtrl__DOT__regValid) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0311)
                      >> 7U) | (((IData)(vlSelf->SBGCDCtrl__DOT__regValid) 
#else
                      << 7U) | (((IData)(vlSelf->SBGCDCtrl__DOT__regValid) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0312
                                 << 6U) | ((0x20U | 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0313)
                                 << 6U) & ((0x20U | 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0314)
                                 >> 6U) & ((0x20U | 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0315)
                                 << 6U) ^ ((0x20U | 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0316)
                                 >> 6U) ^ ((0x20U | 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0317)
                                 >> 6U) | ((0x20U | 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0318)
                                 << 6U) | ((0x20U ^ 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0319)
                                 << 6U) & ((0x20U ^ 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0320)
                                 >> 6U) & ((0x20U ^ 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0321)
                                 << 6U) ^ ((0x20U ^ 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0322)
                                 >> 6U) ^ ((0x20U ^ 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0323)
                                 >> 6U) | ((0x20U ^ 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0324)
                                 << 6U) & ((0x20U & 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0325)
                                 >> 6U) & ((0x20U & 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0326)
                                 << 6U) ^ ((0x20U & 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0327)
                                 >> 6U) ^ ((0x20U & 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0328)
                                 >> 6U) | ((0x20U & 
#else
                                 << 6U) | ((0x20U & 
#endif
                                            ((~ (IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__xGTy)) 
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0329
                                             >> 5U)) 
#else
                                             << 5U)) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0330
                                           & (((vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0331)
                                           ^ (((vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA 
#else
                                           | (((vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0332
                                                > vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0333)
                                                == vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0334)
                                                <= vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0335)
                                                >= vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB) 
#else
                                                < vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0336
                                               >> 4U) 
#else
                                               << 4U) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0337
                                              & (((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__xGTy) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0338)
                                              ^ (((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__xGTy) 
#else
                                              | (((IData)(SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__xGTy) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0339
                                                  >> 3U) 
#else
                                                  << 3U) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0340
                                                 & (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg))))));
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0341)
                                                 ^ (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg))))));
#else
                                                 | (IData)(vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg))))));
#endif
    vlSelf->SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateNext 
        = VSBGCDCtrl__ConstPool__TABLE_h7598e08f_0[__Vtableidx10];
}

VL_INLINE_OPT void VSBGCDCtrl___024root___sequent__TOP__1(VSBGCDCtrl___024root* vlSelf) {
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0342
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__io_valid_regNext 
        = vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid;
}

VL_INLINE_OPT void VSBGCDCtrl___024root___combo__TOP__1(VSBGCDCtrl___024root* vlSelf) {
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0343
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwdata, vlSelf->io_sb_SBwdata);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBaddress, vlSelf->io_sb_SBaddress);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__reset, vlSelf->reset);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid, vlSelf->io_sb_SBvalid);
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22 
        = ((IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sel) 
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0344
           | ((IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0345)
           ^ ((IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid) 
#else
           & ((IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0346
              | (~ (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__io_valid_regNext))));
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0347)
              ^ (~ (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__io_valid_regNext))));
#else
              & (~ (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__io_valid_regNext))));
#endif
    vlSelf->SBGCDCtrl__DOT__mmioRegLogic_read = (((IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid) 
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0348
                                                  | (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sel)) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0349)
                                                  ^ (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sel)) 
#else
                                                  & (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sel)) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0350
                                                 | (~ (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite)));
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0351)
                                                 ^ (~ (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite)));
#else
                                                 & (~ (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite)));
#endif
    vlSelf->SBGCDCtrl__DOT__mmioRegLogic_write = (((IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBvalid) 
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0352
                                                   | (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sel)) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0353)
                                                   ^ (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sel)) 
#else
                                                   & (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sel)) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0354
                                                  | (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite));
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0355)
                                                  ^ (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite));
#else
                                                  & (IData)(vlSelf->__Vcellinp__SBGCDCtrl__io_sb_SBwrite));
#endif
    vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext 
        = vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg;
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0356
    if ((1U < (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0357)
    if ((1U > (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0358)
    if ((1U <= (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0359)
    if ((1U >= (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
    if ((1U == (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
        if (vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
            vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext = 2U;
        }
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0360
    } else if ((2U < (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0361)
    } else if ((2U > (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0362)
    } else if ((2U <= (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0363)
    } else if ((2U >= (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
    } else if ((2U == (IData)(vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
        vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
    }
    if (vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_wantStart) {
        vlSelf->SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
    }
}

void VSBGCDCtrl___024root___eval(VSBGCDCtrl___024root* vlSelf) {
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0364
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___eval\n"); );
    // Body
    VSBGCDCtrl___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->__Vcellinp__SBGCDCtrl__clk) 
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0365
          | (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBGCDCtrl__clk))) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0366)
          ^ (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBGCDCtrl__clk))) 
#else
          & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBGCDCtrl__clk))) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0367
         & ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBGCDCtrl__reset) 
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0368)
         ^ ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBGCDCtrl__reset) 
#else
         | ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBGCDCtrl__reset) 
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0369
            | (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBGCDCtrl__reset))))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0370)
            ^ (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBGCDCtrl__reset))))) {
#else
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBGCDCtrl__reset))))) {
#endif
        VSBGCDCtrl___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->__Vcellinp__SBGCDCtrl__clk) 
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0371
         | (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBGCDCtrl__clk)))) {
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0372)
         ^ (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBGCDCtrl__clk)))) {
#else
         & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBGCDCtrl__clk)))) {
#endif
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
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0373
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___change_request\n"); );
    // Body
    return (VSBGCDCtrl___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSBGCDCtrl___024root___change_request_1(VSBGCDCtrl___024root* vlSelf) {
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0374
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0375
    __req |= ((vlSelf->__Vcellinp__SBGCDCtrl__reset & vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset));
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0376)
    __req |= ((vlSelf->__Vcellinp__SBGCDCtrl__reset | vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset));
#else
    __req |= ((vlSelf->__Vcellinp__SBGCDCtrl__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset));
#endif
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0377
    VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__SBGCDCtrl__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBGCDCtrl.v:18: __Vcellinp__SBGCDCtrl__reset\n"); );
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0378)
    VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__SBGCDCtrl__reset & vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBGCDCtrl.v:18: __Vcellinp__SBGCDCtrl__reset\n"); );
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0379)
    VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__SBGCDCtrl__reset | vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBGCDCtrl.v:18: __Vcellinp__SBGCDCtrl__reset\n"); );
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0380)
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBGCDCtrl__reset & vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBGCDCtrl.v:18: __Vcellinp__SBGCDCtrl__reset\n"); );
#elif defined(VSBGCDCtrl___024root__DepSet_h475c8783__0381)
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBGCDCtrl__reset | vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBGCDCtrl.v:18: __Vcellinp__SBGCDCtrl__reset\n"); );
#else
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBGCDCtrl__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBGCDCtrl.v:18: __Vcellinp__SBGCDCtrl__reset\n"); );
#endif
    // Final
    vlSelf->__Vchglast__TOP____Vcellinp__SBGCDCtrl__reset 
        = vlSelf->__Vcellinp__SBGCDCtrl__reset;
    return __req;
}

#ifdef VL_DEBUG
void VSBGCDCtrl___024root___eval_debug_assertions(VSBGCDCtrl___024root* vlSelf) {
#ifdef VSBGCDCtrl___024root__DepSet_h475c8783__0382
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBGCDCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBGCDCtrl___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
