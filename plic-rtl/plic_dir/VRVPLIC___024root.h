// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVPLIC.h for the primary calling header

#ifndef VERILATED_VRVPLIC___024ROOT_H_
#define VERILATED_VRVPLIC___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class VRVPLIC__Syms;

class VRVPLIC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __Vcellinp__RVPLIC__reset;
        CData/*0:0*/ __Vcellinp__RVPLIC__clk;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_52;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_51;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_50;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_49;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_48;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_47;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_46;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_45;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_44;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_43;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_42;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_41;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_40;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_39;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_38;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_37;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_36;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_35;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_34;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_33;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_32;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_31;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_30;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_29;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_28;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_27;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_26;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_25;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_24;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_23;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_22;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_21;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_20;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_19;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_18;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_17;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_16;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_15;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_14;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_13;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_12;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_11;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_10;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_9;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_8;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_7;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_6;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_5;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_4;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_3;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_2;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_1;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_has_pending_irq_0;
        CData/*0:0*/ __Vcellinp__RVPLIC__io_sel;
        CData/*2:0*/ RVPLIC__DOT___zz_263;
        CData/*0:0*/ RVPLIC__DOT__rdy;
        CData/*0:0*/ RVPLIC__DOT__read;
        CData/*0:0*/ RVPLIC__DOT__write;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_0;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_1;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_2;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_3;
    };
    struct {
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_4;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_5;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_6;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_7;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_8;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_9;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_10;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_11;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_12;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_13;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_14;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_15;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_16;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_17;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_18;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_19;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_20;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_21;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_22;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_23;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_24;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_25;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_26;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_27;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_28;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_29;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_30;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_31;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_32;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_33;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_34;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_35;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_36;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_37;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_38;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_39;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_40;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_41;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_42;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_43;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_44;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_45;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_46;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_47;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_48;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_49;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_50;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_51;
        CData/*2:0*/ RVPLIC__DOT__interrupt_priorities_52;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_0;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_1;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_2;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_3;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_4;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_5;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_6;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_7;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_8;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_9;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_10;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_11;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_12;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_13;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_14;
    };
    struct {
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_15;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_16;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_17;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_18;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_19;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_20;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_21;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_22;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_23;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_24;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_25;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_26;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_27;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_28;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_29;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_30;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_31;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_32;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_33;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_34;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_35;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_36;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_37;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_38;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_39;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_40;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_41;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_42;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_43;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_44;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_45;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_46;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_47;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_48;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_49;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_50;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_51;
        CData/*0:0*/ RVPLIC__DOT__pending_interrupts_52;
        CData/*2:0*/ RVPLIC__DOT__interrupt_threshold;
        CData/*0:0*/ RVPLIC__DOT__has_interrupt_pending;
        CData/*0:0*/ RVPLIC__DOT___zz_108;
        CData/*0:0*/ RVPLIC__DOT___zz_260;
        CData/*0:0*/ RVPLIC__DOT___zz_261;
        CData/*0:0*/ __Vtrigrprev__TOP____Vcellinp__RVPLIC__clk;
        CData/*0:0*/ __Vtrigrprev__TOP____Vcellinp__RVPLIC__reset;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __Vcellinp__RVPLIC__io_sb_SBwdata;
        IData/*31:0*/ __Vcellinp__RVPLIC__io_sb_SBaddress;
        IData/*31:0*/ RVPLIC__DOT___zz_314;
        IData/*31:0*/ RVPLIC__DOT__claim_complete;
        IData/*31:0*/ RVPLIC__DOT__SBPlicLogic_sbDataOutputReg;
        IData/*31:0*/ RVPLIC__DOT___zz_262;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ RVPLIC__DOT__interrupts_enabled;
        QData/*63:0*/ RVPLIC__DOT___zz_3;
    };
    sc_in<bool> io_sb_SBvalid;
    sc_in<bool> io_sb_SBwrite;
    sc_in<uint32_t> io_sb_SBsize;
    sc_out<bool> io_sb_SBready;
    sc_in<bool> io_sel;
    sc_out<bool> io_irq_pending;
    sc_in<bool> io_has_pending_irq_0;
    sc_in<bool> io_has_pending_irq_1;
    sc_in<bool> io_has_pending_irq_2;
    sc_in<bool> io_has_pending_irq_3;
    sc_in<bool> io_has_pending_irq_4;
    sc_in<bool> io_has_pending_irq_5;
    sc_in<bool> io_has_pending_irq_6;
    sc_in<bool> io_has_pending_irq_7;
    sc_in<bool> io_has_pending_irq_8;
    sc_in<bool> io_has_pending_irq_9;
    sc_in<bool> io_has_pending_irq_10;
    sc_in<bool> io_has_pending_irq_11;
    sc_in<bool> io_has_pending_irq_12;
    sc_in<bool> io_has_pending_irq_13;
    sc_in<bool> io_has_pending_irq_14;
    sc_in<bool> io_has_pending_irq_15;
    sc_in<bool> io_has_pending_irq_16;
    sc_in<bool> io_has_pending_irq_17;
    sc_in<bool> io_has_pending_irq_18;
    sc_in<bool> io_has_pending_irq_19;
    sc_in<bool> io_has_pending_irq_20;
    sc_in<bool> io_has_pending_irq_21;
    sc_in<bool> io_has_pending_irq_22;
    sc_in<bool> io_has_pending_irq_23;
    sc_in<bool> io_has_pending_irq_24;
    sc_in<bool> io_has_pending_irq_25;
    sc_in<bool> io_has_pending_irq_26;
    sc_in<bool> io_has_pending_irq_27;
    sc_in<bool> io_has_pending_irq_28;
    sc_in<bool> io_has_pending_irq_29;
    sc_in<bool> io_has_pending_irq_30;
    sc_in<bool> io_has_pending_irq_31;
    sc_in<bool> io_has_pending_irq_32;
    sc_in<bool> io_has_pending_irq_33;
    sc_in<bool> io_has_pending_irq_34;
    sc_in<bool> io_has_pending_irq_35;
    sc_in<bool> io_has_pending_irq_36;
    sc_in<bool> io_has_pending_irq_37;
    sc_in<bool> io_has_pending_irq_38;
    sc_in<bool> io_has_pending_irq_39;
    sc_in<bool> io_has_pending_irq_40;
    sc_in<bool> io_has_pending_irq_41;
    sc_in<bool> io_has_pending_irq_42;
    sc_in<bool> io_has_pending_irq_43;
    sc_in<bool> io_has_pending_irq_44;
    sc_in<bool> io_has_pending_irq_45;
    sc_in<bool> io_has_pending_irq_46;
    sc_in<bool> io_has_pending_irq_47;
    sc_in<bool> io_has_pending_irq_48;
    sc_in<bool> io_has_pending_irq_49;
    sc_in<bool> io_has_pending_irq_50;
    sc_in<bool> io_has_pending_irq_51;
    sc_in<bool> io_has_pending_irq_52;
    sc_in<bool> clk;
    sc_in<bool> reset;
    sc_in<uint32_t> io_sb_SBaddress;
    sc_in<uint32_t> io_sb_SBwdata;
    sc_out<uint32_t> io_sb_SBrdata;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRVPLIC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVPLIC___024root(VRVPLIC__Syms* symsp, const char* v__name);
    ~VRVPLIC___024root();
    VL_UNCOPYABLE(VRVPLIC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
