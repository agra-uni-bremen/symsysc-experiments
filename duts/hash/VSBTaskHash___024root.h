// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSBTaskHash.h for the primary calling header

#ifndef VERILATED_VSBTASKHASH___024ROOT_H_
#define VERILATED_VSBTASKHASH___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class VSBTaskHash__Syms;

class VSBTaskHash___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__SBTaskHash__reset;
    CData/*0:0*/ __Vcellinp__SBTaskHash__clk;
    CData/*0:0*/ __Vcellinp__SBTaskHash__io_sel;
    CData/*0:0*/ __Vcellinp__SBTaskHash__io_sb_SBwrite;
    CData/*0:0*/ __Vcellinp__SBTaskHash__io_sb_SBvalid;
    CData/*0:0*/ SBTaskHash__DOT__regValid;
    CData/*0:0*/ SBTaskHash__DOT__regReadyBuf;
    CData/*0:0*/ SBTaskHash__DOT__mmioRegLogic_read;
    CData/*0:0*/ SBTaskHash__DOT__mmioRegLogic_write;
    CData/*0:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_ready;
    CData/*0:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_init;
    CData/*1:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl_io_datactrl_compute;
    CData/*2:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_valueNext;
    CData/*2:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_iCount_value;
    CData/*1:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateReg;
    CData/*1:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__computeFSM_stateNext;
    CData/*2:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateReg;
    CData/*2:0*/ SBTaskHash__DOT__taskHash_1__DOT__ctrl__DOT__fsm_stateNext;
    CData/*0:0*/ SBTaskHash__DOT__busCtrl__DOT__busStateMachine_wantStart;
    CData/*0:0*/ SBTaskHash__DOT__busCtrl__DOT__busStateMachine_readyFlag;
    CData/*1:0*/ SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateReg;
    CData/*1:0*/ SBTaskHash__DOT__busCtrl__DOT__busStateMachine_stateNext;
    CData/*0:0*/ SBTaskHash__DOT__busCtrl__DOT__io_valid_regNext;
    CData/*0:0*/ SBTaskHash__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22;
    CData/*0:0*/ __VinpClk__TOP____Vcellinp__SBTaskHash__reset;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__SBTaskHash__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskHash__reset;
    CData/*0:0*/ __Vchglast__TOP____Vcellinp__SBTaskHash__reset;
    IData/*31:0*/ __Vcellinp__SBTaskHash__io_sb_SBwdata;
    IData/*31:0*/ __Vcellinp__SBTaskHash__io_sb_SBaddress;
    IData/*31:0*/ SBTaskHash__DOT__regA;
    IData/*31:0*/ SBTaskHash__DOT__regB;
    IData/*31:0*/ SBTaskHash__DOT__regHashBuf;
    IData/*31:0*/ SBTaskHash__DOT__sbDataOutputReg;
    IData/*31:0*/ SBTaskHash__DOT__taskHash_1__DOT__data__DOT__a2;
    IData/*31:0*/ SBTaskHash__DOT__taskHash_1__DOT__data__DOT__b2;
    IData/*31:0*/ SBTaskHash__DOT__taskHash_1__DOT__data__DOT__x;
    IData/*31:0*/ SBTaskHash__DOT__taskHash_1__DOT__data__DOT__y;
    IData/*31:0*/ SBTaskHash__DOT__taskHash_1__DOT__data__DOT__R_hash;
    IData/*31:0*/ SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s2hash;
    IData/*31:0*/ SBTaskHash__DOT__taskHash_1__DOT__data__DOT__s3hash;
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
    VSBTaskHash__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSBTaskHash___024root(VSBTaskHash__Syms* symsp, const char* name);
    ~VSBTaskHash___024root();
    VL_UNCOPYABLE(VSBTaskHash___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
