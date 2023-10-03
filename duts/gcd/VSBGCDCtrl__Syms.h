// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSBGCDCTRL__SYMS_H_
#define VERILATED_VSBGCDCTRL__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSBGCDCtrl.h"

// INCLUDE MODULE CLASSES
#include "VSBGCDCtrl___024root.h"

// SYMS CLASS (contains all model state)
class VSBGCDCtrl__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSBGCDCtrl* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSBGCDCtrl___024root           TOP;

    // CONSTRUCTORS
    VSBGCDCtrl__Syms(VerilatedContext* contextp, const char* namep, VSBGCDCtrl* modelp);
    ~VSBGCDCtrl__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
