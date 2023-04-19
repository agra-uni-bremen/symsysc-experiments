// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVPLIC.h for the primary calling header

#include "verilated.h"

#include "VRVPLIC___024root.h"

VL_INLINE_OPT void VRVPLIC___024root___ico_sequent__TOP__0(VRVPLIC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vcellinp__RVPLIC__io_sb_SBwrite;
    __Vcellinp__RVPLIC__io_sb_SBwrite = 0;
    CData/*0:0*/ __Vcellinp__RVPLIC__io_sb_SBvalid;
    __Vcellinp__RVPLIC__io_sb_SBvalid = 0;
    CData/*0:0*/ RVPLIC__DOT____VdfgTmp_h79e5d336__0;
    RVPLIC__DOT____VdfgTmp_h79e5d336__0 = 0;
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__clk, vlSelf->clk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__reset, vlSelf->reset);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata, vlSelf->io_sb_SBwdata);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_0, vlSelf->io_has_pending_irq_0);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_1, vlSelf->io_has_pending_irq_1);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_2, vlSelf->io_has_pending_irq_2);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_3, vlSelf->io_has_pending_irq_3);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_4, vlSelf->io_has_pending_irq_4);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_5, vlSelf->io_has_pending_irq_5);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_6, vlSelf->io_has_pending_irq_6);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_7, vlSelf->io_has_pending_irq_7);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_8, vlSelf->io_has_pending_irq_8);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_9, vlSelf->io_has_pending_irq_9);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_10, vlSelf->io_has_pending_irq_10);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_11, vlSelf->io_has_pending_irq_11);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_12, vlSelf->io_has_pending_irq_12);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_13, vlSelf->io_has_pending_irq_13);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_14, vlSelf->io_has_pending_irq_14);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_15, vlSelf->io_has_pending_irq_15);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_16, vlSelf->io_has_pending_irq_16);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_17, vlSelf->io_has_pending_irq_17);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_18, vlSelf->io_has_pending_irq_18);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_19, vlSelf->io_has_pending_irq_19);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_20, vlSelf->io_has_pending_irq_20);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_21, vlSelf->io_has_pending_irq_21);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_22, vlSelf->io_has_pending_irq_22);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_23, vlSelf->io_has_pending_irq_23);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_24, vlSelf->io_has_pending_irq_24);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_25, vlSelf->io_has_pending_irq_25);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_26, vlSelf->io_has_pending_irq_26);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_27, vlSelf->io_has_pending_irq_27);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_28, vlSelf->io_has_pending_irq_28);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_29, vlSelf->io_has_pending_irq_29);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_30, vlSelf->io_has_pending_irq_30);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_31, vlSelf->io_has_pending_irq_31);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_32, vlSelf->io_has_pending_irq_32);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_33, vlSelf->io_has_pending_irq_33);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_34, vlSelf->io_has_pending_irq_34);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_35, vlSelf->io_has_pending_irq_35);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_36, vlSelf->io_has_pending_irq_36);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_37, vlSelf->io_has_pending_irq_37);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_38, vlSelf->io_has_pending_irq_38);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_39, vlSelf->io_has_pending_irq_39);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_40, vlSelf->io_has_pending_irq_40);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_41, vlSelf->io_has_pending_irq_41);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_42, vlSelf->io_has_pending_irq_42);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_43, vlSelf->io_has_pending_irq_43);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_44, vlSelf->io_has_pending_irq_44);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_45, vlSelf->io_has_pending_irq_45);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_46, vlSelf->io_has_pending_irq_46);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_47, vlSelf->io_has_pending_irq_47);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_48, vlSelf->io_has_pending_irq_48);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_49, vlSelf->io_has_pending_irq_49);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_50, vlSelf->io_has_pending_irq_50);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_51, vlSelf->io_has_pending_irq_51);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_52, vlSelf->io_has_pending_irq_52);
    VL_ASSIGN_ISI(1,__Vcellinp__RVPLIC__io_sb_SBwrite, vlSelf->io_sb_SBwrite);
    VL_ASSIGN_ISI(1,__Vcellinp__RVPLIC__io_sb_SBvalid, vlSelf->io_sb_SBvalid);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_sel, vlSelf->io_sel);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress, vlSelf->io_sb_SBaddress);
    RVPLIC__DOT____VdfgTmp_h79e5d336__0 = ((IData)(__Vcellinp__RVPLIC__io_sb_SBvalid) 
                                           & (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel));
    vlSelf->RVPLIC__DOT___zz_263 = ((0x80U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                     ? ((0x40U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                         ? ((0x20U 
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                             ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52)
                                             : ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52)
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48)))))
                                         : ((0x20U 
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                             ? ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40))))
                                             : ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32))))))
                                     : ((0x40U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                         ? ((0x20U 
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                             ? ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24))))
                                             : ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16)))))
                                         : ((0x20U 
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                             ? ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8))))
                                             : ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0)))))));
    vlSelf->RVPLIC__DOT__write = ((IData)(RVPLIC__DOT____VdfgTmp_h79e5d336__0) 
                                  & (IData)(__Vcellinp__RVPLIC__io_sb_SBwrite));
    vlSelf->RVPLIC__DOT__read = ((~ (IData)(__Vcellinp__RVPLIC__io_sb_SBwrite)) 
                                 & (IData)(RVPLIC__DOT____VdfgTmp_h79e5d336__0));
}

