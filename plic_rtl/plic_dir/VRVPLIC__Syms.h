// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRVPLIC__SYMS_H_
#define VERILATED_VRVPLIC__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRVPLIC.h"

// INCLUDE MODULE CLASSES
#include "VRVPLIC___024root.h"

// SYMS CLASS (contains all model state)
class VRVPLIC__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRVPLIC* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRVPLIC___024root              TOP;

    // CONSTRUCTORS
    VRVPLIC__Syms(VerilatedContext* contextp, const char* namep, VRVPLIC* modelp);
    ~VRVPLIC__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
