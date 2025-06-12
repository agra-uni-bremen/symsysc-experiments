// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSBTaskMap.h"
#include "VSBTaskMap__Syms.h"

//============================================================
// Constructors

VSBTaskMap::VSBTaskMap(sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new VSBTaskMap__Syms(contextp(), name(), this)}
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

VSBTaskMap::~VSBTaskMap() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSBTaskMap___024root___eval_initial(VSBTaskMap___024root* vlSelf);
void VSBTaskMap___024root___eval_settle(VSBTaskMap___024root* vlSelf);
void VSBTaskMap___024root___eval(VSBTaskMap___024root* vlSelf);
QData VSBTaskMap___024root___change_request(VSBTaskMap___024root* vlSelf);
#ifdef VL_DEBUG
void VSBTaskMap___024root___eval_debug_assertions(VSBTaskMap___024root* vlSelf);
#endif  // VL_DEBUG
void VSBTaskMap___024root___final(VSBTaskMap___024root* vlSelf);

static void _eval_initial_loop(VSBTaskMap__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSBTaskMap___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSBTaskMap___024root___eval_settle(&(vlSymsp->TOP));
        VSBTaskMap___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VSBTaskMap___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("peripherals/SBTaskMap.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VSBTaskMap___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSBTaskMap::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSBTaskMap::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSBTaskMap___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSBTaskMap___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VSBTaskMap___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("peripherals/SBTaskMap.v", 7, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VSBTaskMap___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSBTaskMap::final() {
    VSBTaskMap___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSBTaskMap::hierName() const { return vlSymsp->name(); }
const char* VSBTaskMap::modelName() const { return "VSBTaskMap"; }
unsigned VSBTaskMap::threads() const { return 1; }
