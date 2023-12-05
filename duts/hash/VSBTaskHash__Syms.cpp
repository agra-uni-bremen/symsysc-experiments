// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSBTaskHash__Syms.h"
#include "VSBTaskHash.h"
#include "VSBTaskHash___024root.h"

// FUNCTIONS
VSBTaskHash__Syms::~VSBTaskHash__Syms()
{
}

VSBTaskHash__Syms::VSBTaskHash__Syms(VerilatedContext* contextp, const char* namep, VSBTaskHash* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
