// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBTaskHash.h for the primary calling header

#include "verilated.h"

#include "VSBTaskHash___024root.h"

VL_INLINE_OPT void VSBTaskHash___024root___combo__TOP__0(VSBTaskHash___024root* vlSelf) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__00
	if (false || vlSelf) {}  // Prevent unused
#else
	if (false && vlSelf) {}  // Prevent unused
#endif
	VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
	VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___combo__TOP__0\n"); );
	// Body
	VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwrite, vlSelf->io_sb_SBwrite);
	VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskHash__io_sel, vlSelf->io_sel);
	VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskHash__clk, vlSelf->clk);
}

extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskHash__ConstPool__TABLE_h1b612472_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskHash__ConstPool__TABLE_he9a7748b_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSBTaskHash__ConstPool__TABLE_h99953dd5_0;
extern const VlUnpacked<CData/*2:0*/, 64> VSBTaskHash__ConstPool__TABLE_hfbf3e285_0;
extern const VlUnpacked<CData/*1:0*/, 16> VSBTaskHash__ConstPool__TABLE_hc9fc7c73_0;

VL_INLINE_OPT void VSBTaskHash___024root___sequent__TOP__0(VSBTaskHash___024root* vlSelf) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__01
	if (false || vlSelf) {}  // Prevent unused
#else
	if (false && vlSelf) {}  // Prevent unused
