// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSBTaskMap__Syms.h"
#include "VSBTaskMap.h"
#include "VSBTaskMap___024root.h"

// FUNCTIONS
VSBTaskMap__Syms::~VSBTaskMap__Syms()
{
}

VSBTaskMap__Syms::VSBTaskMap__Syms(VerilatedContext* contextp, const char* namep, VSBTaskMap* modelp)
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
