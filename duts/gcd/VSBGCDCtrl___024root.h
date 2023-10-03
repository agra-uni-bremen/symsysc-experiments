// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSBGCDCtrl.h for the primary calling header

#ifndef VERILATED_VSBGCDCTRL___024ROOT_H_
#define VERILATED_VSBGCDCTRL___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class VSBGCDCtrl__Syms;

class VSBGCDCtrl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__SBGCDCtrl__reset;
    CData/*0:0*/ __Vcellinp__SBGCDCtrl__clk;
    CData/*0:0*/ __Vcellinp__SBGCDCtrl__io_sel;
    CData/*0:0*/ __Vcellinp__SBGCDCtrl__io_sb_SBwrite;
    CData/*0:0*/ __Vcellinp__SBGCDCtrl__io_sb_SBvalid;
    CData/*0:0*/ SBGCDCtrl__DOT__regValid;
    CData/*0:0*/ SBGCDCtrl__DOT__regReadyBuf;
    CData/*0:0*/ SBGCDCtrl__DOT__mmioRegLogic_read;
    CData/*0:0*/ SBGCDCtrl__DOT__mmioRegLogic_write;
    CData/*0:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_ready;
    CData/*0:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_loadA;
    CData/*0:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_loadB;
    CData/*0:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr_io_dataCtrl_init;
    CData/*2:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateReg;
    CData/*2:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdCtr__DOT__fsm_stateNext;
    CData/*0:0*/ SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_wantStart;
    CData/*0:0*/ SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_readyFlag;
    CData/*1:0*/ SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateReg;
    CData/*1:0*/ SBGCDCtrl__DOT__busCtrl__DOT__busStateMachine_stateNext;
    CData/*0:0*/ SBGCDCtrl__DOT__busCtrl__DOT__io_valid_regNext;
    CData/*0:0*/ SBGCDCtrl__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22;
    CData/*0:0*/ __VinpClk__TOP____Vcellinp__SBGCDCtrl__reset;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__SBGCDCtrl__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP____Vcellinp__SBGCDCtrl__reset;
    CData/*0:0*/ __Vchglast__TOP____Vcellinp__SBGCDCtrl__reset;
    IData/*31:0*/ __Vcellinp__SBGCDCtrl__io_sb_SBwdata;
    IData/*31:0*/ __Vcellinp__SBGCDCtrl__io_sb_SBaddress;
    IData/*31:0*/ SBGCDCtrl__DOT__regA;
    IData/*31:0*/ SBGCDCtrl__DOT__regB;
    IData/*31:0*/ SBGCDCtrl__DOT__regResBuf;
    IData/*31:0*/ SBGCDCtrl__DOT__sbDataOutputReg;
    IData/*31:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regA;
    IData/*31:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__regB;
    IData/*31:0*/ SBGCDCtrl__DOT__gcdCtrl_1__DOT__gcdDat__DOT__subXY;
    sc_in<bool> io_sb_SBvalid;
    sc_in<bool> io_sb_SBwrite;
    sc_in<uint32_t> io_sb_SBsize;
    sc_out<bool> io_sb_SBready;
    sc_in<bool> io_sel;
    sc_out<bool> io_irq;
    sc_in<bool> clk;
    sc_in<bool> reset;
    sc_in<uint32_t> io_sb_SBaddress;
    sc_in<uint32_t> io_sb_SBwdata;
    sc_out<uint32_t> io_sb_SBrdata;

    // INTERNAL VARIABLES
    VSBGCDCtrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSBGCDCtrl___024root(VSBGCDCtrl__Syms* symsp, const char* name);
    ~VSBGCDCtrl___024root();
    VL_UNCOPYABLE(VSBGCDCtrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
