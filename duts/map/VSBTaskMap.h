// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSBTASKMAP_H_
#define VERILATED_VSBTASKMAP_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class VSBTaskMap__Syms;
class VSBTaskMap___024root;

// This class is the main interface to the Verilated model
class VSBTaskMap VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VSBTaskMap__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_in<bool> &io_sb_SBvalid;
    sc_in<bool> &io_sb_SBwrite;
    sc_in<uint32_t> &io_sb_SBsize;
    sc_out<bool> &io_sb_SBready;
    sc_in<bool> &io_sel;
    sc_out<bool> &io_irq;
    sc_in<bool> &clk;
    sc_in<bool> &reset;
    sc_in<uint32_t> &io_sb_SBaddress;
    sc_in<uint32_t> &io_sb_SBwdata;
    sc_out<uint32_t> &io_sb_SBrdata;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VSBTaskMap___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(VSBTaskMap);
    virtual ~VSBTaskMap();
  private:
    VL_UNCOPYABLE(VSBTaskMap);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
