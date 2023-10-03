// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSBTASKMAP__SYMS_H_
#define VERILATED_VSBTASKMAP__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSBTaskMap.h"

// INCLUDE MODULE CLASSES
#include "VSBTaskMap___024root.h"

// SYMS CLASS (contains all model state)
class VSBTaskMap__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSBTaskMap* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSBTaskMap___024root           TOP;

    // CONSTRUCTORS
    VSBTaskMap__Syms(VerilatedContext* contextp, const char* namep, VSBTaskMap* modelp);
    ~VSBTaskMap__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
