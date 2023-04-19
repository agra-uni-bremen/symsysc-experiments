// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRVPLIC.h"
#include "VRVPLIC__Syms.h"

//============================================================
// Constructors

VRVPLIC::VRVPLIC(sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new VRVPLIC__Syms(contextp(), name(), this)}
    , io_sb_SBvalid{vlSymsp->TOP.io_sb_SBvalid}
    , io_sb_SBwrite{vlSymsp->TOP.io_sb_SBwrite}
    , io_sb_SBsize{vlSymsp->TOP.io_sb_SBsize}
    , io_sb_SBready{vlSymsp->TOP.io_sb_SBready}
    , io_sel{vlSymsp->TOP.io_sel}
    , io_irq_pending{vlSymsp->TOP.io_irq_pending}
    , io_has_pending_irq_0{vlSymsp->TOP.io_has_pending_irq_0}
    , io_has_pending_irq_1{vlSymsp->TOP.io_has_pending_irq_1}
    , io_has_pending_irq_2{vlSymsp->TOP.io_has_pending_irq_2}
    , io_has_pending_irq_3{vlSymsp->TOP.io_has_pending_irq_3}
    , io_has_pending_irq_4{vlSymsp->TOP.io_has_pending_irq_4}
    , io_has_pending_irq_5{vlSymsp->TOP.io_has_pending_irq_5}
    , io_has_pending_irq_6{vlSymsp->TOP.io_has_pending_irq_6}
    , io_has_pending_irq_7{vlSymsp->TOP.io_has_pending_irq_7}
    , io_has_pending_irq_8{vlSymsp->TOP.io_has_pending_irq_8}
    , io_has_pending_irq_9{vlSymsp->TOP.io_has_pending_irq_9}
    , io_has_pending_irq_10{vlSymsp->TOP.io_has_pending_irq_10}
    , io_has_pending_irq_11{vlSymsp->TOP.io_has_pending_irq_11}
    , io_has_pending_irq_12{vlSymsp->TOP.io_has_pending_irq_12}
    , io_has_pending_irq_13{vlSymsp->TOP.io_has_pending_irq_13}
    , io_has_pending_irq_14{vlSymsp->TOP.io_has_pending_irq_14}
    , io_has_pending_irq_15{vlSymsp->TOP.io_has_pending_irq_15}
    , io_has_pending_irq_16{vlSymsp->TOP.io_has_pending_irq_16}
    , io_has_pending_irq_17{vlSymsp->TOP.io_has_pending_irq_17}
    , io_has_pending_irq_18{vlSymsp->TOP.io_has_pending_irq_18}
    , io_has_pending_irq_19{vlSymsp->TOP.io_has_pending_irq_19}
    , io_has_pending_irq_20{vlSymsp->TOP.io_has_pending_irq_20}
    , io_has_pending_irq_21{vlSymsp->TOP.io_has_pending_irq_21}
    , io_has_pending_irq_22{vlSymsp->TOP.io_has_pending_irq_22}
    , io_has_pending_irq_23{vlSymsp->TOP.io_has_pending_irq_23}
    , io_has_pending_irq_24{vlSymsp->TOP.io_has_pending_irq_24}
    , io_has_pending_irq_25{vlSymsp->TOP.io_has_pending_irq_25}
    , io_has_pending_irq_26{vlSymsp->TOP.io_has_pending_irq_26}
    , io_has_pending_irq_27{vlSymsp->TOP.io_has_pending_irq_27}
    , io_has_pending_irq_28{vlSymsp->TOP.io_has_pending_irq_28}
    , io_has_pending_irq_29{vlSymsp->TOP.io_has_pending_irq_29}
    , io_has_pending_irq_30{vlSymsp->TOP.io_has_pending_irq_30}
    , io_has_pending_irq_31{vlSymsp->TOP.io_has_pending_irq_31}
    , io_has_pending_irq_32{vlSymsp->TOP.io_has_pending_irq_32}
    , io_has_pending_irq_33{vlSymsp->TOP.io_has_pending_irq_33}
    , io_has_pending_irq_34{vlSymsp->TOP.io_has_pending_irq_34}
    , io_has_pending_irq_35{vlSymsp->TOP.io_has_pending_irq_35}
    , io_has_pending_irq_36{vlSymsp->TOP.io_has_pending_irq_36}
    , io_has_pending_irq_37{vlSymsp->TOP.io_has_pending_irq_37}
    , io_has_pending_irq_38{vlSymsp->TOP.io_has_pending_irq_38}
    , io_has_pending_irq_39{vlSymsp->TOP.io_has_pending_irq_39}
    , io_has_pending_irq_40{vlSymsp->TOP.io_has_pending_irq_40}
    , io_has_pending_irq_41{vlSymsp->TOP.io_has_pending_irq_41}
    , io_has_pending_irq_42{vlSymsp->TOP.io_has_pending_irq_42}
    , io_has_pending_irq_43{vlSymsp->TOP.io_has_pending_irq_43}
    , io_has_pending_irq_44{vlSymsp->TOP.io_has_pending_irq_44}
    , io_has_pending_irq_45{vlSymsp->TOP.io_has_pending_irq_45}
    , io_has_pending_irq_46{vlSymsp->TOP.io_has_pending_irq_46}
    , io_has_pending_irq_47{vlSymsp->TOP.io_has_pending_irq_47}
    , io_has_pending_irq_48{vlSymsp->TOP.io_has_pending_irq_48}
    , io_has_pending_irq_49{vlSymsp->TOP.io_has_pending_irq_49}
    , io_has_pending_irq_50{vlSymsp->TOP.io_has_pending_irq_50}
    , io_has_pending_irq_51{vlSymsp->TOP.io_has_pending_irq_51}
    , io_has_pending_irq_52{vlSymsp->TOP.io_has_pending_irq_52}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_sb_SBaddress{vlSymsp->TOP.io_sb_SBaddress}
    , io_sb_SBwdata{vlSymsp->TOP.io_sb_SBwdata}
    , io_sb_SBrdata{vlSymsp->TOP.io_sb_SBrdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << io_sb_SBvalid;
    sensitive << io_sb_SBwrite;
    sensitive << io_sel;
    sensitive << io_has_pending_irq_0;
    sensitive << io_has_pending_irq_1;
    sensitive << io_has_pending_irq_2;
    sensitive << io_has_pending_irq_3;
    sensitive << io_has_pending_irq_4;
    sensitive << io_has_pending_irq_5;
    sensitive << io_has_pending_irq_6;
    sensitive << io_has_pending_irq_7;
    sensitive << io_has_pending_irq_8;
    sensitive << io_has_pending_irq_9;
    sensitive << io_has_pending_irq_10;
    sensitive << io_has_pending_irq_11;
    sensitive << io_has_pending_irq_12;
    sensitive << io_has_pending_irq_13;
    sensitive << io_has_pending_irq_14;
    sensitive << io_has_pending_irq_15;
    sensitive << io_has_pending_irq_16;
    sensitive << io_has_pending_irq_17;
    sensitive << io_has_pending_irq_18;
    sensitive << io_has_pending_irq_19;
    sensitive << io_has_pending_irq_20;
    sensitive << io_has_pending_irq_21;
    sensitive << io_has_pending_irq_22;
    sensitive << io_has_pending_irq_23;
    sensitive << io_has_pending_irq_24;
    sensitive << io_has_pending_irq_25;
    sensitive << io_has_pending_irq_26;
    sensitive << io_has_pending_irq_27;
    sensitive << io_has_pending_irq_28;
    sensitive << io_has_pending_irq_29;
    sensitive << io_has_pending_irq_30;
    sensitive << io_has_pending_irq_31;
    sensitive << io_has_pending_irq_32;
    sensitive << io_has_pending_irq_33;
    sensitive << io_has_pending_irq_34;
    sensitive << io_has_pending_irq_35;
    sensitive << io_has_pending_irq_36;
    sensitive << io_has_pending_irq_37;
    sensitive << io_has_pending_irq_38;
    sensitive << io_has_pending_irq_39;
    sensitive << io_has_pending_irq_40;
    sensitive << io_has_pending_irq_41;
    sensitive << io_has_pending_irq_42;
    sensitive << io_has_pending_irq_43;
    sensitive << io_has_pending_irq_44;
    sensitive << io_has_pending_irq_45;
    sensitive << io_has_pending_irq_46;
    sensitive << io_has_pending_irq_47;
    sensitive << io_has_pending_irq_48;
    sensitive << io_has_pending_irq_49;
    sensitive << io_has_pending_irq_50;
    sensitive << io_has_pending_irq_51;
    sensitive << io_has_pending_irq_52;
    sensitive << clk;
    sensitive << reset;
    sensitive << io_sb_SBaddress;
    sensitive << io_sb_SBwdata;

}

//============================================================
// Destructor

VRVPLIC::~VRVPLIC() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRVPLIC___024root___eval_debug_assertions(VRVPLIC___024root* vlSelf);
#endif  // VL_DEBUG
void VRVPLIC___024root___eval_static(VRVPLIC___024root* vlSelf);
void VRVPLIC___024root___eval_initial(VRVPLIC___024root* vlSelf);
void VRVPLIC___024root___eval_settle(VRVPLIC___024root* vlSelf);
void VRVPLIC___024root___eval(VRVPLIC___024root* vlSelf);

void VRVPLIC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRVPLIC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRVPLIC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRVPLIC___024root___eval_static(&(vlSymsp->TOP));
        VRVPLIC___024root___eval_initial(&(vlSymsp->TOP));
        VRVPLIC___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRVPLIC___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRVPLIC::eventsPending() { return false; }

uint64_t VRVPLIC::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void VRVPLIC___024root___eval_final(VRVPLIC___024root* vlSelf);

VL_ATTR_COLD void VRVPLIC::final() {
    VRVPLIC___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRVPLIC::hierName() const { return vlSymsp->name(); }
const char* VRVPLIC::modelName() const { return "VRVPLIC"; }
unsigned VRVPLIC::threads() const { return 1; }
