// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRVPLIC__Syms.h"
#include "VRVPLIC.h"
#include "VRVPLIC___024root.h"

// FUNCTIONS
VRVPLIC__Syms::~VRVPLIC__Syms()
{
}

VRVPLIC__Syms::VRVPLIC__Syms(VerilatedContext* contextp, const char* namep, VRVPLIC* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
