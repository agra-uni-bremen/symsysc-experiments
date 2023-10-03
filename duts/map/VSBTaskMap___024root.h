// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSBTaskMap.h for the primary calling header

#ifndef VERILATED_VSBTASKMAP___024ROOT_H_
#define VERILATED_VSBTASKMAP___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class VSBTaskMap__Syms;

class VSBTaskMap___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__SBTaskMap__reset;
    CData/*0:0*/ __Vcellinp__SBTaskMap__clk;
    CData/*0:0*/ __Vcellinp__SBTaskMap__io_sel;
    CData/*0:0*/ __Vcellinp__SBTaskMap__io_sb_SBwrite;
    CData/*0:0*/ __Vcellinp__SBTaskMap__io_sb_SBvalid;
    CData/*2:0*/ SBTaskMap__DOT__regAddr;
    CData/*0:0*/ SBTaskMap__DOT__regWREna;
    CData/*0:0*/ SBTaskMap__DOT__regValid;
    CData/*0:0*/ SBTaskMap__DOT__regReadyBuf;
    CData/*0:0*/ SBTaskMap__DOT__mmioRegLogic_read;
    CData/*0:0*/ SBTaskMap__DOT__mmioRegLogic_write;
    CData/*0:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_ready;
    CData/*0:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_writeEna;
    CData/*0:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_memMux;
    CData/*0:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_init;
    CData/*2:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl_io_datactrl_bufElement;
    CData/*2:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_valueNext;
    CData/*2:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_cnt_value;
    CData/*2:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateReg;
    CData/*2:0*/ SBTaskMap__DOT__taskMap_1__DOT__ctrl__DOT__fsm_stateNext;
    CData/*2:0*/ SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__localMemAddr;
    CData/*0:0*/ SBTaskMap__DOT__busCtrl__DOT__busStateMachine_wantStart;
    CData/*0:0*/ SBTaskMap__DOT__busCtrl__DOT__busStateMachine_readyFlag;
    CData/*1:0*/ SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateReg;
    CData/*1:0*/ SBTaskMap__DOT__busCtrl__DOT__busStateMachine_stateNext;
    CData/*0:0*/ SBTaskMap__DOT__busCtrl__DOT__io_valid_regNext;
    CData/*0:0*/ SBTaskMap__DOT__busCtrl__DOT__when_SimpleBusSlaveController_l22;
    CData/*0:0*/ __VinpClk__TOP____Vcellinp__SBTaskMap__reset;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__SBTaskMap__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP____Vcellinp__SBTaskMap__reset;
    CData/*0:0*/ __Vchglast__TOP____Vcellinp__SBTaskMap__reset;
    IData/*31:0*/ __Vcellinp__SBTaskMap__io_sb_SBwdata;
    IData/*31:0*/ __Vcellinp__SBTaskMap__io_sb_SBaddress;
    IData/*31:0*/ SBTaskMap__DOT__sbDataOutputReg;
    IData/*31:0*/ SBTaskMap__DOT__regWData;
    IData/*31:0*/ SBTaskMap__DOT__regMappingVal;
    IData/*31:0*/ SBTaskMap__DOT__taskMap_1__DOT__data__DOT__mappingValReg;
    IData/*31:0*/ SBTaskMap__DOT__taskMap_1__DOT__mem__DOT___zz_memory_port0;
    VlUnpacked<IData/*31:0*/, 8> SBTaskMap__DOT__taskMap_1__DOT__mem__DOT__memory;
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
    VSBTaskMap__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSBTaskMap___024root(VSBTaskMap__Syms* symsp, const char* name);
    ~VSBTaskMap___024root();
    VL_UNCOPYABLE(VSBTaskMap___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
