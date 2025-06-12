// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSBTASKHASH__SYMS_H_
#define VERILATED_VSBTASKHASH__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSBTaskHash.h"

// INCLUDE MODULE CLASSES
#include "VSBTaskHash___024root.h"

// SYMS CLASS (contains all model state)
class VSBTaskHash__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSBTaskHash* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSBTaskHash___024root          TOP;

    // CONSTRUCTORS
    VSBTaskHash__Syms(VerilatedContext* contextp, const char* namep, VSBTaskHash* modelp);
    ~VSBTaskHash__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