#endif
	VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
	VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___sequent__TOP__0\n"); );
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
	if (vlSelf->__Vcellinp__SBTaskHash__reset) {
		vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_readyFlag = 0U;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x = 0U;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y = 0U;
		vlSelf->SBTaskHash__DOT__regValid = 0U;
		vlSelf->SBTaskHash__DOT__sbDataOutputReg = 0U;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg = 0U;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value = 0U;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg = 0U;
		vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg = 0U;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__a2 = 0U;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__b2 = 0U;
		vlSelf->SBTaskHash__DOT__regReadyBuf = 0U;
		vlSelf->SBTaskHash__DOT__regHashBuf = 0U;
		vlSelf->SBTaskHash__DOT__regA = 0U;
		vlSelf->SBTaskHash__DOT__regB = 0U;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash = 0x11U;
	} else {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__02
		if ((1U < (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__03)
		if ((1U > (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__04)
		if ((1U <= (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__05)
		if ((1U >= (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
		if ((1U == (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
			if (vlSelf->SBTaskHash__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
				vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_readyFlag = 1U;
			}
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__06
		} else if ((2U < (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__07)
		} else if ((2U > (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__08)
		} else if ((2U <= (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__09)
		} else if ((2U >= (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
		} else if ((2U == (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
			vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_readyFlag = 0U;
		}
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__010
		if ((1U | (~ (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_init)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__011)
		if ((1U ^ (~ (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_init)))) {
#else
		if ((1U & (~ (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_init)))) {
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__012
			if ((1U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__013)
			if ((1U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__014)
			if ((1U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__015)
			if ((1U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#else
			if ((1U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#endif
				vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x
						= vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__a2;
				vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y
						= vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__b2;
			}
		}
		vlSelf->SBTaskHash__DOT__regValid = 0U;
		vlSelf->SBTaskHash__DOT__sbDataOutputReg = 0U;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg
				= vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value
				= vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_valueNext;
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg
				= vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateNext;
		vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg
				= vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__016
		if ((1U | (~ (IData)(vlSelf->SBTaskHash__DOT__mmioRegLogic_write)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__017)
		if ((1U ^ (~ (IData)(vlSelf->SBTaskHash__DOT__mmioRegLogic_write)))) {
#else
		if ((1U & (~ (IData)(vlSelf->SBTaskHash__DOT__mmioRegLogic_write)))) {
#endif
			if (vlSelf->SBTaskHash__DOT__mmioRegLogic_read) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__018
				if ((0U == (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__019)
				if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__020)
				if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__021)
				if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__022)
				if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__023)
				if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__024)
				if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__025)
				if ((0U <= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__026)
				if ((0U >= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__027)
				if ((0U == (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__028)
				if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__029)
				if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__030)
				if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__031)
				if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__032)
				if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__033)
				if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__034)
				if ((0U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__035)
				if ((0U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__036)
				if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__037)
				if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__038)
				if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__039)
				if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__040)
				if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__041)
				if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__042)
				if ((0U <= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__043)
				if ((0U >= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
				if ((0U == (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
					vlSelf->SBTaskHash__DOT__sbDataOutputReg
							= vlSelf->SBTaskHash__DOT__regA;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__044
				} else if ((4U == (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__045)
				} else if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__046)
				} else if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__047)
				} else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__048)
				} else if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__049)
				} else if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__050)
				} else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__051)
				} else if ((4U <= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__052)
				} else if ((4U >= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__053)
				} else if ((4U == (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__054)
				} else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__055)
				} else if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__056)
				} else if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__057)
				} else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__058)
				} else if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__059)
				} else if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__060)
				} else if ((4U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__061)
				} else if ((4U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__062)
				} else if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__063)
				} else if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__064)
				} else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__065)
				} else if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__066)
				} else if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__067)
				} else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__068)
				} else if ((4U <= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__069)
				} else if ((4U >= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
				} else if ((4U == (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
					vlSelf->SBTaskHash__DOT__sbDataOutputReg
							= vlSelf->SBTaskHash__DOT__regB;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__070
				} else if ((8U == (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__071)
				} else if ((8U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__072)
				} else if ((8U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__073)
				} else if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__074)
				} else if ((8U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__075)
				} else if ((8U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__076)
				} else if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__077)
				} else if ((8U <= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__078)
				} else if ((8U >= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__079)
				} else if ((8U == (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__080)
				} else if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__081)
				} else if ((8U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__082)
				} else if ((8U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__083)
				} else if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__084)
				} else if ((8U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__085)
				} else if ((8U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__086)
				} else if ((8U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__087)
				} else if ((8U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__088)
				} else if ((8U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__089)
				} else if ((8U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__090)
				} else if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__091)
				} else if ((8U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__092)
				} else if ((8U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__093)
				} else if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__094)
				} else if ((8U <= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__095)
				} else if ((8U >= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
				} else if ((8U == (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
					vlSelf->SBTaskHash__DOT__sbDataOutputReg
							= vlSelf->SBTaskHash__DOT__regHashBuf;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__096
				} else if ((0xcU == (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__097)
				} else if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__098)
				} else if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__099)
				} else if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0100)
				} else if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0101)
				} else if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0102)
				} else if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0103)
				} else if ((0xcU <= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0104)
				} else if ((0xcU >= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0105)
				} else if ((0xcU == (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0106)
				} else if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0107)
				} else if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0108)
				} else if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0109)
				} else if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0110)
				} else if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0111)
				} else if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0112)
				} else if ((0xcU <= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0113)
				} else if ((0xcU >= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0114)
				} else if ((0xcU < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0115)
				} else if ((0xcU < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0116)
				} else if ((0xcU < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0117)
				} else if ((0xcU > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0118)
				} else if ((0xcU > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0119)
				} else if ((0xcU > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0120)
				} else if ((0xcU <= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0121)
				} else if ((0xcU >= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
				} else if ((0xcU == (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
					vlSelf->SBTaskHash__DOT__sbDataOutputReg
							= vlSelf->SBTaskHash__DOT__regReadyBuf;
				}
			}
		}
		if (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_ready) {
			vlSelf->SBTaskHash__DOT__regReadyBuf = vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_ready;
			vlSelf->SBTaskHash__DOT__regHashBuf = vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash;
		}
		if (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_init) {
			vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__a2
					= vlSelf->SBTaskHash__DOT__regA;
			vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__b2
					= vlSelf->SBTaskHash__DOT__regB;
			vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash = 0x11U;
		} else if ((1U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0122
			if ((2U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0123)
			if ((2U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0124)
			if ((2U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0125)
			if ((2U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#else
			if ((2U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#endif
				vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__a2
						= vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s2hash;
				vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
						= vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s2hash;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0126
			} else if ((3U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0127)
			} else if ((3U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0128)
			} else if ((3U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0129)
			} else if ((3U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#else
			} else if ((3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#endif
				vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
						= vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s3hash;
			}
			if ((2U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0130
				if ((3U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0131)
				if ((3U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0132)
				if ((3U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0133)
				if ((3U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#else
				if ((3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute))) {
#endif
					vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__b2
							= vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s3hash;
				}
			}
		}
		if (vlSelf->SBTaskHash__DOT__mmioRegLogic_write) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0134
			if ((0U != (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0135)
			if ((0U != (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
			if ((0U != (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0136
				if ((4U != (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0137)
				if ((4U != (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
				if ((4U != (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0138
					if ((8U != (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0139)
					if ((8U != (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
					if ((8U != (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0140
						if ((0xcU != (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0141)
						if ((0xcU != (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
						if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0142
							if ((0x10U == (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0143)
							if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0144)
							if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0145)
							if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0146)
							if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0147)
							if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0148)
							if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0149)
							if ((0x10U <= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0150)
							if ((0x10U >= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0151)
							if ((0x10U == (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0152)
							if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0153)
							if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0154)
							if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0155)
							if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0156)
							if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0157)
							if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0158)
							if ((0x10U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0159)
							if ((0x10U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0160)
							if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0161)
							if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0162)
							if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0163)
							if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0164)
							if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0165)
							if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0166)
							if ((0x10U <= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0167)
							if ((0x10U >= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
							if ((0x10U == (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
								vlSelf->SBTaskHash__DOT__regValid
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0168
										= (1U < vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwdata);
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0169)
										= (1U > vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwdata);
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0170)
										= (1U <= vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwdata);
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0171)
										= (1U >= vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwdata);
#else
										= (1U == vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwdata);
#endif
							}
						}
					}
				}
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0172
				if ((4U == (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0173)
				if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0174)
				if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0175)
				if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0176)
				if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0177)
				if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0178)
				if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0179)
				if ((4U <= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0180)
				if ((4U >= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0181)
				if ((4U == (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0182)
				if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0183)
				if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0184)
				if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0185)
				if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0186)
				if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0187)
				if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0188)
				if ((4U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0189)
				if ((4U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0190)
				if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0191)
				if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0192)
				if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0193)
				if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0194)
				if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0195)
				if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0196)
				if ((4U <= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0197)
				if ((4U >= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
				if ((4U == (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
					vlSelf->SBTaskHash__DOT__regB = vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwdata;
				}
			}
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0198
			if ((0U == (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0199)
			if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0200)
			if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0201)
			if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0202)
			if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0203)
			if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0204)
			if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0205)
			if ((0U <= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0206)
			if ((0U >= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0207)
			if ((0U == (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0208)
			if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0209)
			if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0210)
			if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0211)
			if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0212)
			if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0213)
			if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0214)
			if ((0U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0215)
			if ((0U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0216)
			if ((0U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0217)
			if ((0U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0218)
			if ((0U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0219)
			if ((0U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0220)
			if ((0U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0221)
			if ((0U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0222)
			if ((0U <= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0223)
			if ((0U >= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
			if ((0U == (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
				vlSelf->SBTaskHash__DOT__regHashBuf = 0U;
				vlSelf->SBTaskHash__DOT__regA = vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwdata;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0224
			} else if ((4U == (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0225)
			} else if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0226)
			} else if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0227)
			} else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0228)
			} else if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0229)
			} else if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0230)
			} else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0231)
			} else if ((4U <= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0232)
			} else if ((4U >= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0233)
			} else if ((4U == (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0234)
			} else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0235)
			} else if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0236)
			} else if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0237)
			} else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0238)
			} else if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0239)
			} else if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0240)
			} else if ((4U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0241)
			} else if ((4U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0242)
			} else if ((4U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0243)
			} else if ((4U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0244)
			} else if ((4U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0245)
			} else if ((4U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0246)
			} else if ((4U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0247)
			} else if ((4U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0248)
			} else if ((4U <= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0249)
			} else if ((4U >= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
			} else if ((4U == (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
				vlSelf->SBTaskHash__DOT__regHashBuf = 0U;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0250
			} else if ((8U != (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0251)
			} else if ((8U != (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
			} else if ((8U != (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0252
				if ((0xcU != (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0253)
				if ((0xcU != (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
				if ((0xcU != (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0254
					if ((0x10U == (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0255)
					if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0256)
					if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0257)
					if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0258)
					if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0259)
					if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0260)
					if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0261)
					if ((0x10U <= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0262)
					if ((0x10U >= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0263)
					if ((0x10U == (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0264)
					if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0265)
					if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0266)
					if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0267)
					if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0268)
					if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0269)
					if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0270)
					if ((0x10U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0271)
					if ((0x10U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0272)
					if ((0x10U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0273)
					if ((0x10U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0274)
					if ((0x10U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0275)
					if ((0x10U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0276)
					if ((0x10U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0277)
					if ((0x10U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0278)
					if ((0x10U <= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0279)
					if ((0x10U >= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
					if ((0x10U == (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
						vlSelf->SBTaskHash__DOT__regHashBuf = 0U;
					}
				}
			}
		}
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0280
		if ((1U | (~ (IData)(vlSelf->SBTaskHash__DOT__mmioRegLogic_write)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0281)
		if ((1U ^ (~ (IData)(vlSelf->SBTaskHash__DOT__mmioRegLogic_write)))) {
#else
		if ((1U & (~ (IData)(vlSelf->SBTaskHash__DOT__mmioRegLogic_write)))) {
#endif
			if (vlSelf->SBTaskHash__DOT__mmioRegLogic_read) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0282
				if ((0U != (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0283)
				if ((0U != (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
				if ((0U != (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0284
					if ((4U != (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0285)
					if ((4U != (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
					if ((4U != (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0286
						if ((8U == (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0287)
						if ((8U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0288)
						if ((8U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0289)
						if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0290)
						if ((8U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0291)
						if ((8U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0292)
						if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0293)
						if ((8U <= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0294)
						if ((8U >= (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0295)
						if ((8U == (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0296)
						if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0297)
						if ((8U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0298)
						if ((8U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0299)
						if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0300)
						if ((8U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0301)
						if ((8U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0302)
						if ((8U <= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0303)
						if ((8U >= (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0304)
						if ((8U < (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0305)
						if ((8U < (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0306)
						if ((8U < (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0307)
						if ((8U > (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0308)
						if ((8U > (0xffU | vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0309)
						if ((8U > (0xffU ^ vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0310)
						if ((8U <= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0311)
						if ((8U >= (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#else
						if ((8U == (0xffU & vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress))) {
#endif
							vlSelf->SBTaskHash__DOT__regReadyBuf = 0U;
						}
					}
				}
			}
		}
	}
	VL_ASSIGN_SII(1,vlSelf->io_sb_SBready, vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_readyFlag);
	VL_ASSIGN_SII(32,vlSelf->io_sb_SBrdata, vlSelf->SBTaskHash__DOT__sbDataOutputReg);
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
	if ((1U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
		if ((2U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0312
			if ((3U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0313)
			if ((3U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0314)
			if ((3U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0315)
			if ((3U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#else
			if ((3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#endif
				SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement = 1U;
			}
		}
	}
	vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_valueNext
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0316
			= (7U | ((IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value)
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0317)
			= (7U ^ ((IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value)
#else
			= (7U & ((IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value)
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0318
					 - (IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement)));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0319)
					 / (IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement)));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0320)
					 * (IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement)));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0321)
					 % (IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement)));
#else
					 + (IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement)));
#endif
	if (SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willClear) {
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_valueNext = 0U;
	}
	SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willOverflow
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0322
			= ((7U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value))
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0323)
			= ((7U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value))
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0324)
			= ((7U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value))
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0325)
			= ((7U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value))
#else
			= ((7U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value))
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0326
			   | (IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0327)
			   ^ (IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement));
#else
			   & (IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willIncrement));
#endif
	vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_wantStart = 0U;
	if ((1U != (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
		if ((2U != (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
			vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_wantStart = 1U;
		}
	}
	VL_ASSIGN_SII(1,vlSelf->io_irq, vlSelf->SBTaskHash__DOT__regReadyBuf);
	SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantExit = 0U;
	if ((1U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
		if ((2U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0328
			if ((3U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0329)
			if ((3U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0330)
			if ((3U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0331)
			if ((3U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#else
			if ((3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#endif
				if (SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willOverflow) {
					SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantExit = 1U;
				}
			}
		}
	}
	vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute = 0U;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0332
	if ((1U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0333)
	if ((1U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0334)
	if ((1U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0335)
	if ((1U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#else
	if ((1U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#endif
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute = 1U;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0336
	} else if ((2U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0337)
	} else if ((2U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0338)
	} else if ((2U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0339)
	} else if ((2U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#else
	} else if ((2U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#endif
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute = 2U;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0340
	} else if ((3U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0341)
	} else if ((3U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0342)
	} else if ((3U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0343)
	} else if ((3U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#else
	} else if ((3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg))) {
#endif
		vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute = 3U;
	}
	__Vtableidx9 = vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg;
	vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_init
			= VSBTaskHash__ConstPool__TABLE_h1b612472_0
	[__Vtableidx9];
	__Vtableidx11 = (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_wantStart)
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0344
			<< 5U) & (((IData)(vlSelf->SBTaskHash__DOT__regValid)
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0345)
			<< 5U) ^ (((IData)(vlSelf->SBTaskHash__DOT__regValid)
#else
			<< 5U) | (((IData)(vlSelf->SBTaskHash__DOT__regValid)
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0346
			<< 4U) & (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantExit)
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0347)
			<< 4U) ^ (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantExit)
#else
			<< 4U) | (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantExit)
#endif
			<< 3U)
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0348
					  & (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg))));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0349)
					  ^ (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg))));
#else
					  | (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg))));
#endif
	vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext
			= VSBTaskHash__ConstPool__TABLE_hfbf3e285_0
	[__Vtableidx11];
	SBTaskHash__DOT__taskHash_1__DOT__data__DOT__mulHash
			= ((((vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0350
			<< 4U) - (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0351)
			<< 4U) / (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0352)
			<< 4U) * (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0353)
			<< 4U) % (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#else
			<< 4U) + (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0354
			<< 2U)) - (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0355)
			<< 2U)) / (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0356)
			<< 2U)) * (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0357)
			<< 2U)) % (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#else
			<< 2U)) + (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0358
			<< 1U)) - vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash);
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0359)
			<< 1U)) / vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash);
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0360)
			<< 1U)) * vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash);
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0361)
			<< 1U)) % vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash);
#else
			<< 1U)) + vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash);
#endif
	SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantStart = 0U;
	if (((3U != (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg))
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0362
		 | (3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0363)
		 | (3U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0364)
		 | (3U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0365)
		 | (3U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0366)
		 | (3U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0367)
		 ^ (3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0368)
		 ^ (3U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0369)
		 ^ (3U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0370)
		 ^ (3U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0371)
		 ^ (3U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0372)
		 & (3U < (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0373)
		 & (3U > (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0374)
		 & (3U <= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0375)
		 & (3U >= (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#else
		 & (3U == (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext)))) {
#endif
		SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantStart = 1U;
	}
	vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s2hash
			= (SBTaskHash__DOT__taskHash_1__DOT__data__DOT__mulHash
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0376
			   - (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0377)
			   / (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0378)
			   * (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0379)
			   % (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x
#else
			   + (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0380
				  & ((vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0381)
				  | ((vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y
#else
				  ^ ((vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0382
			<< 0xdU) & VL_SHIFTRS_III(32,32,32, vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y, 0x13U))));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0383)
			<< 0xdU) ^ VL_SHIFTRS_III(32,32,32, vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y, 0x13U))));
#else
			<< 0xdU) | VL_SHIFTRS_III(32,32,32, vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y, 0x13U))));
#endif
	vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s3hash
			= (SBTaskHash__DOT__taskHash_1__DOT__data__DOT__mulHash
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0384
			   - (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0385)
			   / (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0386)
			   * (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0387)
			   % (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y
#else
			   + (vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0388
				  & ((vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0389)
				  | ((vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x
#else
				  ^ ((vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0390
			<< 7U) & VL_SHIFTRS_III(32,32,32, vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x, 0x19U))));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0391)
			<< 7U) ^ VL_SHIFTRS_III(32,32,32, vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x, 0x19U))));
#else
			<< 7U) | VL_SHIFTRS_III(32,32,32, vlSelf->SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x, 0x19U))));
#endif
	__Vtableidx10 = (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_wantStart)
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0392
			<< 3U) & (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willOverflow)
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0393)
			<< 3U) ^ (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willOverflow)
#else
			<< 3U) | (((IData)(SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_willOverflow)
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0394
			<< 2U) & (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg)));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0395)
			<< 2U) ^ (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg)));
#else
			<< 2U) | (IData)(vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg)));
#endif
	vlSelf->SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateNext
			= VSBTaskHash__ConstPool__TABLE_hc9fc7c73_0
	[__Vtableidx10];
}

VL_INLINE_OPT void VSBTaskHash___024root___sequent__TOP__1(VSBTaskHash___024root* vlSelf) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0396
	if (false || vlSelf) {}  // Prevent unused
#else
	if (false && vlSelf) {}  // Prevent unused
#endif
	VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
	VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___sequent__TOP__1\n"); );
	// Body
	vlSelf->SBTaskHash__DOT__busCtrl__DOT__io_valid_regNext
			= vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid;
}

VL_INLINE_OPT void VSBTaskHash___024root___combo__TOP__1(VSBTaskHash___024root* vlSelf) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0397
	if (false || vlSelf) {}  // Prevent unused
#else
	if (false && vlSelf) {}  // Prevent unused
#endif
	VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
	VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___combo__TOP__1\n"); );
	// Body
	VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwdata, vlSelf->io_sb_SBwdata);
	VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__SBTaskHash__io_sb_SBaddress, vlSelf->io_sb_SBaddress);
	VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskHash__reset, vlSelf->reset);
	VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid, vlSelf->io_sb_SBvalid);
	vlSelf->SBTaskHash__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22
			= ((IData)(vlSelf->__Vcellinp__SBTaskHash__io_sel)
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0398
			   | ((IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid)
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0399)
			   ^ ((IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid)
#else
			   & ((IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid)
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0400
				  | (~ (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__io_valid_regNext))));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0401)
				  ^ (~ (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__io_valid_regNext))));
#else
				  & (~ (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__io_valid_regNext))));
#endif
	vlSelf->SBTaskHash__DOT__mmioRegLogic_read = (((IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid)
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0402
												   | (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sel))
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0403)
												   ^ (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sel))
#else
												   & (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sel))
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0404
												  | (~ (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwrite)));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0405)
												  ^ (~ (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwrite)));
#else
												  & (~ (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwrite)));
#endif
	vlSelf->SBTaskHash__DOT__mmioRegLogic_write = (
			((IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBvalid)
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0406
			 | (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sel))
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0407)
			 ^ (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sel))
#else
			 & (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sel))
#endif
			& (IData)(vlSelf->__Vcellinp__SBTaskHash__io_sb_SBwrite));
	vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext
			= vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg;
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0408
	if ((1U < (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0409)
	if ((1U > (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0410)
	if ((1U <= (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0411)
	if ((1U >= (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
	if ((1U == (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
		if (vlSelf->SBTaskHash__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22) {
			vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext = 2U;
		}
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0412
	} else if ((2U < (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0413)
	} else if ((2U > (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0414)
	} else if ((2U <= (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0415)
	} else if ((2U >= (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#else
	} else if ((2U == (IData)(vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg))) {
#endif
		vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
	}
	if (vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_wantStart) {
		vlSelf->SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext = 1U;
	}
}

void VSBTaskHash___024root___eval(VSBTaskHash___024root* vlSelf) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0416
	if (false || vlSelf) {}  // Prevent unused
#else
	if (false && vlSelf) {}  // Prevent unused
#endif
	VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
	VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___eval\n"); );
	// Body
	VSBTaskHash___024root___combo__TOP__0(vlSelf);
	if ((((IData)(vlSelf->__Vcellinp__SBTaskHash__clk)
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0417
		  | (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskHash__clk)))
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0418)
		  ^ (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskHash__clk)))
#else
		  & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskHash__clk)))
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0419
		 & ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskHash__reset)
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0420)
		 ^ ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskHash__reset)
#else
		 | ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__SBTaskHash__reset)
#endif
			& (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskHash__reset))))) {
		VSBTaskHash___024root___sequent__TOP__0(vlSelf);
	}
	if (((IData)(vlSelf->__Vcellinp__SBTaskHash__clk)
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0421
		 | (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskHash__clk)))) {
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0422)
		 ^ (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskHash__clk)))) {
#else
		 & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__SBTaskHash__clk)))) {
#endif
		VSBTaskHash___024root___sequent__TOP__1(vlSelf);
	}
	VSBTaskHash___024root___combo__TOP__1(vlSelf);
	// Final
	vlSelf->__Vclklast__TOP____Vcellinp__SBTaskHash__clk
			= vlSelf->__Vcellinp__SBTaskHash__clk;
	vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskHash__reset
			= vlSelf->__VinpClk__TOP____Vcellinp__SBTaskHash__reset;
	vlSelf->__VinpClk__TOP____Vcellinp__SBTaskHash__reset
			= vlSelf->__Vcellinp__SBTaskHash__reset;
}

QData VSBTaskHash___024root___change_request_1(VSBTaskHash___024root* vlSelf);

VL_INLINE_OPT QData VSBTaskHash___024root___change_request(VSBTaskHash___024root* vlSelf) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0423
	if (false || vlSelf) {}  // Prevent unused
#else
	if (false && vlSelf) {}  // Prevent unused
#endif
	VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
	VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___change_request\n"); );
	// Body
	return (VSBTaskHash___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSBTaskHash___024root___change_request_1(VSBTaskHash___024root* vlSelf) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0424
	if (false || vlSelf) {}  // Prevent unused
#else
	if (false && vlSelf) {}  // Prevent unused
#endif
	VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
	VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___change_request_1\n"); );
	// Body
	// Change detection
	QData __req = false;  // Logically a bool
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0425
	__req |= ((vlSelf->__Vcellinp__SBTaskHash__reset & vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset));
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0426)
	__req |= ((vlSelf->__Vcellinp__SBTaskHash__reset | vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset));
#else
	__req |= ((vlSelf->__Vcellinp__SBTaskHash__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset));
#endif
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0427
	VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__SBTaskHash__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskHash.v:18: __Vcellinp__SBTaskHash__reset\n"); );
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0428)
	VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__SBTaskHash__reset & vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskHash.v:18: __Vcellinp__SBTaskHash__reset\n"); );
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0429)
	VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__SBTaskHash__reset | vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskHash.v:18: __Vcellinp__SBTaskHash__reset\n"); );
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0430)
	VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBTaskHash__reset & vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskHash.v:18: __Vcellinp__SBTaskHash__reset\n"); );
#elif defined(VSBTaskHash___024root__DepSet_h96cc95e1__0431)
	VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBTaskHash__reset | vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskHash.v:18: __Vcellinp__SBTaskHash__reset\n"); );
#else
	VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__SBTaskHash__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset))) VL_DBG_MSGF("        CHANGE: peripherals/SBTaskHash.v:18: __Vcellinp__SBTaskHash__reset\n"); );
#endif
	// Final
	vlSelf->__Vchglast__TOP____Vcellinp__SBTaskHash__reset
			= vlSelf->__Vcellinp__SBTaskHash__reset;
	return __req;
}

#ifdef VL_DEBUG
void VSBTaskHash___024root___eval_debug_assertions(VSBTaskHash___024root* vlSelf) {
#ifdef VSBTaskHash___024root__DepSet_h96cc95e1__0432
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VSBTaskHash__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSBTaskHash___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
