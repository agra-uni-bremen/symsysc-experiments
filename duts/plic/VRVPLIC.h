// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRVPLIC_H_
#define VERILATED_VRVPLIC_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class VRVPLIC__Syms;
class VRVPLIC___024root;

// This class is the main interface to the Verilated model
class VRVPLIC VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VRVPLIC__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_in<bool> &io_sb_SBvalid;
    sc_in<bool> &io_sb_SBwrite;
    sc_in<uint32_t> &io_sb_SBsize;
    sc_out<bool> &io_sb_SBready;
    sc_in<bool> &io_sel;
    sc_out<bool> &io_irq_pending;
    sc_in<bool> &io_has_pending_irq_0;
    sc_in<bool> &io_has_pending_irq_1;
    sc_in<bool> &io_has_pending_irq_2;
    sc_in<bool> &io_has_pending_irq_3;
    sc_in<bool> &io_has_pending_irq_4;
    sc_in<bool> &io_has_pending_irq_5;
    sc_in<bool> &io_has_pending_irq_6;
    sc_in<bool> &io_has_pending_irq_7;
    sc_in<bool> &io_has_pending_irq_8;
    sc_in<bool> &io_has_pending_irq_9;
    sc_in<bool> &io_has_pending_irq_10;
    sc_in<bool> &io_has_pending_irq_11;
    sc_in<bool> &io_has_pending_irq_12;
    sc_in<bool> &io_has_pending_irq_13;
    sc_in<bool> &io_has_pending_irq_14;
    sc_in<bool> &io_has_pending_irq_15;
    sc_in<bool> &io_has_pending_irq_16;
    sc_in<bool> &io_has_pending_irq_17;
    sc_in<bool> &io_has_pending_irq_18;
    sc_in<bool> &io_has_pending_irq_19;
    sc_in<bool> &io_has_pending_irq_20;
    sc_in<bool> &io_has_pending_irq_21;
    sc_in<bool> &io_has_pending_irq_22;
    sc_in<bool> &io_has_pending_irq_23;
    sc_in<bool> &io_has_pending_irq_24;
    sc_in<bool> &io_has_pending_irq_25;
    sc_in<bool> &io_has_pending_irq_26;
    sc_in<bool> &io_has_pending_irq_27;
    sc_in<bool> &io_has_pending_irq_28;
    sc_in<bool> &io_has_pending_irq_29;
    sc_in<bool> &io_has_pending_irq_30;
    sc_in<bool> &io_has_pending_irq_31;
    sc_in<bool> &io_has_pending_irq_32;
    sc_in<bool> &io_has_pending_irq_33;
    sc_in<bool> &io_has_pending_irq_34;
    sc_in<bool> &io_has_pending_irq_35;
    sc_in<bool> &io_has_pending_irq_36;
    sc_in<bool> &io_has_pending_irq_37;
    sc_in<bool> &io_has_pending_irq_38;
    sc_in<bool> &io_has_pending_irq_39;
    sc_in<bool> &io_has_pending_irq_40;
    sc_in<bool> &io_has_pending_irq_41;
    sc_in<bool> &io_has_pending_irq_42;
    sc_in<bool> &io_has_pending_irq_43;
    sc_in<bool> &io_has_pending_irq_44;
    sc_in<bool> &io_has_pending_irq_45;
    sc_in<bool> &io_has_pending_irq_46;
    sc_in<bool> &io_has_pending_irq_47;
    sc_in<bool> &io_has_pending_irq_48;
    sc_in<bool> &io_has_pending_irq_49;
    sc_in<bool> &io_has_pending_irq_50;
    sc_in<bool> &io_has_pending_irq_51;
    sc_in<bool> &io_has_pending_irq_52;
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
    VRVPLIC___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(VRVPLIC);
    virtual ~VRVPLIC();
  private:
    VL_UNCOPYABLE(VRVPLIC);  ///< Copying not allowed

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
