// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSBTaskHash.h"
#include "VSBTaskHash__Syms.h"

//============================================================
// Constructors

VSBTaskHash::VSBTaskHash(sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new VSBTaskHash__Syms(contextp(), name(), this)}
    , io_sb_SBvalid{vlSymsp->TOP.io_sb_SBvalid}
    , io_sb_SBwrite{vlSymsp->TOP.io_sb_SBwrite}
    , io_sb_SBsize{vlSymsp->TOP.io_sb_SBsize}
    , io_sb_SBready{vlSymsp->TOP.io_sb_SBready}
    , io_sel{vlSymsp->TOP.io_sel}
    , io_irq{vlSymsp->TOP.io_irq}
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
    sensitive << clk;
    sensitive << reset;
    sensitive << io_sb_SBaddress;
    sensitive << io_sb_SBwdata;

}

//============================================================
// Destructor

VSBTaskHash::~VSBTaskHash() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSBTaskHash___024root___eval_initial(VSBTaskHash___024root* vlSelf);
void VSBTaskHash___024root___eval_settle(VSBTaskHash___024root* vlSelf);
void VSBTaskHash___024root___eval(VSBTaskHash___024root* vlSelf);
QData VSBTaskHash___024root___change_request(VSBTaskHash___024root* vlSelf);
#ifdef VL_DEBUG
void VSBTaskHash___024root___eval_debug_assertions(VSBTaskHash___024root* vlSelf);
#endif  // VL_DEBUG
void VSBTaskHash___024root___final(VSBTaskHash___024root* vlSelf);

static void _eval_initial_loop(VSBTaskHash__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSBTaskHash___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSBTaskHash___024root___eval_settle(&(vlSymsp->TOP));
        VSBTaskHash___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VSBTaskHash___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("peripherals/SBTaskHash.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VSBTaskHash___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSBTaskHash::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSBTaskHash::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSBTaskHash___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSBTaskHash___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VSBTaskHash___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("peripherals/SBTaskHash.v", 7, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VSBTaskHash___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSBTaskHash::final() {
    VSBTaskHash___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSBTaskHash::hierName() const { return vlSymsp->name(); }
const char* VSBTaskHash::modelName() const { return "VSBTaskHash"; }
unsigned VSBTaskHash::threads() const { return 1; }