void VRVPLIC___024root___eval_ico(VRVPLIC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VRVPLIC___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VRVPLIC___024root___eval_act(VRVPLIC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___eval_act\n"); );
}

VL_INLINE_OPT void VRVPLIC___024root___nba_sequent__TOP__0(VRVPLIC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ RVPLIC__DOT___zz_5;
    RVPLIC__DOT___zz_5 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_7;
    RVPLIC__DOT___zz_7 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_9;
    RVPLIC__DOT___zz_9 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_11;
    RVPLIC__DOT___zz_11 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_13;
    RVPLIC__DOT___zz_13 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_15;
    RVPLIC__DOT___zz_15 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_17;
    RVPLIC__DOT___zz_17 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_19;
    RVPLIC__DOT___zz_19 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_21;
    RVPLIC__DOT___zz_21 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_23;
    RVPLIC__DOT___zz_23 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_25;
    RVPLIC__DOT___zz_25 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_27;
    RVPLIC__DOT___zz_27 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_29;
    RVPLIC__DOT___zz_29 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_31;
    RVPLIC__DOT___zz_31 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_33;
    RVPLIC__DOT___zz_33 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_35;
    RVPLIC__DOT___zz_35 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_37;
    RVPLIC__DOT___zz_37 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_39;
    RVPLIC__DOT___zz_39 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_41;
    RVPLIC__DOT___zz_41 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_43;
    RVPLIC__DOT___zz_43 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_45;
    RVPLIC__DOT___zz_45 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_47;
    RVPLIC__DOT___zz_47 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_49;
    RVPLIC__DOT___zz_49 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_51;
    RVPLIC__DOT___zz_51 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_53;
    RVPLIC__DOT___zz_53 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_55;
    RVPLIC__DOT___zz_55 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_57;
    RVPLIC__DOT___zz_57 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_59;
    RVPLIC__DOT___zz_59 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_61;
    RVPLIC__DOT___zz_61 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_63;
    RVPLIC__DOT___zz_63 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_65;
    RVPLIC__DOT___zz_65 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_67;
    RVPLIC__DOT___zz_67 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_69;
    RVPLIC__DOT___zz_69 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_71;
    RVPLIC__DOT___zz_71 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_73;
    RVPLIC__DOT___zz_73 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_75;
    RVPLIC__DOT___zz_75 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_77;
    RVPLIC__DOT___zz_77 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_79;
    RVPLIC__DOT___zz_79 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_81;
    RVPLIC__DOT___zz_81 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_83;
    RVPLIC__DOT___zz_83 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_85;
    RVPLIC__DOT___zz_85 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_87;
    RVPLIC__DOT___zz_87 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_89;
    RVPLIC__DOT___zz_89 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_91;
    RVPLIC__DOT___zz_91 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_93;
    RVPLIC__DOT___zz_93 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_95;
    RVPLIC__DOT___zz_95 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_97;
    RVPLIC__DOT___zz_97 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_99;
    RVPLIC__DOT___zz_99 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_101;
    RVPLIC__DOT___zz_101 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_103;
    RVPLIC__DOT___zz_103 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_105;
    RVPLIC__DOT___zz_105 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_107;
    RVPLIC__DOT___zz_107 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_109;
    RVPLIC__DOT___zz_109 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_110;
    RVPLIC__DOT___zz_110 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_111;
    RVPLIC__DOT___zz_111 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_112;
    RVPLIC__DOT___zz_112 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_113;
    RVPLIC__DOT___zz_113 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_114;
    RVPLIC__DOT___zz_114 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_115;
    RVPLIC__DOT___zz_115 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_116;
    RVPLIC__DOT___zz_116 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_117;
    RVPLIC__DOT___zz_117 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_118;
    RVPLIC__DOT___zz_118 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_119;
    RVPLIC__DOT___zz_119 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_120;
    RVPLIC__DOT___zz_120 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_121;
    RVPLIC__DOT___zz_121 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_122;
    RVPLIC__DOT___zz_122 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_123;
    RVPLIC__DOT___zz_123 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_124;
    RVPLIC__DOT___zz_124 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_125;
    RVPLIC__DOT___zz_125 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_126;
    RVPLIC__DOT___zz_126 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_127;
    RVPLIC__DOT___zz_127 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_128;
    RVPLIC__DOT___zz_128 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_129;
    RVPLIC__DOT___zz_129 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_130;
    RVPLIC__DOT___zz_130 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_131;
    RVPLIC__DOT___zz_131 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_132;
    RVPLIC__DOT___zz_132 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_133;
    RVPLIC__DOT___zz_133 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_134;
    RVPLIC__DOT___zz_134 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_135;
    RVPLIC__DOT___zz_135 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_136;
    RVPLIC__DOT___zz_136 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_137;
    RVPLIC__DOT___zz_137 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_138;
    RVPLIC__DOT___zz_138 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_139;
    RVPLIC__DOT___zz_139 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_140;
    RVPLIC__DOT___zz_140 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_141;
    RVPLIC__DOT___zz_141 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_142;
    RVPLIC__DOT___zz_142 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_143;
    RVPLIC__DOT___zz_143 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_144;
    RVPLIC__DOT___zz_144 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_145;
    RVPLIC__DOT___zz_145 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_146;
    RVPLIC__DOT___zz_146 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_147;
    RVPLIC__DOT___zz_147 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_148;
    RVPLIC__DOT___zz_148 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_149;
    RVPLIC__DOT___zz_149 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_150;
    RVPLIC__DOT___zz_150 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_151;
    RVPLIC__DOT___zz_151 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_152;
    RVPLIC__DOT___zz_152 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_153;
    RVPLIC__DOT___zz_153 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_154;
    RVPLIC__DOT___zz_154 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_155;
    RVPLIC__DOT___zz_155 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_156;
    RVPLIC__DOT___zz_156 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_157;
    RVPLIC__DOT___zz_157 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_158;
    RVPLIC__DOT___zz_158 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_159;
    RVPLIC__DOT___zz_159 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_160;
    RVPLIC__DOT___zz_160 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_161;
    RVPLIC__DOT___zz_161 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_162;
    RVPLIC__DOT___zz_162 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_163;
    RVPLIC__DOT___zz_163 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_164;
    RVPLIC__DOT___zz_164 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_165;
    RVPLIC__DOT___zz_165 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_166;
    RVPLIC__DOT___zz_166 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_167;
    RVPLIC__DOT___zz_167 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_168;
    RVPLIC__DOT___zz_168 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_169;
    RVPLIC__DOT___zz_169 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_170;
    RVPLIC__DOT___zz_170 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_171;
    RVPLIC__DOT___zz_171 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_172;
    RVPLIC__DOT___zz_172 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_173;
    RVPLIC__DOT___zz_173 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_174;
    RVPLIC__DOT___zz_174 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_175;
    RVPLIC__DOT___zz_175 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_176;
    RVPLIC__DOT___zz_176 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_177;
    RVPLIC__DOT___zz_177 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_178;
    RVPLIC__DOT___zz_178 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_179;
    RVPLIC__DOT___zz_179 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_180;
    RVPLIC__DOT___zz_180 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_181;
    RVPLIC__DOT___zz_181 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_182;
    RVPLIC__DOT___zz_182 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_183;
    RVPLIC__DOT___zz_183 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_184;
    RVPLIC__DOT___zz_184 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_185;
    RVPLIC__DOT___zz_185 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_186;
    RVPLIC__DOT___zz_186 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_187;
    RVPLIC__DOT___zz_187 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_188;
    RVPLIC__DOT___zz_188 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_189;
    RVPLIC__DOT___zz_189 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_190;
    RVPLIC__DOT___zz_190 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_191;
    RVPLIC__DOT___zz_191 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_192;
    RVPLIC__DOT___zz_192 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_193;
    RVPLIC__DOT___zz_193 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_194;
    RVPLIC__DOT___zz_194 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_195;
    RVPLIC__DOT___zz_195 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_196;
    RVPLIC__DOT___zz_196 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_197;
    RVPLIC__DOT___zz_197 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_198;
    RVPLIC__DOT___zz_198 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_199;
    RVPLIC__DOT___zz_199 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_200;
    RVPLIC__DOT___zz_200 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_201;
    RVPLIC__DOT___zz_201 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_202;
    RVPLIC__DOT___zz_202 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_203;
    RVPLIC__DOT___zz_203 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_204;
    RVPLIC__DOT___zz_204 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_205;
    RVPLIC__DOT___zz_205 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_206;
    RVPLIC__DOT___zz_206 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_207;
    RVPLIC__DOT___zz_207 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_208;
    RVPLIC__DOT___zz_208 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_209;
    RVPLIC__DOT___zz_209 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_210;
    RVPLIC__DOT___zz_210 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_211;
    RVPLIC__DOT___zz_211 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_212;
    RVPLIC__DOT___zz_212 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_213;
    RVPLIC__DOT___zz_213 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_214;
    RVPLIC__DOT___zz_214 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_215;
    RVPLIC__DOT___zz_215 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_216;
    RVPLIC__DOT___zz_216 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_217;
    RVPLIC__DOT___zz_217 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_218;
    RVPLIC__DOT___zz_218 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_219;
    RVPLIC__DOT___zz_219 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_220;
    RVPLIC__DOT___zz_220 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_221;
    RVPLIC__DOT___zz_221 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_222;
    RVPLIC__DOT___zz_222 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_223;
    RVPLIC__DOT___zz_223 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_224;
    RVPLIC__DOT___zz_224 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_225;
    RVPLIC__DOT___zz_225 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_226;
    RVPLIC__DOT___zz_226 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_227;
    RVPLIC__DOT___zz_227 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_228;
    RVPLIC__DOT___zz_228 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_229;
    RVPLIC__DOT___zz_229 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_230;
    RVPLIC__DOT___zz_230 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_231;
    RVPLIC__DOT___zz_231 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_232;
    RVPLIC__DOT___zz_232 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_233;
    RVPLIC__DOT___zz_233 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_234;
    RVPLIC__DOT___zz_234 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_235;
    RVPLIC__DOT___zz_235 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_236;
    RVPLIC__DOT___zz_236 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_237;
    RVPLIC__DOT___zz_237 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_238;
    RVPLIC__DOT___zz_238 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_239;
    RVPLIC__DOT___zz_239 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_240;
    RVPLIC__DOT___zz_240 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_241;
    RVPLIC__DOT___zz_241 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_242;
    RVPLIC__DOT___zz_242 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_243;
    RVPLIC__DOT___zz_243 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_244;
    RVPLIC__DOT___zz_244 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_245;
    RVPLIC__DOT___zz_245 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_246;
    RVPLIC__DOT___zz_246 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_247;
    RVPLIC__DOT___zz_247 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_248;
    RVPLIC__DOT___zz_248 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_249;
    RVPLIC__DOT___zz_249 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_250;
    RVPLIC__DOT___zz_250 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_251;
    RVPLIC__DOT___zz_251 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_252;
    RVPLIC__DOT___zz_252 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_253;
    RVPLIC__DOT___zz_253 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_254;
    RVPLIC__DOT___zz_254 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_255;
    RVPLIC__DOT___zz_255 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_256;
    RVPLIC__DOT___zz_256 = 0;
    CData/*2:0*/ RVPLIC__DOT___zz_257;
    RVPLIC__DOT___zz_257 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_258;
    RVPLIC__DOT___zz_258 = 0;
    CData/*0:0*/ RVPLIC__DOT___zz_259;
    RVPLIC__DOT___zz_259 = 0;
    IData/*31:0*/ __Vdly__RVPLIC__DOT__claim_complete;
    __Vdly__RVPLIC__DOT__claim_complete = 0;
    QData/*63:0*/ __Vdly__RVPLIC__DOT__interrupts_enabled;
    __Vdly__RVPLIC__DOT__interrupts_enabled = 0;
    // Body
    __Vdly__RVPLIC__DOT__claim_complete = vlSelf->RVPLIC__DOT__claim_complete;
    __Vdly__RVPLIC__DOT__interrupts_enabled = vlSelf->RVPLIC__DOT__interrupts_enabled;
    if (vlSelf->__Vcellinp__RVPLIC__reset) {
        vlSelf->RVPLIC__DOT__rdy = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_52 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_51 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_50 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_49 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_48 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_47 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_46 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_45 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_44 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_43 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_42 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_41 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_40 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_39 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_38 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_37 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_36 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_35 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_34 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_33 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_32 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_31 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_30 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_29 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_28 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_27 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_26 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_25 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_24 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_23 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_22 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_21 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_20 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_19 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_18 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_17 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_16 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_15 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_14 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_13 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_12 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_11 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_10 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_9 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_8 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_7 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_6 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_5 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_4 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_3 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_2 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_1 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_0 = 0U;
        __Vdly__RVPLIC__DOT__interrupts_enabled = 0ULL;
        vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg = 0U;
        vlSelf->RVPLIC__DOT__interrupt_threshold = 7U;
        __Vdly__RVPLIC__DOT__claim_complete = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_0 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_1 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_2 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_3 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_4 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_5 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_6 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_7 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_8 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_9 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_10 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_11 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_12 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_13 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_14 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_15 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_16 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_17 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_18 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_19 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_20 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_21 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_22 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_23 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_24 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_25 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_26 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_27 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_28 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_29 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_30 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_31 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_32 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_33 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_34 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_35 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_36 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_37 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_38 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_39 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_40 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_41 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_42 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_43 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_44 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_45 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_46 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_47 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_48 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_49 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_50 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_51 = 0U;
        vlSelf->RVPLIC__DOT__pending_interrupts_52 = 0U;
        vlSelf->RVPLIC__DOT__has_interrupt_pending = 0U;
    } else {
        vlSelf->RVPLIC__DOT__rdy = 0U;
        if ((((IData)(vlSelf->RVPLIC__DOT__read) | (IData)(vlSelf->RVPLIC__DOT__write)) 
             & (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel))) {
            vlSelf->RVPLIC__DOT__rdy = 1U;
        }
        if (vlSelf->RVPLIC__DOT__write) {
            if (((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
                 & (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x34U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_52 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x33U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_51 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x32U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_50 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x31U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_49 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x30U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_48 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x2fU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_47 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x2eU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_46 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x2dU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_45 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x2cU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_44 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x2bU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_43 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x2aU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_42 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x29U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_41 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x28U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_40 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x27U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_39 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x26U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_38 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x25U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_37 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x24U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_36 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x23U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_35 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x22U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_34 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x21U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_33 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x20U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_32 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x1fU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_31 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x1eU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_30 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x1dU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_29 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x1cU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_28 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x1bU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_27 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x1aU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_26 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x19U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_25 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x18U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_24 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x17U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_23 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x16U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_22 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x15U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_21 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x14U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_20 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x13U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_19 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x12U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_18 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x11U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_17 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0x10U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_16 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0xfU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_15 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0xeU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_14 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0xdU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_13 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0xcU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_12 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0xbU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_11 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 0xaU)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_10 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 9U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_9 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 8U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_8 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 7U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_7 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 6U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_6 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 5U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_5 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 4U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_4 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 3U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_3 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 2U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_2 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)(((1ULL << (0x3fU 
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                                >> 2U))) 
                                   >> 1U)))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_1 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
                if ((1U & (IData)((1ULL << (0x3fU & 
                                            (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
                                             >> 2U)))))) {
                    vlSelf->RVPLIC__DOT__interrupt_priorities_0 
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                }
            }
            if ((1U & (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
                          & (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
                if ((0x1000U != (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                    if ((0x2000U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                        __Vdly__RVPLIC__DOT__interrupts_enabled 
                            = ((0xffffffff00000000ULL 
                                & vlSelf->RVPLIC__DOT__interrupts_enabled) 
                               | ((QData)((IData)((vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata 
                                                   >> 1U))) 
                                  << 1U));
                    } else if ((0x2004U == (0x3fffffU 
                                            & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                        __Vdly__RVPLIC__DOT__interrupts_enabled 
                            = ((0xffffffffULL & vlSelf->RVPLIC__DOT__interrupts_enabled) 
                               | ((QData)((IData)((0x1fffffU 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata))) 
                                  << 0x20U));
                    }
                }
            }
        } else if (vlSelf->RVPLIC__DOT__read) {
            if (((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
                 & (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = vlSelf->RVPLIC__DOT___zz_263;
            } else if ((0x1000U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_31) 
                        << 0x1fU) | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30) 
                                      << 0x1eU) | (
                                                   ((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_29) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_28) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_27) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_26) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_25) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_24) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_23) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_22) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_21) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_20) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_17) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_16) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_15) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_0))))))))))))))))))))))))))))))));
            } else if ((0x1004U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_52) 
                        << 0x14U) | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51) 
                                      << 0x13U) | (
                                                   ((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_50) 
                                                    << 0x12U) 
                                                   | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_49) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_48) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_47) 
                                                             << 0xfU) 
                                                            | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_46) 
                                                                << 0xeU) 
                                                               | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_45) 
                                                                   << 0xdU) 
                                                                  | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_44) 
                                                                      << 0xcU) 
                                                                     | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_43) 
                                                                         << 0xbU) 
                                                                        | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_42) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_41) 
                                                                               << 9U) 
                                                                              | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_40) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_39) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_38) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_37) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_36) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_35) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_34) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_33) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_32)))))))))))))))))))));
            } else if ((0x2000U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = (IData)(vlSelf->RVPLIC__DOT__interrupts_enabled);
            } else if ((0x2004U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = vlSelf->RVPLIC__DOT___zz_314;
            } else if ((0x200000U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = vlSelf->RVPLIC__DOT__interrupt_threshold;
            } else if ((0x200004U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = vlSelf->RVPLIC__DOT__claim_complete;
            }
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_0) {
            vlSelf->RVPLIC__DOT__pending_interrupts_0 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_1) {
            vlSelf->RVPLIC__DOT__pending_interrupts_1 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_2) {
            vlSelf->RVPLIC__DOT__pending_interrupts_2 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_3) {
            vlSelf->RVPLIC__DOT__pending_interrupts_3 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_4) {
            vlSelf->RVPLIC__DOT__pending_interrupts_4 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_5) {
            vlSelf->RVPLIC__DOT__pending_interrupts_5 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_6) {
            vlSelf->RVPLIC__DOT__pending_interrupts_6 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_7) {
            vlSelf->RVPLIC__DOT__pending_interrupts_7 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_8) {
            vlSelf->RVPLIC__DOT__pending_interrupts_8 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_9) {
            vlSelf->RVPLIC__DOT__pending_interrupts_9 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_10) {
            vlSelf->RVPLIC__DOT__pending_interrupts_10 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_11) {
            vlSelf->RVPLIC__DOT__pending_interrupts_11 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_12) {
            vlSelf->RVPLIC__DOT__pending_interrupts_12 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_13) {
            vlSelf->RVPLIC__DOT__pending_interrupts_13 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_14) {
            vlSelf->RVPLIC__DOT__pending_interrupts_14 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_15) {
            vlSelf->RVPLIC__DOT__pending_interrupts_15 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_16) {
            vlSelf->RVPLIC__DOT__pending_interrupts_16 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_17) {
            vlSelf->RVPLIC__DOT__pending_interrupts_17 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_18) {
            vlSelf->RVPLIC__DOT__pending_interrupts_18 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_19) {
            vlSelf->RVPLIC__DOT__pending_interrupts_19 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_20) {
            vlSelf->RVPLIC__DOT__pending_interrupts_20 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_21) {
            vlSelf->RVPLIC__DOT__pending_interrupts_21 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_22) {
            vlSelf->RVPLIC__DOT__pending_interrupts_22 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_23) {
            vlSelf->RVPLIC__DOT__pending_interrupts_23 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_24) {
            vlSelf->RVPLIC__DOT__pending_interrupts_24 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_25) {
            vlSelf->RVPLIC__DOT__pending_interrupts_25 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_26) {
            vlSelf->RVPLIC__DOT__pending_interrupts_26 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_27) {
            vlSelf->RVPLIC__DOT__pending_interrupts_27 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_28) {
            vlSelf->RVPLIC__DOT__pending_interrupts_28 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_29) {
            vlSelf->RVPLIC__DOT__pending_interrupts_29 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_30) {
            vlSelf->RVPLIC__DOT__pending_interrupts_30 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_31) {
            vlSelf->RVPLIC__DOT__pending_interrupts_31 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_32) {
            vlSelf->RVPLIC__DOT__pending_interrupts_32 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_33) {
            vlSelf->RVPLIC__DOT__pending_interrupts_33 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_34) {
            vlSelf->RVPLIC__DOT__pending_interrupts_34 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_35) {
            vlSelf->RVPLIC__DOT__pending_interrupts_35 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_36) {
            vlSelf->RVPLIC__DOT__pending_interrupts_36 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_37) {
            vlSelf->RVPLIC__DOT__pending_interrupts_37 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_38) {
            vlSelf->RVPLIC__DOT__pending_interrupts_38 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_39) {
            vlSelf->RVPLIC__DOT__pending_interrupts_39 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_40) {
            vlSelf->RVPLIC__DOT__pending_interrupts_40 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_41) {
            vlSelf->RVPLIC__DOT__pending_interrupts_41 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_42) {
            vlSelf->RVPLIC__DOT__pending_interrupts_42 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_43) {
            vlSelf->RVPLIC__DOT__pending_interrupts_43 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_44) {
            vlSelf->RVPLIC__DOT__pending_interrupts_44 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_45) {
            vlSelf->RVPLIC__DOT__pending_interrupts_45 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_46) {
            vlSelf->RVPLIC__DOT__pending_interrupts_46 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_47) {
            vlSelf->RVPLIC__DOT__pending_interrupts_47 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_48) {
            vlSelf->RVPLIC__DOT__pending_interrupts_48 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_49) {
            vlSelf->RVPLIC__DOT__pending_interrupts_49 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_50) {
            vlSelf->RVPLIC__DOT__pending_interrupts_50 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_51) {
            vlSelf->RVPLIC__DOT__pending_interrupts_51 = 1U;
        }
        if (vlSelf->__Vcellinp__RVPLIC__io_has_pending_irq_52) {
            vlSelf->RVPLIC__DOT__pending_interrupts_52 = 1U;
        }
        if (vlSelf->RVPLIC__DOT__write) {
            if ((1U & (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
                          & (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
                if ((0x1000U != (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                    if ((0x2000U != (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                        if ((0x2004U != (0x3fffffU 
                                         & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                            if ((0x200000U == (0x3fffffU 
                                               & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                                vlSelf->RVPLIC__DOT__interrupt_threshold 
                                    = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
                            }
                            if ((0x200000U != (0x3fffffU 
                                               & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                                if ((0x200004U == (0x3fffffU 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                                    if ((1U & (IData)(
                                                      ((0x3fU 
                                                        >= vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata)
                                                        ? 
                                                       (vlSelf->RVPLIC__DOT__interrupts_enabled 
                                                        >> vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata)
                                                        : 0ULL)))) {
                                        __Vdly__RVPLIC__DOT__claim_complete = 0U;
                                        vlSelf->RVPLIC__DOT__has_interrupt_pending = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if (vlSelf->RVPLIC__DOT__read) {
            if ((1U & (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
                          & (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
                if ((0x1000U != (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                    if ((0x1004U != (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                        if ((0x2000U != (0x3fffffU 
                                         & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                            if ((0x2004U != (0x3fffffU 
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                                if ((0x200000U != (0x3fffffU 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                                    if ((0x200004U 
                                         == (0x3fffffU 
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
                                        if ((0U != vlSelf->RVPLIC__DOT__claim_complete)) {
                                            if ((1U 
                                                 & (IData)(vlSelf->RVPLIC__DOT___zz_3))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_0 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 1U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_1 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 2U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_2 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 3U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_3 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 4U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_4 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 5U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_5 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 6U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_6 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 7U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_7 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 8U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_8 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 9U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_9 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0xaU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_10 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0xbU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_11 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0xcU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_12 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0xdU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_13 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0xeU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_14 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0xfU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_15 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x10U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_16 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x11U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_17 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x12U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_18 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x13U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_19 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x14U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_20 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x15U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_21 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x16U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_22 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x17U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_23 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x18U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_24 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x19U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_25 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x1aU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_26 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x1bU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_27 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x1cU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_28 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x1dU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_29 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x1eU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_30 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x1fU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_31 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x20U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_32 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x21U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_33 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x22U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_34 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x23U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_35 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x24U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_36 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x25U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_37 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x26U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_38 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x27U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_39 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x28U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_40 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x29U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_41 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x2aU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_42 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x2bU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_43 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x2cU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_44 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x2dU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_45 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x2eU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_46 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x2fU)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_47 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x30U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_48 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x31U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_49 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x32U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_50 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x33U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_51 = 0U;
                                            }
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->RVPLIC__DOT___zz_3 
                                                            >> 0x34U)))) {
                                                vlSelf->RVPLIC__DOT__pending_interrupts_52 = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0U == vlSelf->RVPLIC__DOT__claim_complete)) {
            if (((0U != vlSelf->RVPLIC__DOT___zz_262) 
                 & ((IData)(vlSelf->RVPLIC__DOT___zz_261)
                     ? (IData)(vlSelf->RVPLIC__DOT___zz_260)
                     : (IData)(vlSelf->RVPLIC__DOT___zz_108)))) {
                __Vdly__RVPLIC__DOT__claim_complete 
                    = vlSelf->RVPLIC__DOT___zz_262;
                vlSelf->RVPLIC__DOT__has_interrupt_pending = 1U;
            }
        }
    }
    VL_ASSIGN_SII(1,vlSelf->io_sb_SBready, vlSelf->RVPLIC__DOT__rdy);
    VL_ASSIGN_SII(32,vlSelf->io_sb_SBrdata, vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg);
    vlSelf->RVPLIC__DOT__claim_complete = __Vdly__RVPLIC__DOT__claim_complete;
    vlSelf->RVPLIC__DOT__interrupts_enabled = __Vdly__RVPLIC__DOT__interrupts_enabled;
    VL_ASSIGN_SII(1,vlSelf->io_irq_pending, vlSelf->RVPLIC__DOT__has_interrupt_pending);
    vlSelf->RVPLIC__DOT___zz_3 = (1ULL << (0x3fU & vlSelf->RVPLIC__DOT__claim_complete));
    vlSelf->RVPLIC__DOT___zz_314 = (IData)((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                            >> 0x20U));
    vlSelf->RVPLIC__DOT___zz_108 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52) 
                                     <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                                    & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                                >> 0x34U) 
                                               & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_52))));
    RVPLIC__DOT___zz_107 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
                             <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                            & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                        >> 0x33U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51))));
    RVPLIC__DOT___zz_105 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
                             <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                            & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                        >> 0x32U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_50))));
    RVPLIC__DOT___zz_103 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
                             <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                            & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                        >> 0x31U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_49))));
    RVPLIC__DOT___zz_101 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
                             <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                            & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                        >> 0x30U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_48))));
    RVPLIC__DOT___zz_99 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x2fU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_47))));
    RVPLIC__DOT___zz_97 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x2eU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_46))));
    RVPLIC__DOT___zz_95 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x2dU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_45))));
    RVPLIC__DOT___zz_93 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x2cU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_44))));
    RVPLIC__DOT___zz_91 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x2bU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_43))));
    RVPLIC__DOT___zz_89 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x2aU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_42))));
    RVPLIC__DOT___zz_87 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x29U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_41))));
    RVPLIC__DOT___zz_85 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x28U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_40))));
    RVPLIC__DOT___zz_83 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x27U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_39))));
    RVPLIC__DOT___zz_81 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x26U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_38))));
    RVPLIC__DOT___zz_79 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x25U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_37))));
    RVPLIC__DOT___zz_77 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x24U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_36))));
    RVPLIC__DOT___zz_75 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x23U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_35))));
    RVPLIC__DOT___zz_73 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x22U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_34))));
    RVPLIC__DOT___zz_71 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x21U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_33))));
    RVPLIC__DOT___zz_69 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x20U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_32))));
    RVPLIC__DOT___zz_67 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x1fU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_31))));
    RVPLIC__DOT___zz_65 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x1eU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30))));
    RVPLIC__DOT___zz_63 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x1dU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_29))));
    RVPLIC__DOT___zz_61 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x1cU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_28))));
    RVPLIC__DOT___zz_59 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x1bU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_27))));
    RVPLIC__DOT___zz_57 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x1aU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_26))));
    RVPLIC__DOT___zz_55 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x19U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_25))));
    RVPLIC__DOT___zz_53 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x18U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_24))));
    RVPLIC__DOT___zz_51 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x17U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_23))));
    RVPLIC__DOT___zz_49 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x16U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_22))));
    RVPLIC__DOT___zz_47 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x15U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_21))));
    RVPLIC__DOT___zz_45 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x14U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_20))));
    RVPLIC__DOT___zz_43 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x13U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_19))));
    RVPLIC__DOT___zz_41 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x12U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_18))));
    RVPLIC__DOT___zz_39 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x11U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_17))));
    RVPLIC__DOT___zz_37 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0x10U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_16))));
    RVPLIC__DOT___zz_35 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0xfU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_15))));
    RVPLIC__DOT___zz_33 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0xeU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_14))));
    RVPLIC__DOT___zz_31 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0xdU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_13))));
    RVPLIC__DOT___zz_29 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0xcU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_12))));
    RVPLIC__DOT___zz_27 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0xbU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_11))));
    RVPLIC__DOT___zz_25 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 0xaU) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_10))));
    RVPLIC__DOT___zz_23 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 9U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_9))));
    RVPLIC__DOT___zz_21 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 8U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_8))));
    RVPLIC__DOT___zz_19 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 7U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_7))));
    RVPLIC__DOT___zz_17 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 6U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_6))));
    RVPLIC__DOT___zz_15 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 5U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_5))));
    RVPLIC__DOT___zz_13 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 4U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_4))));
    RVPLIC__DOT___zz_11 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
                            <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                           & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                       >> 3U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_3))));
    RVPLIC__DOT___zz_9 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
                           <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                          & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                      >> 2U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_2))));
    RVPLIC__DOT___zz_7 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
                           <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                          & (IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                      >> 1U) & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_1))));
    RVPLIC__DOT___zz_5 = (((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0) 
                           <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)) 
                          & (IData)((vlSelf->RVPLIC__DOT__interrupts_enabled 
                                     & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_0))));
    RVPLIC__DOT___zz_109 = (1U & ((~ (IData)(RVPLIC__DOT___zz_7)) 
                                  | ((IData)(RVPLIC__DOT___zz_5) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
                                        <= (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0)))));
    if (RVPLIC__DOT___zz_109) {
        RVPLIC__DOT___zz_111 = RVPLIC__DOT___zz_5;
        RVPLIC__DOT___zz_110 = vlSelf->RVPLIC__DOT__interrupt_priorities_0;
    } else {
        RVPLIC__DOT___zz_111 = RVPLIC__DOT___zz_7;
        RVPLIC__DOT___zz_110 = vlSelf->RVPLIC__DOT__interrupt_priorities_1;
    }
    RVPLIC__DOT___zz_112 = (1U & ((~ (IData)(RVPLIC__DOT___zz_9)) 
                                  | ((IData)(RVPLIC__DOT___zz_111) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
                                        <= (IData)(RVPLIC__DOT___zz_110)))));
    if (RVPLIC__DOT___zz_112) {
        RVPLIC__DOT___zz_114 = RVPLIC__DOT___zz_111;
        RVPLIC__DOT___zz_113 = RVPLIC__DOT___zz_110;
    } else {
        RVPLIC__DOT___zz_114 = RVPLIC__DOT___zz_9;
        RVPLIC__DOT___zz_113 = vlSelf->RVPLIC__DOT__interrupt_priorities_2;
    }
    RVPLIC__DOT___zz_115 = (1U & ((~ (IData)(RVPLIC__DOT___zz_11)) 
                                  | ((IData)(RVPLIC__DOT___zz_114) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
                                        <= (IData)(RVPLIC__DOT___zz_113)))));
    if (RVPLIC__DOT___zz_115) {
        RVPLIC__DOT___zz_117 = RVPLIC__DOT___zz_114;
        RVPLIC__DOT___zz_116 = RVPLIC__DOT___zz_113;
    } else {
        RVPLIC__DOT___zz_117 = RVPLIC__DOT___zz_11;
        RVPLIC__DOT___zz_116 = vlSelf->RVPLIC__DOT__interrupt_priorities_3;
    }
    RVPLIC__DOT___zz_118 = (1U & ((~ (IData)(RVPLIC__DOT___zz_13)) 
                                  | ((IData)(RVPLIC__DOT___zz_117) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
                                        <= (IData)(RVPLIC__DOT___zz_116)))));
    if (RVPLIC__DOT___zz_118) {
        RVPLIC__DOT___zz_120 = RVPLIC__DOT___zz_117;
        RVPLIC__DOT___zz_119 = RVPLIC__DOT___zz_116;
    } else {
        RVPLIC__DOT___zz_120 = RVPLIC__DOT___zz_13;
        RVPLIC__DOT___zz_119 = vlSelf->RVPLIC__DOT__interrupt_priorities_4;
    }
    RVPLIC__DOT___zz_121 = (1U & ((~ (IData)(RVPLIC__DOT___zz_15)) 
                                  | ((IData)(RVPLIC__DOT___zz_120) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
                                        <= (IData)(RVPLIC__DOT___zz_119)))));
    if (RVPLIC__DOT___zz_121) {
        RVPLIC__DOT___zz_123 = RVPLIC__DOT___zz_120;
        RVPLIC__DOT___zz_122 = RVPLIC__DOT___zz_119;
    } else {
        RVPLIC__DOT___zz_123 = RVPLIC__DOT___zz_15;
        RVPLIC__DOT___zz_122 = vlSelf->RVPLIC__DOT__interrupt_priorities_5;
    }
    RVPLIC__DOT___zz_124 = (1U & ((~ (IData)(RVPLIC__DOT___zz_17)) 
                                  | ((IData)(RVPLIC__DOT___zz_123) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
                                        <= (IData)(RVPLIC__DOT___zz_122)))));
    if (RVPLIC__DOT___zz_124) {
        RVPLIC__DOT___zz_126 = RVPLIC__DOT___zz_123;
        RVPLIC__DOT___zz_125 = RVPLIC__DOT___zz_122;
    } else {
        RVPLIC__DOT___zz_126 = RVPLIC__DOT___zz_17;
        RVPLIC__DOT___zz_125 = vlSelf->RVPLIC__DOT__interrupt_priorities_6;
    }
    RVPLIC__DOT___zz_127 = (1U & ((~ (IData)(RVPLIC__DOT___zz_19)) 
                                  | ((IData)(RVPLIC__DOT___zz_126) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
                                        <= (IData)(RVPLIC__DOT___zz_125)))));
    if (RVPLIC__DOT___zz_127) {
        RVPLIC__DOT___zz_129 = RVPLIC__DOT___zz_126;
        RVPLIC__DOT___zz_128 = RVPLIC__DOT___zz_125;
    } else {
        RVPLIC__DOT___zz_129 = RVPLIC__DOT___zz_19;
        RVPLIC__DOT___zz_128 = vlSelf->RVPLIC__DOT__interrupt_priorities_7;
    }
    RVPLIC__DOT___zz_130 = (1U & ((~ (IData)(RVPLIC__DOT___zz_21)) 
                                  | ((IData)(RVPLIC__DOT___zz_129) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
                                        <= (IData)(RVPLIC__DOT___zz_128)))));
    if (RVPLIC__DOT___zz_130) {
        RVPLIC__DOT___zz_132 = RVPLIC__DOT___zz_129;
        RVPLIC__DOT___zz_131 = RVPLIC__DOT___zz_128;
    } else {
        RVPLIC__DOT___zz_132 = RVPLIC__DOT___zz_21;
        RVPLIC__DOT___zz_131 = vlSelf->RVPLIC__DOT__interrupt_priorities_8;
    }
    RVPLIC__DOT___zz_133 = (1U & ((~ (IData)(RVPLIC__DOT___zz_23)) 
                                  | ((IData)(RVPLIC__DOT___zz_132) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
                                        <= (IData)(RVPLIC__DOT___zz_131)))));
    if (RVPLIC__DOT___zz_133) {
        RVPLIC__DOT___zz_135 = RVPLIC__DOT___zz_132;
        RVPLIC__DOT___zz_134 = RVPLIC__DOT___zz_131;
    } else {
        RVPLIC__DOT___zz_135 = RVPLIC__DOT___zz_23;
        RVPLIC__DOT___zz_134 = vlSelf->RVPLIC__DOT__interrupt_priorities_9;
    }
    RVPLIC__DOT___zz_136 = (1U & ((~ (IData)(RVPLIC__DOT___zz_25)) 
                                  | ((IData)(RVPLIC__DOT___zz_135) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
                                        <= (IData)(RVPLIC__DOT___zz_134)))));
    if (RVPLIC__DOT___zz_136) {
        RVPLIC__DOT___zz_138 = RVPLIC__DOT___zz_135;
        RVPLIC__DOT___zz_137 = RVPLIC__DOT___zz_134;
    } else {
        RVPLIC__DOT___zz_138 = RVPLIC__DOT___zz_25;
        RVPLIC__DOT___zz_137 = vlSelf->RVPLIC__DOT__interrupt_priorities_10;
    }
    RVPLIC__DOT___zz_139 = (1U & ((~ (IData)(RVPLIC__DOT___zz_27)) 
                                  | ((IData)(RVPLIC__DOT___zz_138) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
                                        <= (IData)(RVPLIC__DOT___zz_137)))));
    if (RVPLIC__DOT___zz_139) {
        RVPLIC__DOT___zz_141 = RVPLIC__DOT___zz_138;
        RVPLIC__DOT___zz_140 = RVPLIC__DOT___zz_137;
    } else {
        RVPLIC__DOT___zz_141 = RVPLIC__DOT___zz_27;
        RVPLIC__DOT___zz_140 = vlSelf->RVPLIC__DOT__interrupt_priorities_11;
    }
    RVPLIC__DOT___zz_142 = (1U & ((~ (IData)(RVPLIC__DOT___zz_29)) 
                                  | ((IData)(RVPLIC__DOT___zz_141) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
                                        <= (IData)(RVPLIC__DOT___zz_140)))));
    if (RVPLIC__DOT___zz_142) {
        RVPLIC__DOT___zz_144 = RVPLIC__DOT___zz_141;
        RVPLIC__DOT___zz_143 = RVPLIC__DOT___zz_140;
    } else {
        RVPLIC__DOT___zz_144 = RVPLIC__DOT___zz_29;
        RVPLIC__DOT___zz_143 = vlSelf->RVPLIC__DOT__interrupt_priorities_12;
    }
    RVPLIC__DOT___zz_145 = (1U & ((~ (IData)(RVPLIC__DOT___zz_31)) 
                                  | ((IData)(RVPLIC__DOT___zz_144) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
                                        <= (IData)(RVPLIC__DOT___zz_143)))));
    if (RVPLIC__DOT___zz_145) {
        RVPLIC__DOT___zz_147 = RVPLIC__DOT___zz_144;
        RVPLIC__DOT___zz_146 = RVPLIC__DOT___zz_143;
    } else {
        RVPLIC__DOT___zz_147 = RVPLIC__DOT___zz_31;
        RVPLIC__DOT___zz_146 = vlSelf->RVPLIC__DOT__interrupt_priorities_13;
    }
    RVPLIC__DOT___zz_148 = (1U & ((~ (IData)(RVPLIC__DOT___zz_33)) 
                                  | ((IData)(RVPLIC__DOT___zz_147) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
                                        <= (IData)(RVPLIC__DOT___zz_146)))));
    if (RVPLIC__DOT___zz_148) {
        RVPLIC__DOT___zz_150 = RVPLIC__DOT___zz_147;
        RVPLIC__DOT___zz_149 = RVPLIC__DOT___zz_146;
    } else {
        RVPLIC__DOT___zz_150 = RVPLIC__DOT___zz_33;
        RVPLIC__DOT___zz_149 = vlSelf->RVPLIC__DOT__interrupt_priorities_14;
    }
    RVPLIC__DOT___zz_151 = (1U & ((~ (IData)(RVPLIC__DOT___zz_35)) 
                                  | ((IData)(RVPLIC__DOT___zz_150) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
                                        <= (IData)(RVPLIC__DOT___zz_149)))));
    if (RVPLIC__DOT___zz_151) {
        RVPLIC__DOT___zz_153 = RVPLIC__DOT___zz_150;
        RVPLIC__DOT___zz_152 = RVPLIC__DOT___zz_149;
    } else {
        RVPLIC__DOT___zz_153 = RVPLIC__DOT___zz_35;
        RVPLIC__DOT___zz_152 = vlSelf->RVPLIC__DOT__interrupt_priorities_15;
    }
    RVPLIC__DOT___zz_154 = (1U & ((~ (IData)(RVPLIC__DOT___zz_37)) 
                                  | ((IData)(RVPLIC__DOT___zz_153) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
                                        <= (IData)(RVPLIC__DOT___zz_152)))));
    if (RVPLIC__DOT___zz_154) {
        RVPLIC__DOT___zz_156 = RVPLIC__DOT___zz_153;
        RVPLIC__DOT___zz_155 = RVPLIC__DOT___zz_152;
    } else {
        RVPLIC__DOT___zz_156 = RVPLIC__DOT___zz_37;
        RVPLIC__DOT___zz_155 = vlSelf->RVPLIC__DOT__interrupt_priorities_16;
    }
    RVPLIC__DOT___zz_157 = (1U & ((~ (IData)(RVPLIC__DOT___zz_39)) 
                                  | ((IData)(RVPLIC__DOT___zz_156) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
                                        <= (IData)(RVPLIC__DOT___zz_155)))));
    if (RVPLIC__DOT___zz_157) {
        RVPLIC__DOT___zz_159 = RVPLIC__DOT___zz_156;
        RVPLIC__DOT___zz_158 = RVPLIC__DOT___zz_155;
    } else {
        RVPLIC__DOT___zz_159 = RVPLIC__DOT___zz_39;
        RVPLIC__DOT___zz_158 = vlSelf->RVPLIC__DOT__interrupt_priorities_17;
    }
    RVPLIC__DOT___zz_160 = (1U & ((~ (IData)(RVPLIC__DOT___zz_41)) 
                                  | ((IData)(RVPLIC__DOT___zz_159) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
                                        <= (IData)(RVPLIC__DOT___zz_158)))));
    if (RVPLIC__DOT___zz_160) {
        RVPLIC__DOT___zz_162 = RVPLIC__DOT___zz_159;
        RVPLIC__DOT___zz_161 = RVPLIC__DOT___zz_158;
    } else {
        RVPLIC__DOT___zz_162 = RVPLIC__DOT___zz_41;
        RVPLIC__DOT___zz_161 = vlSelf->RVPLIC__DOT__interrupt_priorities_18;
    }
    RVPLIC__DOT___zz_163 = (1U & ((~ (IData)(RVPLIC__DOT___zz_43)) 
                                  | ((IData)(RVPLIC__DOT___zz_162) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
                                        <= (IData)(RVPLIC__DOT___zz_161)))));
    if (RVPLIC__DOT___zz_163) {
        RVPLIC__DOT___zz_165 = RVPLIC__DOT___zz_162;
        RVPLIC__DOT___zz_164 = RVPLIC__DOT___zz_161;
    } else {
        RVPLIC__DOT___zz_165 = RVPLIC__DOT___zz_43;
        RVPLIC__DOT___zz_164 = vlSelf->RVPLIC__DOT__interrupt_priorities_19;
    }
    RVPLIC__DOT___zz_166 = (1U & ((~ (IData)(RVPLIC__DOT___zz_45)) 
                                  | ((IData)(RVPLIC__DOT___zz_165) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
                                        <= (IData)(RVPLIC__DOT___zz_164)))));
    if (RVPLIC__DOT___zz_166) {
        RVPLIC__DOT___zz_168 = RVPLIC__DOT___zz_165;
        RVPLIC__DOT___zz_167 = RVPLIC__DOT___zz_164;
    } else {
        RVPLIC__DOT___zz_168 = RVPLIC__DOT___zz_45;
        RVPLIC__DOT___zz_167 = vlSelf->RVPLIC__DOT__interrupt_priorities_20;
    }
    RVPLIC__DOT___zz_169 = (1U & ((~ (IData)(RVPLIC__DOT___zz_47)) 
                                  | ((IData)(RVPLIC__DOT___zz_168) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
                                        <= (IData)(RVPLIC__DOT___zz_167)))));
    if (RVPLIC__DOT___zz_169) {
        RVPLIC__DOT___zz_170 = RVPLIC__DOT___zz_167;
        RVPLIC__DOT___zz_171 = RVPLIC__DOT___zz_168;
    } else {
        RVPLIC__DOT___zz_170 = vlSelf->RVPLIC__DOT__interrupt_priorities_21;
        RVPLIC__DOT___zz_171 = RVPLIC__DOT___zz_47;
    }
    RVPLIC__DOT___zz_172 = (1U & ((~ (IData)(RVPLIC__DOT___zz_49)) 
                                  | ((IData)(RVPLIC__DOT___zz_171) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
                                        <= (IData)(RVPLIC__DOT___zz_170)))));
    if (RVPLIC__DOT___zz_172) {
        RVPLIC__DOT___zz_173 = RVPLIC__DOT___zz_170;
        RVPLIC__DOT___zz_174 = RVPLIC__DOT___zz_171;
    } else {
        RVPLIC__DOT___zz_173 = vlSelf->RVPLIC__DOT__interrupt_priorities_22;
        RVPLIC__DOT___zz_174 = RVPLIC__DOT___zz_49;
    }
    RVPLIC__DOT___zz_175 = (1U & ((~ (IData)(RVPLIC__DOT___zz_51)) 
                                  | ((IData)(RVPLIC__DOT___zz_174) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
                                        <= (IData)(RVPLIC__DOT___zz_173)))));
    if (RVPLIC__DOT___zz_175) {
        RVPLIC__DOT___zz_176 = RVPLIC__DOT___zz_173;
        RVPLIC__DOT___zz_177 = RVPLIC__DOT___zz_174;
    } else {
        RVPLIC__DOT___zz_176 = vlSelf->RVPLIC__DOT__interrupt_priorities_23;
        RVPLIC__DOT___zz_177 = RVPLIC__DOT___zz_51;
    }
    RVPLIC__DOT___zz_178 = (1U & ((~ (IData)(RVPLIC__DOT___zz_53)) 
                                  | ((IData)(RVPLIC__DOT___zz_177) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
                                        <= (IData)(RVPLIC__DOT___zz_176)))));
    if (RVPLIC__DOT___zz_178) {
        RVPLIC__DOT___zz_179 = RVPLIC__DOT___zz_176;
        RVPLIC__DOT___zz_180 = RVPLIC__DOT___zz_177;
    } else {
        RVPLIC__DOT___zz_179 = vlSelf->RVPLIC__DOT__interrupt_priorities_24;
        RVPLIC__DOT___zz_180 = RVPLIC__DOT___zz_53;
    }
    RVPLIC__DOT___zz_181 = (1U & ((~ (IData)(RVPLIC__DOT___zz_55)) 
                                  | ((IData)(RVPLIC__DOT___zz_180) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
                                        <= (IData)(RVPLIC__DOT___zz_179)))));
    if (RVPLIC__DOT___zz_181) {
        RVPLIC__DOT___zz_182 = RVPLIC__DOT___zz_179;
        RVPLIC__DOT___zz_183 = RVPLIC__DOT___zz_180;
    } else {
        RVPLIC__DOT___zz_182 = vlSelf->RVPLIC__DOT__interrupt_priorities_25;
        RVPLIC__DOT___zz_183 = RVPLIC__DOT___zz_55;
    }
    RVPLIC__DOT___zz_184 = (1U & ((~ (IData)(RVPLIC__DOT___zz_57)) 
                                  | ((IData)(RVPLIC__DOT___zz_183) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
                                        <= (IData)(RVPLIC__DOT___zz_182)))));
    if (RVPLIC__DOT___zz_184) {
        RVPLIC__DOT___zz_185 = RVPLIC__DOT___zz_182;
        RVPLIC__DOT___zz_186 = RVPLIC__DOT___zz_183;
    } else {
        RVPLIC__DOT___zz_185 = vlSelf->RVPLIC__DOT__interrupt_priorities_26;
        RVPLIC__DOT___zz_186 = RVPLIC__DOT___zz_57;
    }
    RVPLIC__DOT___zz_187 = (1U & ((~ (IData)(RVPLIC__DOT___zz_59)) 
                                  | ((IData)(RVPLIC__DOT___zz_186) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
                                        <= (IData)(RVPLIC__DOT___zz_185)))));
    if (RVPLIC__DOT___zz_187) {
        RVPLIC__DOT___zz_188 = RVPLIC__DOT___zz_185;
        RVPLIC__DOT___zz_189 = RVPLIC__DOT___zz_186;
    } else {
        RVPLIC__DOT___zz_188 = vlSelf->RVPLIC__DOT__interrupt_priorities_27;
        RVPLIC__DOT___zz_189 = RVPLIC__DOT___zz_59;
    }
    RVPLIC__DOT___zz_190 = (1U & ((~ (IData)(RVPLIC__DOT___zz_61)) 
                                  | ((IData)(RVPLIC__DOT___zz_189) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
                                        <= (IData)(RVPLIC__DOT___zz_188)))));
    if (RVPLIC__DOT___zz_190) {
        RVPLIC__DOT___zz_191 = RVPLIC__DOT___zz_188;
        RVPLIC__DOT___zz_192 = RVPLIC__DOT___zz_189;
    } else {
        RVPLIC__DOT___zz_191 = vlSelf->RVPLIC__DOT__interrupt_priorities_28;
        RVPLIC__DOT___zz_192 = RVPLIC__DOT___zz_61;
    }
    RVPLIC__DOT___zz_193 = (1U & ((~ (IData)(RVPLIC__DOT___zz_63)) 
                                  | ((IData)(RVPLIC__DOT___zz_192) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
                                        <= (IData)(RVPLIC__DOT___zz_191)))));
    if (RVPLIC__DOT___zz_193) {
        RVPLIC__DOT___zz_194 = RVPLIC__DOT___zz_191;
        RVPLIC__DOT___zz_195 = RVPLIC__DOT___zz_192;
    } else {
        RVPLIC__DOT___zz_194 = vlSelf->RVPLIC__DOT__interrupt_priorities_29;
        RVPLIC__DOT___zz_195 = RVPLIC__DOT___zz_63;
    }
    RVPLIC__DOT___zz_196 = (1U & ((~ (IData)(RVPLIC__DOT___zz_65)) 
                                  | ((IData)(RVPLIC__DOT___zz_195) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
                                        <= (IData)(RVPLIC__DOT___zz_194)))));
    if (RVPLIC__DOT___zz_196) {
        RVPLIC__DOT___zz_197 = RVPLIC__DOT___zz_194;
        RVPLIC__DOT___zz_198 = RVPLIC__DOT___zz_195;
    } else {
        RVPLIC__DOT___zz_197 = vlSelf->RVPLIC__DOT__interrupt_priorities_30;
        RVPLIC__DOT___zz_198 = RVPLIC__DOT___zz_65;
    }
    RVPLIC__DOT___zz_199 = (1U & ((~ (IData)(RVPLIC__DOT___zz_67)) 
                                  | ((IData)(RVPLIC__DOT___zz_198) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
                                        <= (IData)(RVPLIC__DOT___zz_197)))));
    if (RVPLIC__DOT___zz_199) {
        RVPLIC__DOT___zz_200 = RVPLIC__DOT___zz_197;
        RVPLIC__DOT___zz_201 = RVPLIC__DOT___zz_198;
    } else {
        RVPLIC__DOT___zz_200 = vlSelf->RVPLIC__DOT__interrupt_priorities_31;
        RVPLIC__DOT___zz_201 = RVPLIC__DOT___zz_67;
    }
    RVPLIC__DOT___zz_202 = (1U & ((~ (IData)(RVPLIC__DOT___zz_69)) 
                                  | ((IData)(RVPLIC__DOT___zz_201) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
                                        <= (IData)(RVPLIC__DOT___zz_200)))));
    if (RVPLIC__DOT___zz_202) {
        RVPLIC__DOT___zz_203 = RVPLIC__DOT___zz_200;
        RVPLIC__DOT___zz_204 = RVPLIC__DOT___zz_201;
    } else {
        RVPLIC__DOT___zz_203 = vlSelf->RVPLIC__DOT__interrupt_priorities_32;
        RVPLIC__DOT___zz_204 = RVPLIC__DOT___zz_69;
    }
    RVPLIC__DOT___zz_205 = (1U & ((~ (IData)(RVPLIC__DOT___zz_71)) 
                                  | ((IData)(RVPLIC__DOT___zz_204) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
                                        <= (IData)(RVPLIC__DOT___zz_203)))));
    if (RVPLIC__DOT___zz_205) {
        RVPLIC__DOT___zz_206 = RVPLIC__DOT___zz_203;
        RVPLIC__DOT___zz_207 = RVPLIC__DOT___zz_204;
    } else {
        RVPLIC__DOT___zz_206 = vlSelf->RVPLIC__DOT__interrupt_priorities_33;
        RVPLIC__DOT___zz_207 = RVPLIC__DOT___zz_71;
    }
    RVPLIC__DOT___zz_208 = (1U & ((~ (IData)(RVPLIC__DOT___zz_73)) 
                                  | ((IData)(RVPLIC__DOT___zz_207) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
                                        <= (IData)(RVPLIC__DOT___zz_206)))));
    if (RVPLIC__DOT___zz_208) {
        RVPLIC__DOT___zz_209 = RVPLIC__DOT___zz_206;
        RVPLIC__DOT___zz_210 = RVPLIC__DOT___zz_207;
    } else {
        RVPLIC__DOT___zz_209 = vlSelf->RVPLIC__DOT__interrupt_priorities_34;
        RVPLIC__DOT___zz_210 = RVPLIC__DOT___zz_73;
    }
    RVPLIC__DOT___zz_211 = (1U & ((~ (IData)(RVPLIC__DOT___zz_75)) 
                                  | ((IData)(RVPLIC__DOT___zz_210) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
                                        <= (IData)(RVPLIC__DOT___zz_209)))));
    if (RVPLIC__DOT___zz_211) {
        RVPLIC__DOT___zz_212 = RVPLIC__DOT___zz_209;
        RVPLIC__DOT___zz_213 = RVPLIC__DOT___zz_210;
    } else {
        RVPLIC__DOT___zz_212 = vlSelf->RVPLIC__DOT__interrupt_priorities_35;
        RVPLIC__DOT___zz_213 = RVPLIC__DOT___zz_75;
    }
    RVPLIC__DOT___zz_214 = (1U & ((~ (IData)(RVPLIC__DOT___zz_77)) 
                                  | ((IData)(RVPLIC__DOT___zz_213) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
                                        <= (IData)(RVPLIC__DOT___zz_212)))));
    if (RVPLIC__DOT___zz_214) {
        RVPLIC__DOT___zz_215 = RVPLIC__DOT___zz_212;
        RVPLIC__DOT___zz_216 = RVPLIC__DOT___zz_213;
    } else {
        RVPLIC__DOT___zz_215 = vlSelf->RVPLIC__DOT__interrupt_priorities_36;
        RVPLIC__DOT___zz_216 = RVPLIC__DOT___zz_77;
    }
    RVPLIC__DOT___zz_217 = (1U & ((~ (IData)(RVPLIC__DOT___zz_79)) 
                                  | ((IData)(RVPLIC__DOT___zz_216) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
                                        <= (IData)(RVPLIC__DOT___zz_215)))));
    if (RVPLIC__DOT___zz_217) {
        RVPLIC__DOT___zz_218 = RVPLIC__DOT___zz_215;
        RVPLIC__DOT___zz_219 = RVPLIC__DOT___zz_216;
    } else {
        RVPLIC__DOT___zz_218 = vlSelf->RVPLIC__DOT__interrupt_priorities_37;
        RVPLIC__DOT___zz_219 = RVPLIC__DOT___zz_79;
    }
    RVPLIC__DOT___zz_220 = (1U & ((~ (IData)(RVPLIC__DOT___zz_81)) 
                                  | ((IData)(RVPLIC__DOT___zz_219) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
                                        <= (IData)(RVPLIC__DOT___zz_218)))));
    if (RVPLIC__DOT___zz_220) {
        RVPLIC__DOT___zz_221 = RVPLIC__DOT___zz_218;
        RVPLIC__DOT___zz_222 = RVPLIC__DOT___zz_219;
    } else {
        RVPLIC__DOT___zz_221 = vlSelf->RVPLIC__DOT__interrupt_priorities_38;
        RVPLIC__DOT___zz_222 = RVPLIC__DOT___zz_81;
    }
    RVPLIC__DOT___zz_223 = (1U & ((~ (IData)(RVPLIC__DOT___zz_83)) 
                                  | ((IData)(RVPLIC__DOT___zz_222) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
                                        <= (IData)(RVPLIC__DOT___zz_221)))));
    if (RVPLIC__DOT___zz_223) {
        RVPLIC__DOT___zz_224 = RVPLIC__DOT___zz_221;
        RVPLIC__DOT___zz_225 = RVPLIC__DOT___zz_222;
    } else {
        RVPLIC__DOT___zz_224 = vlSelf->RVPLIC__DOT__interrupt_priorities_39;
        RVPLIC__DOT___zz_225 = RVPLIC__DOT___zz_83;
    }
    RVPLIC__DOT___zz_226 = (1U & ((~ (IData)(RVPLIC__DOT___zz_85)) 
                                  | ((IData)(RVPLIC__DOT___zz_225) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
                                        <= (IData)(RVPLIC__DOT___zz_224)))));
    if (RVPLIC__DOT___zz_226) {
        RVPLIC__DOT___zz_227 = RVPLIC__DOT___zz_224;
        RVPLIC__DOT___zz_228 = RVPLIC__DOT___zz_225;
    } else {
        RVPLIC__DOT___zz_227 = vlSelf->RVPLIC__DOT__interrupt_priorities_40;
        RVPLIC__DOT___zz_228 = RVPLIC__DOT___zz_85;
    }
    RVPLIC__DOT___zz_229 = (1U & ((~ (IData)(RVPLIC__DOT___zz_87)) 
                                  | ((IData)(RVPLIC__DOT___zz_228) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
                                        <= (IData)(RVPLIC__DOT___zz_227)))));
    if (RVPLIC__DOT___zz_229) {
        RVPLIC__DOT___zz_230 = RVPLIC__DOT___zz_227;
        RVPLIC__DOT___zz_231 = RVPLIC__DOT___zz_228;
    } else {
        RVPLIC__DOT___zz_230 = vlSelf->RVPLIC__DOT__interrupt_priorities_41;
        RVPLIC__DOT___zz_231 = RVPLIC__DOT___zz_87;
    }
    RVPLIC__DOT___zz_232 = (1U & ((~ (IData)(RVPLIC__DOT___zz_89)) 
                                  | ((IData)(RVPLIC__DOT___zz_231) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
                                        <= (IData)(RVPLIC__DOT___zz_230)))));
    if (RVPLIC__DOT___zz_232) {
        RVPLIC__DOT___zz_233 = RVPLIC__DOT___zz_230;
        RVPLIC__DOT___zz_234 = RVPLIC__DOT___zz_231;
    } else {
        RVPLIC__DOT___zz_233 = vlSelf->RVPLIC__DOT__interrupt_priorities_42;
        RVPLIC__DOT___zz_234 = RVPLIC__DOT___zz_89;
    }
    RVPLIC__DOT___zz_235 = (1U & ((~ (IData)(RVPLIC__DOT___zz_91)) 
                                  | ((IData)(RVPLIC__DOT___zz_234) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
                                        <= (IData)(RVPLIC__DOT___zz_233)))));
    if (RVPLIC__DOT___zz_235) {
        RVPLIC__DOT___zz_236 = RVPLIC__DOT___zz_233;
        RVPLIC__DOT___zz_237 = RVPLIC__DOT___zz_234;
    } else {
        RVPLIC__DOT___zz_236 = vlSelf->RVPLIC__DOT__interrupt_priorities_43;
        RVPLIC__DOT___zz_237 = RVPLIC__DOT___zz_91;
    }
    RVPLIC__DOT___zz_238 = (1U & ((~ (IData)(RVPLIC__DOT___zz_93)) 
                                  | ((IData)(RVPLIC__DOT___zz_237) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
                                        <= (IData)(RVPLIC__DOT___zz_236)))));
    if (RVPLIC__DOT___zz_238) {
        RVPLIC__DOT___zz_239 = RVPLIC__DOT___zz_236;
        RVPLIC__DOT___zz_240 = RVPLIC__DOT___zz_237;
    } else {
        RVPLIC__DOT___zz_239 = vlSelf->RVPLIC__DOT__interrupt_priorities_44;
        RVPLIC__DOT___zz_240 = RVPLIC__DOT___zz_93;
    }
    RVPLIC__DOT___zz_241 = (1U & ((~ (IData)(RVPLIC__DOT___zz_95)) 
                                  | ((IData)(RVPLIC__DOT___zz_240) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
                                        <= (IData)(RVPLIC__DOT___zz_239)))));
    if (RVPLIC__DOT___zz_241) {
        RVPLIC__DOT___zz_242 = RVPLIC__DOT___zz_239;
        RVPLIC__DOT___zz_243 = RVPLIC__DOT___zz_240;
    } else {
        RVPLIC__DOT___zz_242 = vlSelf->RVPLIC__DOT__interrupt_priorities_45;
        RVPLIC__DOT___zz_243 = RVPLIC__DOT___zz_95;
    }
    RVPLIC__DOT___zz_244 = (1U & ((~ (IData)(RVPLIC__DOT___zz_97)) 
                                  | ((IData)(RVPLIC__DOT___zz_243) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
                                        <= (IData)(RVPLIC__DOT___zz_242)))));
    if (RVPLIC__DOT___zz_244) {
        RVPLIC__DOT___zz_245 = RVPLIC__DOT___zz_242;
        RVPLIC__DOT___zz_246 = RVPLIC__DOT___zz_243;
    } else {
        RVPLIC__DOT___zz_245 = vlSelf->RVPLIC__DOT__interrupt_priorities_46;
        RVPLIC__DOT___zz_246 = RVPLIC__DOT___zz_97;
    }
    RVPLIC__DOT___zz_247 = (1U & ((~ (IData)(RVPLIC__DOT___zz_99)) 
                                  | ((IData)(RVPLIC__DOT___zz_246) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
                                        <= (IData)(RVPLIC__DOT___zz_245)))));
    if (RVPLIC__DOT___zz_247) {
        RVPLIC__DOT___zz_248 = RVPLIC__DOT___zz_245;
        RVPLIC__DOT___zz_249 = RVPLIC__DOT___zz_246;
    } else {
        RVPLIC__DOT___zz_248 = vlSelf->RVPLIC__DOT__interrupt_priorities_47;
        RVPLIC__DOT___zz_249 = RVPLIC__DOT___zz_99;
    }
    RVPLIC__DOT___zz_250 = (1U & ((~ (IData)(RVPLIC__DOT___zz_101)) 
                                  | ((IData)(RVPLIC__DOT___zz_249) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
                                        <= (IData)(RVPLIC__DOT___zz_248)))));
    if (RVPLIC__DOT___zz_250) {
        RVPLIC__DOT___zz_251 = RVPLIC__DOT___zz_248;
        RVPLIC__DOT___zz_252 = RVPLIC__DOT___zz_249;
    } else {
        RVPLIC__DOT___zz_251 = vlSelf->RVPLIC__DOT__interrupt_priorities_48;
        RVPLIC__DOT___zz_252 = RVPLIC__DOT___zz_101;
    }
    RVPLIC__DOT___zz_253 = (1U & ((~ (IData)(RVPLIC__DOT___zz_103)) 
                                  | ((IData)(RVPLIC__DOT___zz_252) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
                                        <= (IData)(RVPLIC__DOT___zz_251)))));
    if (RVPLIC__DOT___zz_253) {
        RVPLIC__DOT___zz_254 = RVPLIC__DOT___zz_251;
        RVPLIC__DOT___zz_255 = RVPLIC__DOT___zz_252;
    } else {
        RVPLIC__DOT___zz_254 = vlSelf->RVPLIC__DOT__interrupt_priorities_49;
        RVPLIC__DOT___zz_255 = RVPLIC__DOT___zz_103;
    }
    RVPLIC__DOT___zz_256 = (1U & ((~ (IData)(RVPLIC__DOT___zz_105)) 
                                  | ((IData)(RVPLIC__DOT___zz_255) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
                                        <= (IData)(RVPLIC__DOT___zz_254)))));
    if (RVPLIC__DOT___zz_256) {
        RVPLIC__DOT___zz_257 = RVPLIC__DOT___zz_254;
        RVPLIC__DOT___zz_258 = RVPLIC__DOT___zz_255;
    } else {
        RVPLIC__DOT___zz_257 = vlSelf->RVPLIC__DOT__interrupt_priorities_50;
        RVPLIC__DOT___zz_258 = RVPLIC__DOT___zz_105;
    }
    RVPLIC__DOT___zz_259 = (1U & ((~ (IData)(RVPLIC__DOT___zz_107)) 
                                  | ((IData)(RVPLIC__DOT___zz_258) 
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
                                        <= (IData)(RVPLIC__DOT___zz_257)))));
    vlSelf->RVPLIC__DOT___zz_260 = ((IData)(RVPLIC__DOT___zz_259)
                                     ? (IData)(RVPLIC__DOT___zz_258)
                                     : (IData)(RVPLIC__DOT___zz_107));
    vlSelf->RVPLIC__DOT___zz_261 = (1U & ((~ (IData)(vlSelf->RVPLIC__DOT___zz_108)) 
                                          | ((IData)(vlSelf->RVPLIC__DOT___zz_260) 
                                             & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52) 
                                                <= 
                                                ((IData)(RVPLIC__DOT___zz_259)
                                                  ? (IData)(RVPLIC__DOT___zz_257)
                                                  : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51))))));
    vlSelf->RVPLIC__DOT___zz_262 = ((IData)(vlSelf->RVPLIC__DOT___zz_261)
                                     ? ((IData)(RVPLIC__DOT___zz_259)
                                         ? ((IData)(RVPLIC__DOT___zz_256)
                                             ? ((IData)(RVPLIC__DOT___zz_253)
                                                 ? 
                                                ((IData)(RVPLIC__DOT___zz_250)
                                                  ? 
                                                 ((IData)(RVPLIC__DOT___zz_247)
                                                   ? 
                                                  ((IData)(RVPLIC__DOT___zz_244)
                                                    ? 
                                                   ((IData)(RVPLIC__DOT___zz_241)
                                                     ? 
                                                    ((IData)(RVPLIC__DOT___zz_238)
                                                      ? 
                                                     ((IData)(RVPLIC__DOT___zz_235)
                                                       ? 
                                                      ((IData)(RVPLIC__DOT___zz_232)
                                                        ? 
                                                       ((IData)(RVPLIC__DOT___zz_229)
                                                         ? 
                                                        ((IData)(RVPLIC__DOT___zz_226)
                                                          ? 
                                                         ((IData)(RVPLIC__DOT___zz_223)
                                                           ? 
                                                          ((IData)(RVPLIC__DOT___zz_220)
                                                            ? 
                                                           ((IData)(RVPLIC__DOT___zz_217)
                                                             ? 
                                                            ((IData)(RVPLIC__DOT___zz_214)
                                                              ? 
                                                             ((IData)(RVPLIC__DOT___zz_211)
                                                               ? 
                                                              ((IData)(RVPLIC__DOT___zz_208)
                                                                ? 
                                                               ((IData)(RVPLIC__DOT___zz_205)
                                                                 ? 
                                                                ((IData)(RVPLIC__DOT___zz_202)
                                                                  ? 
                                                                 ((IData)(RVPLIC__DOT___zz_199)
                                                                   ? 
                                                                  ((IData)(RVPLIC__DOT___zz_196)
                                                                    ? 
                                                                   ((IData)(RVPLIC__DOT___zz_193)
                                                                     ? 
                                                                    ((IData)(RVPLIC__DOT___zz_190)
                                                                      ? 
                                                                     ((IData)(RVPLIC__DOT___zz_187)
                                                                       ? 
                                                                      ((IData)(RVPLIC__DOT___zz_184)
                                                                        ? 
                                                                       ((IData)(RVPLIC__DOT___zz_181)
                                                                         ? 
                                                                        ((IData)(RVPLIC__DOT___zz_178)
                                                                          ? 
                                                                         ((IData)(RVPLIC__DOT___zz_175)
                                                                           ? 
                                                                          ((IData)(RVPLIC__DOT___zz_172)
                                                                            ? 
                                                                           ((IData)(RVPLIC__DOT___zz_169)
                                                                             ? 
                                                                            ((IData)(RVPLIC__DOT___zz_166)
                                                                              ? 
                                                                             ((IData)(RVPLIC__DOT___zz_163)
                                                                               ? 
                                                                              ((IData)(RVPLIC__DOT___zz_160)
                                                                                ? 
                                                                               ((IData)(RVPLIC__DOT___zz_157)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_154)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_151)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_148)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_145)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_142)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_139)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_136)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_133)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_130)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_127)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_124)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_121)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_118)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_115)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_112)
                                                                                 ? 
                                                                                ((IData)(RVPLIC__DOT___zz_109)
                                                                                 ? 0U
                                                                                 : 1U)
                                                                                 : 2U)
                                                                                 : 3U)
                                                                                 : 4U)
                                                                                 : 5U)
                                                                                 : 6U)
                                                                                 : 7U)
                                                                                 : 8U)
                                                                                 : 9U)
                                                                                 : 0xaU)
                                                                                 : 0xbU)
                                                                                 : 0xcU)
                                                                                 : 0xdU)
                                                                                 : 0xeU)
                                                                                 : 0xfU)
                                                                                 : 0x10U)
                                                                                 : 0x11U)
                                                                                : 0x12U)
                                                                               : 0x13U)
                                                                              : 0x14U)
                                                                             : 0x15U)
                                                                            : 0x16U)
                                                                           : 0x17U)
                                                                          : 0x18U)
                                                                         : 0x19U)
                                                                        : 0x1aU)
                                                                       : 0x1bU)
                                                                      : 0x1cU)
                                                                     : 0x1dU)
                                                                    : 0x1eU)
                                                                   : 0x1fU)
                                                                  : 0x20U)
                                                                 : 0x21U)
                                                                : 0x22U)
                                                               : 0x23U)
                                                              : 0x24U)
                                                             : 0x25U)
                                                            : 0x26U)
                                                           : 0x27U)
                                                          : 0x28U)
                                                         : 0x29U)
                                                        : 0x2aU)
                                                       : 0x2bU)
                                                      : 0x2cU)
                                                     : 0x2dU)
                                                    : 0x2eU)
                                                   : 0x2fU)
                                                  : 0x30U)
                                                 : 0x31U)
                                             : 0x32U)
                                         : 0x33U) : 0x34U);
}

VL_INLINE_OPT void VRVPLIC___024root___nba_sequent__TOP__1(VRVPLIC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->RVPLIC__DOT___zz_263 = ((0x80U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                     ? ((0x40U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                         ? ((0x20U 
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                             ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52)
                                             : ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52)
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48)))))
                                         : ((0x20U 
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                             ? ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40))))
                                             : ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32))))))
                                     : ((0x40U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                         ? ((0x20U 
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                             ? ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24))))
                                             : ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16)))))
                                         : ((0x20U 
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                             ? ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8))))
                                             : ((0x10U 
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0)))))));
}

void VRVPLIC___024root___eval_nba(VRVPLIC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VRVPLIC___024root___nba_sequent__TOP__0(vlSelf);
        VRVPLIC___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VRVPLIC___024root___eval_triggers__ico(VRVPLIC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRVPLIC___024root___dump_triggers__ico(VRVPLIC___024root* vlSelf);
#endif  // VL_DEBUG
void VRVPLIC___024root___eval_triggers__act(VRVPLIC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRVPLIC___024root___dump_triggers__act(VRVPLIC___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRVPLIC___024root___dump_triggers__nba(VRVPLIC___024root* vlSelf);
#endif  // VL_DEBUG

void VRVPLIC___024root___eval(VRVPLIC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VRVPLIC___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VRVPLIC___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("RVPLIC.v", 7, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VRVPLIC___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VRVPLIC___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VRVPLIC___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("RVPLIC.v", 7, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VRVPLIC___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VRVPLIC___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("RVPLIC.v", 7, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VRVPLIC___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VRVPLIC___024root___eval_debug_assertions(VRVPLIC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
