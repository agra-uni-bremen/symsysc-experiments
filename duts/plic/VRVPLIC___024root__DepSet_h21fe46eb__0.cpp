// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVPLIC.h for the primary calling header

#include "verilated.h"

#include "VRVPLIC___024root.h"

VL_INLINE_OPT void VRVPLIC___024root___combo__TOP__0(VRVPLIC___024root* vlSelf) {
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__00
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___combo__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_sb_SBwrite, vlSelf->io_sb_SBwrite);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_sb_SBvalid, vlSelf->io_sb_SBvalid);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__clk, vlSelf->clk);
}

VL_INLINE_OPT void VRVPLIC___024root___sequent__TOP__0(VRVPLIC___024root* vlSelf) {
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ RVPLIC__DOT___zz_5;
    CData/*0:0*/ RVPLIC__DOT___zz_7;
    CData/*0:0*/ RVPLIC__DOT___zz_9;
    CData/*0:0*/ RVPLIC__DOT___zz_11;
    CData/*0:0*/ RVPLIC__DOT___zz_13;
    CData/*0:0*/ RVPLIC__DOT___zz_15;
    CData/*0:0*/ RVPLIC__DOT___zz_17;
    CData/*0:0*/ RVPLIC__DOT___zz_19;
    CData/*0:0*/ RVPLIC__DOT___zz_21;
    CData/*0:0*/ RVPLIC__DOT___zz_23;
    CData/*0:0*/ RVPLIC__DOT___zz_25;
    CData/*0:0*/ RVPLIC__DOT___zz_27;
    CData/*0:0*/ RVPLIC__DOT___zz_29;
    CData/*0:0*/ RVPLIC__DOT___zz_31;
    CData/*0:0*/ RVPLIC__DOT___zz_33;
    CData/*0:0*/ RVPLIC__DOT___zz_35;
    CData/*0:0*/ RVPLIC__DOT___zz_37;
    CData/*0:0*/ RVPLIC__DOT___zz_39;
    CData/*0:0*/ RVPLIC__DOT___zz_41;
    CData/*0:0*/ RVPLIC__DOT___zz_43;
    CData/*0:0*/ RVPLIC__DOT___zz_45;
    CData/*0:0*/ RVPLIC__DOT___zz_47;
    CData/*0:0*/ RVPLIC__DOT___zz_49;
    CData/*0:0*/ RVPLIC__DOT___zz_51;
    CData/*0:0*/ RVPLIC__DOT___zz_53;
    CData/*0:0*/ RVPLIC__DOT___zz_55;
    CData/*0:0*/ RVPLIC__DOT___zz_57;
    CData/*0:0*/ RVPLIC__DOT___zz_59;
    CData/*0:0*/ RVPLIC__DOT___zz_61;
    CData/*0:0*/ RVPLIC__DOT___zz_63;
    CData/*0:0*/ RVPLIC__DOT___zz_65;
    CData/*0:0*/ RVPLIC__DOT___zz_67;
    CData/*0:0*/ RVPLIC__DOT___zz_69;
    CData/*0:0*/ RVPLIC__DOT___zz_71;
    CData/*0:0*/ RVPLIC__DOT___zz_73;
    CData/*0:0*/ RVPLIC__DOT___zz_75;
    CData/*0:0*/ RVPLIC__DOT___zz_77;
    CData/*0:0*/ RVPLIC__DOT___zz_79;
    CData/*0:0*/ RVPLIC__DOT___zz_81;
    CData/*0:0*/ RVPLIC__DOT___zz_83;
    CData/*0:0*/ RVPLIC__DOT___zz_85;
    CData/*0:0*/ RVPLIC__DOT___zz_87;
    CData/*0:0*/ RVPLIC__DOT___zz_89;
    CData/*0:0*/ RVPLIC__DOT___zz_91;
    CData/*0:0*/ RVPLIC__DOT___zz_93;
    CData/*0:0*/ RVPLIC__DOT___zz_95;
    CData/*0:0*/ RVPLIC__DOT___zz_97;
    CData/*0:0*/ RVPLIC__DOT___zz_99;
    CData/*0:0*/ RVPLIC__DOT___zz_101;
    CData/*0:0*/ RVPLIC__DOT___zz_103;
    CData/*0:0*/ RVPLIC__DOT___zz_105;
    CData/*0:0*/ RVPLIC__DOT___zz_107;
    CData/*0:0*/ RVPLIC__DOT___zz_109;
    CData/*2:0*/ RVPLIC__DOT___zz_110;
    CData/*0:0*/ RVPLIC__DOT___zz_111;
    CData/*0:0*/ RVPLIC__DOT___zz_112;
    CData/*2:0*/ RVPLIC__DOT___zz_113;
    CData/*0:0*/ RVPLIC__DOT___zz_114;
    CData/*0:0*/ RVPLIC__DOT___zz_115;
    CData/*2:0*/ RVPLIC__DOT___zz_116;
    CData/*0:0*/ RVPLIC__DOT___zz_117;
    CData/*0:0*/ RVPLIC__DOT___zz_118;
    CData/*2:0*/ RVPLIC__DOT___zz_119;
    CData/*0:0*/ RVPLIC__DOT___zz_120;
    CData/*0:0*/ RVPLIC__DOT___zz_121;
    CData/*2:0*/ RVPLIC__DOT___zz_122;
    CData/*0:0*/ RVPLIC__DOT___zz_123;
    CData/*0:0*/ RVPLIC__DOT___zz_124;
    CData/*2:0*/ RVPLIC__DOT___zz_125;
    CData/*0:0*/ RVPLIC__DOT___zz_126;
    CData/*0:0*/ RVPLIC__DOT___zz_127;
    CData/*2:0*/ RVPLIC__DOT___zz_128;
    CData/*0:0*/ RVPLIC__DOT___zz_129;
    CData/*0:0*/ RVPLIC__DOT___zz_130;
    CData/*2:0*/ RVPLIC__DOT___zz_131;
    CData/*0:0*/ RVPLIC__DOT___zz_132;
    CData/*0:0*/ RVPLIC__DOT___zz_133;
    CData/*2:0*/ RVPLIC__DOT___zz_134;
    CData/*0:0*/ RVPLIC__DOT___zz_135;
    CData/*0:0*/ RVPLIC__DOT___zz_136;
    CData/*2:0*/ RVPLIC__DOT___zz_137;
    CData/*0:0*/ RVPLIC__DOT___zz_138;
    CData/*0:0*/ RVPLIC__DOT___zz_139;
    CData/*2:0*/ RVPLIC__DOT___zz_140;
    CData/*0:0*/ RVPLIC__DOT___zz_141;
    CData/*0:0*/ RVPLIC__DOT___zz_142;
    CData/*2:0*/ RVPLIC__DOT___zz_143;
    CData/*0:0*/ RVPLIC__DOT___zz_144;
    CData/*0:0*/ RVPLIC__DOT___zz_145;
    CData/*2:0*/ RVPLIC__DOT___zz_146;
    CData/*0:0*/ RVPLIC__DOT___zz_147;
    CData/*0:0*/ RVPLIC__DOT___zz_148;
    CData/*2:0*/ RVPLIC__DOT___zz_149;
    CData/*0:0*/ RVPLIC__DOT___zz_150;
    CData/*0:0*/ RVPLIC__DOT___zz_151;
    CData/*2:0*/ RVPLIC__DOT___zz_152;
    CData/*0:0*/ RVPLIC__DOT___zz_153;
    CData/*0:0*/ RVPLIC__DOT___zz_154;
    CData/*2:0*/ RVPLIC__DOT___zz_155;
    CData/*0:0*/ RVPLIC__DOT___zz_156;
    CData/*0:0*/ RVPLIC__DOT___zz_157;
    CData/*2:0*/ RVPLIC__DOT___zz_158;
    CData/*0:0*/ RVPLIC__DOT___zz_159;
    CData/*0:0*/ RVPLIC__DOT___zz_160;
    CData/*2:0*/ RVPLIC__DOT___zz_161;
    CData/*0:0*/ RVPLIC__DOT___zz_162;
    CData/*0:0*/ RVPLIC__DOT___zz_163;
    CData/*2:0*/ RVPLIC__DOT___zz_164;
    CData/*0:0*/ RVPLIC__DOT___zz_165;
    CData/*0:0*/ RVPLIC__DOT___zz_166;
    CData/*2:0*/ RVPLIC__DOT___zz_167;
    CData/*0:0*/ RVPLIC__DOT___zz_168;
    CData/*0:0*/ RVPLIC__DOT___zz_169;
    CData/*2:0*/ RVPLIC__DOT___zz_170;
    CData/*0:0*/ RVPLIC__DOT___zz_171;
    CData/*0:0*/ RVPLIC__DOT___zz_172;
    CData/*2:0*/ RVPLIC__DOT___zz_173;
    CData/*0:0*/ RVPLIC__DOT___zz_174;
    CData/*0:0*/ RVPLIC__DOT___zz_175;
    CData/*2:0*/ RVPLIC__DOT___zz_176;
    CData/*0:0*/ RVPLIC__DOT___zz_177;
    CData/*0:0*/ RVPLIC__DOT___zz_178;
    CData/*2:0*/ RVPLIC__DOT___zz_179;
    CData/*0:0*/ RVPLIC__DOT___zz_180;
    CData/*0:0*/ RVPLIC__DOT___zz_181;
    CData/*2:0*/ RVPLIC__DOT___zz_182;
    CData/*0:0*/ RVPLIC__DOT___zz_183;
    CData/*0:0*/ RVPLIC__DOT___zz_184;
    CData/*2:0*/ RVPLIC__DOT___zz_185;
    CData/*0:0*/ RVPLIC__DOT___zz_186;
    CData/*0:0*/ RVPLIC__DOT___zz_187;
    CData/*2:0*/ RVPLIC__DOT___zz_188;
    CData/*0:0*/ RVPLIC__DOT___zz_189;
    CData/*0:0*/ RVPLIC__DOT___zz_190;
    CData/*2:0*/ RVPLIC__DOT___zz_191;
    CData/*0:0*/ RVPLIC__DOT___zz_192;
    CData/*0:0*/ RVPLIC__DOT___zz_193;
    CData/*2:0*/ RVPLIC__DOT___zz_194;
    CData/*0:0*/ RVPLIC__DOT___zz_195;
    CData/*0:0*/ RVPLIC__DOT___zz_196;
    CData/*2:0*/ RVPLIC__DOT___zz_197;
    CData/*0:0*/ RVPLIC__DOT___zz_198;
    CData/*0:0*/ RVPLIC__DOT___zz_199;
    CData/*2:0*/ RVPLIC__DOT___zz_200;
    CData/*0:0*/ RVPLIC__DOT___zz_201;
    CData/*0:0*/ RVPLIC__DOT___zz_202;
    CData/*2:0*/ RVPLIC__DOT___zz_203;
    CData/*0:0*/ RVPLIC__DOT___zz_204;
    CData/*0:0*/ RVPLIC__DOT___zz_205;
    CData/*2:0*/ RVPLIC__DOT___zz_206;
    CData/*0:0*/ RVPLIC__DOT___zz_207;
    CData/*0:0*/ RVPLIC__DOT___zz_208;
    CData/*2:0*/ RVPLIC__DOT___zz_209;
    CData/*0:0*/ RVPLIC__DOT___zz_210;
    CData/*0:0*/ RVPLIC__DOT___zz_211;
    CData/*2:0*/ RVPLIC__DOT___zz_212;
    CData/*0:0*/ RVPLIC__DOT___zz_213;
    CData/*0:0*/ RVPLIC__DOT___zz_214;
    CData/*2:0*/ RVPLIC__DOT___zz_215;
    CData/*0:0*/ RVPLIC__DOT___zz_216;
    CData/*0:0*/ RVPLIC__DOT___zz_217;
    CData/*2:0*/ RVPLIC__DOT___zz_218;
    CData/*0:0*/ RVPLIC__DOT___zz_219;
    CData/*0:0*/ RVPLIC__DOT___zz_220;
    CData/*2:0*/ RVPLIC__DOT___zz_221;
    CData/*0:0*/ RVPLIC__DOT___zz_222;
    CData/*0:0*/ RVPLIC__DOT___zz_223;
    CData/*2:0*/ RVPLIC__DOT___zz_224;
    CData/*0:0*/ RVPLIC__DOT___zz_225;
    CData/*0:0*/ RVPLIC__DOT___zz_226;
    CData/*2:0*/ RVPLIC__DOT___zz_227;
    CData/*0:0*/ RVPLIC__DOT___zz_228;
    CData/*0:0*/ RVPLIC__DOT___zz_229;
    CData/*2:0*/ RVPLIC__DOT___zz_230;
    CData/*0:0*/ RVPLIC__DOT___zz_231;
    CData/*0:0*/ RVPLIC__DOT___zz_232;
    CData/*2:0*/ RVPLIC__DOT___zz_233;
    CData/*0:0*/ RVPLIC__DOT___zz_234;
    CData/*0:0*/ RVPLIC__DOT___zz_235;
    CData/*2:0*/ RVPLIC__DOT___zz_236;
    CData/*0:0*/ RVPLIC__DOT___zz_237;
    CData/*0:0*/ RVPLIC__DOT___zz_238;
    CData/*2:0*/ RVPLIC__DOT___zz_239;
    CData/*0:0*/ RVPLIC__DOT___zz_240;
    CData/*0:0*/ RVPLIC__DOT___zz_241;
    CData/*2:0*/ RVPLIC__DOT___zz_242;
    CData/*0:0*/ RVPLIC__DOT___zz_243;
    CData/*0:0*/ RVPLIC__DOT___zz_244;
    CData/*2:0*/ RVPLIC__DOT___zz_245;
    CData/*0:0*/ RVPLIC__DOT___zz_246;
    CData/*0:0*/ RVPLIC__DOT___zz_247;
    CData/*2:0*/ RVPLIC__DOT___zz_248;
    CData/*0:0*/ RVPLIC__DOT___zz_249;
    CData/*0:0*/ RVPLIC__DOT___zz_250;
    CData/*2:0*/ RVPLIC__DOT___zz_251;
    CData/*0:0*/ RVPLIC__DOT___zz_252;
    CData/*0:0*/ RVPLIC__DOT___zz_253;
    CData/*2:0*/ RVPLIC__DOT___zz_254;
    CData/*0:0*/ RVPLIC__DOT___zz_255;
    CData/*0:0*/ RVPLIC__DOT___zz_256;
    CData/*2:0*/ RVPLIC__DOT___zz_257;
    CData/*0:0*/ RVPLIC__DOT___zz_258;
    CData/*0:0*/ RVPLIC__DOT___zz_259;
    QData/*63:0*/ __Vdly__RVPLIC__DOT__interrupts_enabled;
    IData/*31:0*/ __Vdly__RVPLIC__DOT__claim_complete;
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
        vlSelf->RVPLIC__DOT__interrupt_priorities_0 = 0U;
        vlSelf->RVPLIC__DOT__interrupt_priorities_1 = 0U;
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
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02
        if ((((IData)(vlSelf->RVPLIC__DOT__read) & (IData)(vlSelf->RVPLIC__DOT__write)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03)
        if ((((IData)(vlSelf->RVPLIC__DOT__read) ^ (IData)(vlSelf->RVPLIC__DOT__write)) 
#else
        if ((((IData)(vlSelf->RVPLIC__DOT__read) | (IData)(vlSelf->RVPLIC__DOT__write)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__04
             | (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__05)
             ^ (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel))) {
#else
             & (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel))) {
#endif
            vlSelf->RVPLIC__DOT__rdy = 1U;
        }
        if (vlSelf->RVPLIC__DOT__write) {
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__06
            if (((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__07)
            if (((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__08)
            if (((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__09)
            if (((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__010)
            if (((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__011)
            if (((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__012)
            if (((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__013)
            if (((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__014)
            if (((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__015)
            if (((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__016)
            if (((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__017)
            if (((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__018)
            if (((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__019)
            if (((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__020)
            if (((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__021)
            if (((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__022)
            if (((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__023)
            if (((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__024)
            if (((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__025)
            if (((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__026)
            if (((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__027)
            if (((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__028)
            if (((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__029)
            if (((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__030)
            if (((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__031)
            if (((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#else
            if (((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__032
                 | (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__033)
                 | (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__034)
                 | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__035)
                 | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__036)
                 | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__037)
                 | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__038)
                 | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__039)
                 | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__040)
                 | (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__041)
                 | (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__042)
                 | (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__043)
                 | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__044)
                 | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__045)
                 | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__046)
                 | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__047)
                 | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__048)
                 | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__049)
                 | (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__050)
                 | (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__051)
                 | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__052)
                 | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__053)
                 | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__054)
                 | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__055)
                 | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__056)
                 | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__057)
                 | (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__058)
                 | (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__059)
                 ^ (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__060)
                 ^ (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__061)
                 ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__062)
                 ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__063)
                 ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__064)
                 ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__065)
                 ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__066)
                 ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__067)
                 ^ (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__068)
                 ^ (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__069)
                 ^ (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__070)
                 ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__071)
                 ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__072)
                 ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__073)
                 ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__074)
                 ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__075)
                 ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__076)
                 ^ (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__077)
                 ^ (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__078)
                 ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__079)
                 ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__080)
                 ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__081)
                 ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__082)
                 ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__083)
                 ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__084)
                 ^ (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__085)
                 ^ (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__086)
                 & (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__087)
                 & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__088)
                 & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__089)
                 & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__090)
                 & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__091)
                 & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__092)
                 & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__093)
                 & (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__094)
                 & (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__095)
                 & (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__096)
                 & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__097)
                 & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__098)
                 & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__099)
                 & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0100)
                 & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0101)
                 & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0102)
                 & (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0103)
                 & (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0104)
                 & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0105)
                 & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0106)
                 & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0107)
                 & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0108)
                 & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0109)
                 & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0110)
                 & (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0111)
                 & (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#else
                 & (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0112
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0113)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0114)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0115)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0116)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0117
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0118)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0119
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0120
                                   << 0x34U)))) {
#else
                                   >> 0x34U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_52 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0121
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0122)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0123
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0124)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0125)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0126)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0127)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0128
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0129)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0130
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0131
                                   << 0x33U)))) {
#else
                                   >> 0x33U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_51 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0132
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0133)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0134
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0135)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0136)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0137)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0138)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0139
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0140)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0141
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0142
                                   << 0x32U)))) {
#else
                                   >> 0x32U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_50 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0143
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0144)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0145
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0146)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0147)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0148)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0149)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0150
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0151)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0152
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0153
                                   << 0x31U)))) {
#else
                                   >> 0x31U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_49 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0154
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0155)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0156
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0157)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0158)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0159)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0160)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0161
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0162)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0163
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0164
                                   << 0x30U)))) {
#else
                                   >> 0x30U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_48 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0165
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0166)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0167
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0168)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0169)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0170)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0171)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0172
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0173)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0174
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0175
                                   << 0x2fU)))) {
#else
                                   >> 0x2fU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_47 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0176
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0177)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0178
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0179)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0180)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0181)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0182)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0183
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0184)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0185
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0186
                                   << 0x2eU)))) {
#else
                                   >> 0x2eU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_46 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0187
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0188)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0189
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0190)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0191)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0192)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0193)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0194
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0195)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0196
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0197
                                   << 0x2dU)))) {
#else
                                   >> 0x2dU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_45 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0198
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0199)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0200
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0201)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0202)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0203)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0204)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0205
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0206)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0207
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0208
                                   << 0x2cU)))) {
#else
                                   >> 0x2cU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_44 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0209
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0210)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0211
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0212)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0213)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0214)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0215)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0216
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0217)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0218
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0219
                                   << 0x2bU)))) {
#else
                                   >> 0x2bU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_43 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0220
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0221)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0222
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0223)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0224)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0225)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0226)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0227
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0228)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0229
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0230
                                   << 0x2aU)))) {
#else
                                   >> 0x2aU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_42 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0231
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0232)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0233
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0234)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0235)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0236)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0237)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0238
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0239)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0240
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0241
                                   << 0x29U)))) {
#else
                                   >> 0x29U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_41 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0242
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0243)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0244
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0245)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0246)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0247)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0248)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0249
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0250)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0251
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0252
                                   << 0x28U)))) {
#else
                                   >> 0x28U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_40 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0253
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0254)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0255
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0256)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0257)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0258)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0259)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0260
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0261)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0262
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0263
                                   << 0x27U)))) {
#else
                                   >> 0x27U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_39 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0264
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0265)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0266
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0267)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0268)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0269)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0270)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0271
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0272)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0273
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0274
                                   << 0x26U)))) {
#else
                                   >> 0x26U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_38 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0275
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0276)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0277
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0278)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0279)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0280)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0281)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0282
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0283)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0284
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0285
                                   << 0x25U)))) {
#else
                                   >> 0x25U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_37 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0286
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0287)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0288
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0289)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0290)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0291)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0292)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0293
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0294)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0295
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0296
                                   << 0x24U)))) {
#else
                                   >> 0x24U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_36 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0297
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0298)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0299
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0300)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0301)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0302)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0303)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0304
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0305)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0306
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0307
                                   << 0x23U)))) {
#else
                                   >> 0x23U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_35 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0308
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0309)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0310
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0311)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0312)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0313)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0314)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0315
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0316)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0317
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0318
                                   << 0x22U)))) {
#else
                                   >> 0x22U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_34 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0319
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0320)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0321
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0322)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0323)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0324)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0325)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0326
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0327)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0328
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0329
                                   << 0x21U)))) {
#else
                                   >> 0x21U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_33 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0330
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0331)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0332
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0333)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0334)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0335)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0336)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0337
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0338)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0339
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0340
                                   << 0x20U)))) {
#else
                                   >> 0x20U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_32 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0341
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0342)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0343
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0344)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0345)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0346)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0347)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0348
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0349)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0350
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0351
                                   << 0x1fU)))) {
#else
                                   >> 0x1fU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_31 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0352
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0353)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0354
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0355)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0356)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0357)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0358)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0359
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0360)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0361
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0362
                                   << 0x1eU)))) {
#else
                                   >> 0x1eU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_30 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0363
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0364)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0365
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0366)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0367)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0368)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0369)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0370
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0371)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0372
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0373
                                   << 0x1dU)))) {
#else
                                   >> 0x1dU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_29 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0374
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0375)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0376
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0377)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0378)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0379)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0380)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0381
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0382)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0383
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0384
                                   << 0x1cU)))) {
#else
                                   >> 0x1cU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_28 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0385
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0386)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0387
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0388)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0389)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0390)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0391)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0392
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0393)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0394
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0395
                                   << 0x1bU)))) {
#else
                                   >> 0x1bU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_27 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0396
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0397)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0398
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0399)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0400)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0401)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0402)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0403
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0404)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0405
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0406
                                   << 0x1aU)))) {
#else
                                   >> 0x1aU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_26 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0407
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0408)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0409
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0410)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0411)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0412)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0413)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0414
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0415)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0416
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0417
                                   << 0x19U)))) {
#else
                                   >> 0x19U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_25 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0418
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0419)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0420
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0421)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0422)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0423)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0424)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0425
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0426)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0427
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0428
                                   << 0x18U)))) {
#else
                                   >> 0x18U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_24 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0429
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0430)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0431
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0432)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0433)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0434)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0435)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0436
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0437)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0438
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0439
                                   << 0x17U)))) {
#else
                                   >> 0x17U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_23 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0440
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0441)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0442
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0443)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0444)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0445)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0446)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0447
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0448)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0449
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0450
                                   << 0x16U)))) {
#else
                                   >> 0x16U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_22 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0451
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0452)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0453
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0454)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0455)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0456)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0457)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0458
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0459)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0460
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0461
                                   << 0x15U)))) {
#else
                                   >> 0x15U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_21 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0462
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0463)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0464
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0465)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0466)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0467)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0468)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0469
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0470)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0471
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0472
                                   << 0x14U)))) {
#else
                                   >> 0x14U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_20 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0473
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0474)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0475
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0476)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0477)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0478)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0479)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0480
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0481)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0482
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0483
                                   << 0x13U)))) {
#else
                                   >> 0x13U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_19 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0484
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0485)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0486
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0487)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0488)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0489)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0490)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0491
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0492)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0493
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0494
                                   << 0x12U)))) {
#else
                                   >> 0x12U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_18 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0495
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0496)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0497
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0498)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0499)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0500)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0501)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0502
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0503)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0504
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0505
                                   << 0x11U)))) {
#else
                                   >> 0x11U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_17 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0506
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0507)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0508
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0509)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0510)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0511)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0512)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0513
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0514)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0515
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0516
                                   << 0x10U)))) {
#else
                                   >> 0x10U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_16 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0517
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0518)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0519
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0520)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0521)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0522)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0523)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0524
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0525)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0526
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0527
                                   << 0xfU)))) {
#else
                                   >> 0xfU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_15 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0528
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0529)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0530
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0531)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0532)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0533)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0534)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0535
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0536)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0537
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0538
                                   << 0xeU)))) {
#else
                                   >> 0xeU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_14 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0539
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0540)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0541
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0542)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0543)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0544)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0545)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0546
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0547)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0548
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0549
                                   << 0xdU)))) {
#else
                                   >> 0xdU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_13 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0550
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0551)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0552
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0553)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0554)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0555)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0556)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0557
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0558)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0559
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0560
                                   << 0xcU)))) {
#else
                                   >> 0xcU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_12 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0561
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0562)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0563
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0564)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0565)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0566)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0567)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0568
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0569)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0570
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0571
                                   << 0xbU)))) {
#else
                                   >> 0xbU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_11 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0572
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0573)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0574
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0575)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0576)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0577)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0578)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0579
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0580)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0581
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0582
                                   << 0xaU)))) {
#else
                                   >> 0xaU)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_10 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0583
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0584)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0585
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0586)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0587)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0588)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0589)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0590
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0591)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0592
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0593
                                   << 9U)))) {
#else
                                   >> 9U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_9 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0594
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0595)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0596
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0597)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0598)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0599)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0600)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0601
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0602)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0603
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0604
                                   << 8U)))) {
#else
                                   >> 8U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_8 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0605
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0606)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0607
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0608)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0609)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0610)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0611)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0612
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0613)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0614
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0615
                                   << 7U)))) {
#else
                                   >> 7U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_7 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0616
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0617)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0618
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0619)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0620)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0621)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0622)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0623
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0624)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0625
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0626
                                   << 6U)))) {
#else
                                   >> 6U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_6 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0627
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0628)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0629
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0630)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0631)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0632)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0633)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0634
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0635)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0636
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0637
                                   << 5U)))) {
#else
                                   >> 5U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_5 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0638
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0639)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0640
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0641)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0642)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0643)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0644)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0645
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0646)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0647
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0648
                                   << 4U)))) {
#else
                                   >> 4U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_4 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0649
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0650)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0651
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0652)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0653)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0654)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0655)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0656
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0657)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0658
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0659
                                   << 3U)))) {
#else
                                   >> 3U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0660
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0661)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0662
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0663)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0664)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0665)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0666)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0667
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0668)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0669
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0670
                                   << 2U)))) {
#else
                                   >> 2U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_2 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0671
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0672)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0673
                if ((1U | (IData)((1ULL << (0x3fU & 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0674)
                if ((1U | (IData)((1ULL << (0x3fU | 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0675)
                if ((1U | (IData)((1ULL >> (0x3fU | 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0676)
                if ((1U | (IData)((1ULL << (0x3fU ^ 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0677)
                if ((1U | (IData)((1ULL >> (0x3fU ^ 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0678)
                if ((1U | (IData)((1ULL >> (0x3fU & 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0679)
                if ((1U ^ (IData)((1ULL << (0x3fU & 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0680)
                if ((1U ^ (IData)((1ULL << (0x3fU | 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0681)
                if ((1U ^ (IData)((1ULL >> (0x3fU | 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0682)
                if ((1U ^ (IData)((1ULL << (0x3fU ^ 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0683)
                if ((1U ^ (IData)((1ULL >> (0x3fU ^ 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0684)
                if ((1U ^ (IData)((1ULL >> (0x3fU & 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0685)
                if ((1U & (IData)((1ULL << (0x3fU | 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0686)
                if ((1U & (IData)((1ULL >> (0x3fU | 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0687)
                if ((1U & (IData)((1ULL << (0x3fU ^ 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0688)
                if ((1U & (IData)((1ULL >> (0x3fU ^ 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0689)
                if ((1U & (IData)((1ULL >> (0x3fU & 
#else
                if ((1U & (IData)((1ULL << (0x3fU & 
#endif
                                            (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0690
                                             << 2U)))))) {
#else
                                             >> 2U)))))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_0 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0691
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0692)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0693
                if ((1U | (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0694)
                if ((1U | (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0695)
                if ((1U ^ (IData)(((1ULL << (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0696)
                if ((1U ^ (IData)(((1ULL >> (0x3fU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0697)
                if ((1U & (IData)(((1ULL >> (0x3fU 
#else
                if ((1U & (IData)(((1ULL << (0x3fU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0698
                                             | (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0699)
                                             ^ (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#else
                                             & (vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0700
                                                << 2U))) 
#else
                                                >> 2U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0701
                                   << 1U)))) {
#else
                                   >> 1U)))) {
#endif
                    vlSelf->RVPLIC__DOT__interrupt_priorities_1 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0702
                        = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0703)
                        = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                        = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                }
            }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0704
            if ((1U | (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0705)
            if ((1U | (~ ((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0706)
            if ((1U | (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0707)
            if ((1U | (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0708)
            if ((1U | (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0709)
            if ((1U | (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0710)
            if ((1U | (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0711)
            if ((1U | (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0712)
            if ((1U | (~ ((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0713)
            if ((1U | (~ ((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0714)
            if ((1U | (~ ((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0715)
            if ((1U | (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0716)
            if ((1U | (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0717)
            if ((1U | (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0718)
            if ((1U | (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0719)
            if ((1U | (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0720)
            if ((1U | (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0721)
            if ((1U | (~ ((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0722)
            if ((1U | (~ ((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0723)
            if ((1U | (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0724)
            if ((1U | (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0725)
            if ((1U | (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0726)
            if ((1U | (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0727)
            if ((1U | (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0728)
            if ((1U | (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0729)
            if ((1U | (~ ((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0730)
            if ((1U | (~ ((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0731)
            if ((1U ^ (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0732)
            if ((1U ^ (~ ((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0733)
            if ((1U ^ (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0734)
            if ((1U ^ (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0735)
            if ((1U ^ (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0736)
            if ((1U ^ (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0737)
            if ((1U ^ (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0738)
            if ((1U ^ (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0739)
            if ((1U ^ (~ ((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0740)
            if ((1U ^ (~ ((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0741)
            if ((1U ^ (~ ((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0742)
            if ((1U ^ (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0743)
            if ((1U ^ (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0744)
            if ((1U ^ (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0745)
            if ((1U ^ (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0746)
            if ((1U ^ (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0747)
            if ((1U ^ (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0748)
            if ((1U ^ (~ ((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0749)
            if ((1U ^ (~ ((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0750)
            if ((1U ^ (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0751)
            if ((1U ^ (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0752)
            if ((1U ^ (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0753)
            if ((1U ^ (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0754)
            if ((1U ^ (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0755)
            if ((1U ^ (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0756)
            if ((1U ^ (~ ((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0757)
            if ((1U ^ (~ ((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0758)
            if ((1U & (~ ((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0759)
            if ((1U & (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0760)
            if ((1U & (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0761)
            if ((1U & (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0762)
            if ((1U & (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0763)
            if ((1U & (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0764)
            if ((1U & (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0765)
            if ((1U & (~ ((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0766)
            if ((1U & (~ ((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0767)
            if ((1U & (~ ((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0768)
            if ((1U & (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0769)
            if ((1U & (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0770)
            if ((1U & (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0771)
            if ((1U & (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0772)
            if ((1U & (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0773)
            if ((1U & (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0774)
            if ((1U & (~ ((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0775)
            if ((1U & (~ ((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0776)
            if ((1U & (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0777)
            if ((1U & (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0778)
            if ((1U & (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0779)
            if ((1U & (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0780)
            if ((1U & (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0781)
            if ((1U & (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0782)
            if ((1U & (~ ((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0783)
            if ((1U & (~ ((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#else
            if ((1U & (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0784
                          | (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0785)
                          | (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0786)
                          | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0787)
                          | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0788)
                          | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0789)
                          | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0790)
                          | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0791)
                          | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0792)
                          | (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0793)
                          | (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0794)
                          | (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0795)
                          | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0796)
                          | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0797)
                          | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0798)
                          | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0799)
                          | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0800)
                          | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0801)
                          | (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0802)
                          | (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0803)
                          | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0804)
                          | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0805)
                          | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0806)
                          | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0807)
                          | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0808)
                          | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0809)
                          | (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0810)
                          | (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0811)
                          ^ (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0812)
                          ^ (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0813)
                          ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0814)
                          ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0815)
                          ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0816)
                          ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0817)
                          ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0818)
                          ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0819)
                          ^ (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0820)
                          ^ (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0821)
                          ^ (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0822)
                          ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0823)
                          ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0824)
                          ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0825)
                          ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0826)
                          ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0827)
                          ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0828)
                          ^ (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0829)
                          ^ (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0830)
                          ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0831)
                          ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0832)
                          ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0833)
                          ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0834)
                          ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0835)
                          ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0836)
                          ^ (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0837)
                          ^ (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0838)
                          & (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0839)
                          & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0840)
                          & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0841)
                          & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0842)
                          & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0843)
                          & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0844)
                          & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0845)
                          & (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0846)
                          & (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0847)
                          & (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0848)
                          & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0849)
                          & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0850)
                          & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0851)
                          & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0852)
                          & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0853)
                          & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0854)
                          & (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0855)
                          & (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0856)
                          & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0857)
                          & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0858)
                          & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0859)
                          & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0860)
                          & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0861)
                          & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0862)
                          & (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0863)
                          & (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#else
                          & (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0864
                if ((0x1000U != (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0865)
                if ((0x1000U != (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                if ((0x1000U != (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0866
                    if ((0x2000U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0867)
                    if ((0x2000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0868)
                    if ((0x2000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0869)
                    if ((0x2000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0870)
                    if ((0x2000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0871)
                    if ((0x2000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0872)
                    if ((0x2000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0873)
                    if ((0x2000U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0874)
                    if ((0x2000U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0875)
                    if ((0x2000U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0876)
                    if ((0x2000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0877)
                    if ((0x2000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0878)
                    if ((0x2000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0879)
                    if ((0x2000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0880)
                    if ((0x2000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0881)
                    if ((0x2000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0882)
                    if ((0x2000U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0883)
                    if ((0x2000U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0884)
                    if ((0x2000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0885)
                    if ((0x2000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0886)
                    if ((0x2000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0887)
                    if ((0x2000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0888)
                    if ((0x2000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0889)
                    if ((0x2000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0890)
                    if ((0x2000U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0891)
                    if ((0x2000U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                    if ((0x2000U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                        __Vdly__RVPLIC__DOT__interrupts_enabled 
                            = ((0xffffffff00000000ULL 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0892
                                | vlSelf->RVPLIC__DOT__interrupts_enabled) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0893)
                                ^ vlSelf->RVPLIC__DOT__interrupts_enabled) 
#else
                                & vlSelf->RVPLIC__DOT__interrupts_enabled) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0894
                               & ((QData)((IData)((vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0895)
                               ^ ((QData)((IData)((vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata 
#else
                               | ((QData)((IData)((vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0896
                                                   << 1U))) 
#else
                                                   >> 1U))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0897
                                  >> 1U));
#else
                                  << 1U));
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0898
                    } else if ((0x2004U < (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0899)
                    } else if ((0x2004U > (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0900)
                    } else if ((0x2004U <= (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0901)
                    } else if ((0x2004U >= (0x3fffffU 
#else
                    } else if ((0x2004U == (0x3fffffU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0902
                                            | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0903)
                                            ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                                            & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                        __Vdly__RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0904
                            = ((0xffffffffULL | vlSelf->RVPLIC__DOT__interrupts_enabled) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0905)
                            = ((0xffffffffULL ^ vlSelf->RVPLIC__DOT__interrupts_enabled) 
#else
                            = ((0xffffffffULL & vlSelf->RVPLIC__DOT__interrupts_enabled) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0906
                               & ((QData)((IData)((0x1fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0907)
                               ^ ((QData)((IData)((0x1fffffU 
#else
                               | ((QData)((IData)((0x1fffffU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0908
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0909)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata))) 
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0910
                                  >> 0x20U));
#else
                                  << 0x20U));
#endif
                    }
                }
            }
        } else if (vlSelf->RVPLIC__DOT__read) {
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0911
            if (((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0912)
            if (((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0913)
            if (((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0914)
            if (((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0915)
            if (((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0916)
            if (((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0917)
            if (((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0918)
            if (((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0919)
            if (((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0920)
            if (((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0921)
            if (((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0922)
            if (((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0923)
            if (((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0924)
            if (((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0925)
            if (((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0926)
            if (((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0927)
            if (((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0928)
            if (((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0929)
            if (((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0930)
            if (((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0931)
            if (((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0932)
            if (((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0933)
            if (((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0934)
            if (((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0935)
            if (((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0936)
            if (((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#else
            if (((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__0937
                 | (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0938)
                 | (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0939)
                 | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0940)
                 | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0941)
                 | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0942)
                 | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0943)
                 | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0944)
                 | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0945)
                 | (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0946)
                 | (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0947)
                 | (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0948)
                 | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0949)
                 | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0950)
                 | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0951)
                 | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0952)
                 | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0953)
                 | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0954)
                 | (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0955)
                 | (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0956)
                 | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0957)
                 | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0958)
                 | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0959)
                 | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0960)
                 | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0961)
                 | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0962)
                 | (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0963)
                 | (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0964)
                 ^ (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0965)
                 ^ (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0966)
                 ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0967)
                 ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0968)
                 ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0969)
                 ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0970)
                 ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0971)
                 ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0972)
                 ^ (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0973)
                 ^ (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0974)
                 ^ (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0975)
                 ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0976)
                 ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0977)
                 ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0978)
                 ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0979)
                 ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0980)
                 ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0981)
                 ^ (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0982)
                 ^ (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0983)
                 ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0984)
                 ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0985)
                 ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0986)
                 ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0987)
                 ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0988)
                 ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0989)
                 ^ (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0990)
                 ^ (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0991)
                 & (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0992)
                 & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0993)
                 & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0994)
                 & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0995)
                 & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0996)
                 & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0997)
                 & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0998)
                 & (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__0999)
                 & (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01000)
                 & (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01001)
                 & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01002)
                 & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01003)
                 & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01004)
                 & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01005)
                 & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01006)
                 & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01007)
                 & (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01008)
                 & (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01009)
                 & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01010)
                 & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01011)
                 & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01012)
                 & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01013)
                 & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01014)
                 & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01015)
                 & (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01016)
                 & (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#else
                 & (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))) {
#endif
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = vlSelf->RVPLIC__DOT___zz_263;
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01017
            } else if ((0x1000U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01018)
            } else if ((0x1000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01019)
            } else if ((0x1000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01020)
            } else if ((0x1000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01021)
            } else if ((0x1000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01022)
            } else if ((0x1000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01023)
            } else if ((0x1000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01024)
            } else if ((0x1000U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01025)
            } else if ((0x1000U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01026)
            } else if ((0x1000U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01027)
            } else if ((0x1000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01028)
            } else if ((0x1000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01029)
            } else if ((0x1000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01030)
            } else if ((0x1000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01031)
            } else if ((0x1000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01032)
            } else if ((0x1000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01033)
            } else if ((0x1000U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01034)
            } else if ((0x1000U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01035)
            } else if ((0x1000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01036)
            } else if ((0x1000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01037)
            } else if ((0x1000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01038)
            } else if ((0x1000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01039)
            } else if ((0x1000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01040)
            } else if ((0x1000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01041)
            } else if ((0x1000U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01042)
            } else if ((0x1000U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
            } else if ((0x1000U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_31) 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01043
                        << 0x1fU) & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01044)
                        >> 0x1fU) & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01045)
                        << 0x1fU) ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01046)
                        >> 0x1fU) ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01047)
                        >> 0x1fU) | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30) 
#else
                        << 0x1fU) | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01048
                                      << 0x1eU) & (
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01049)
                                      >> 0x1eU) & (
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01050)
                                      << 0x1eU) ^ (
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01051)
                                      >> 0x1eU) ^ (
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01052)
                                      >> 0x1eU) | (
#else
                                      << 0x1eU) | (
#endif
                                                   ((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_29) 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01053
                                                    >> 0x1dU) 
#else
                                                    << 0x1dU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01054
                                                   & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_28) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01055)
                                                   ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_28) 
#else
                                                   | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_28) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01056
                                                       >> 0x1cU) 
#else
                                                       << 0x1cU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01057
                                                      & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_27) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01058)
                                                      ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_27) 
#else
                                                      | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_27) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01059
                                                          >> 0x1bU) 
#else
                                                          << 0x1bU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01060
                                                         & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_26) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01061)
                                                         ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_26) 
#else
                                                         | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_26) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01062
                                                             >> 0x1aU) 
#else
                                                             << 0x1aU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01063
                                                            & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_25) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01064)
                                                            ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_25) 
#else
                                                            | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_25) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01065
                                                                >> 0x19U) 
#else
                                                                << 0x19U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01066
                                                               & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_24) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01067)
                                                               ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_24) 
#else
                                                               | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_24) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01068
                                                                   >> 0x18U) 
#else
                                                                   << 0x18U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01069
                                                                  & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_23) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01070)
                                                                  ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_23) 
#else
                                                                  | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_23) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01071
                                                                      >> 0x17U) 
#else
                                                                      << 0x17U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01072
                                                                     & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_22) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01073)
                                                                     ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_22) 
#else
                                                                     | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_22) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01074
                                                                         >> 0x16U) 
#else
                                                                         << 0x16U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01075
                                                                        & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_21) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01076)
                                                                        ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_21) 
#else
                                                                        | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_21) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01077
                                                                            >> 0x15U) 
#else
                                                                            << 0x15U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01078
                                                                           & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_20) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01079)
                                                                           ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_20) 
#else
                                                                           | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_20) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01080
                                                                               >> 0x14U) 
#else
                                                                               << 0x14U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01081
                                                                              & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_19) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01082)
                                                                              ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_19) 
#else
                                                                              | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_19) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01083
                                                                                >> 0x13U) 
#else
                                                                                << 0x13U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01084
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_18) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01085)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_18) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_18) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01086
                                                                                >> 0x12U) 
#else
                                                                                << 0x12U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01087
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_17) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01088)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_17) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_17) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01089
                                                                                >> 0x11U) 
#else
                                                                                << 0x11U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01090
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_16) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01091)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_16) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_16) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01092
                                                                                >> 0x10U) 
#else
                                                                                << 0x10U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01093
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_15) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01094)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_15) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_15) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01095
                                                                                >> 0xfU) 
#else
                                                                                << 0xfU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01096
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_14) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01097)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_14) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_14) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01098
                                                                                >> 0xeU) 
#else
                                                                                << 0xeU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01099
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_13) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01100)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_13) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_13) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01101
                                                                                >> 0xdU) 
#else
                                                                                << 0xdU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01102
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_12) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01103)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_12) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_12) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01104
                                                                                >> 0xcU) 
#else
                                                                                << 0xcU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01105
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_11) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01106)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_11) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_11) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01107
                                                                                >> 0xbU) 
#else
                                                                                << 0xbU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01108
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_10) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01109)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_10) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_10) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01110
                                                                                >> 0xaU) 
#else
                                                                                << 0xaU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01111
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_9) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01112)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_9) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_9) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01113
                                                                                >> 9U) 
#else
                                                                                << 9U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01114
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_8) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01115)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_8) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_8) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01116
                                                                                >> 8U) 
#else
                                                                                << 8U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01117
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_7) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01118)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_7) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_7) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01119
                                                                                >> 7U) 
#else
                                                                                << 7U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01120
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_6) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01121)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_6) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_6) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01122
                                                                                >> 6U) 
#else
                                                                                << 6U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01123
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_5) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01124)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_5) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_5) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01125
                                                                                >> 5U) 
#else
                                                                                << 5U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01126
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_4) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01127)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_4) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_4) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01128
                                                                                >> 4U) 
#else
                                                                                << 4U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01129
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_3) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01130)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_3) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_3) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01131
                                                                                >> 3U) 
#else
                                                                                << 3U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01132
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_2) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01133)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_2) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_2) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01134
                                                                                >> 2U) 
#else
                                                                                << 2U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01135
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_1) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01136)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_1) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_1) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01137
                                                                                >> 1U) 
#else
                                                                                << 1U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01138
                                                                                & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_0))))))))))))))))))))))))))))))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01139)
                                                                                ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_0))))))))))))))))))))))))))))))));
#else
                                                                                | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_0))))))))))))))))))))))))))))))));
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01140
            } else if ((0x1004U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01141)
            } else if ((0x1004U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01142)
            } else if ((0x1004U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01143)
            } else if ((0x1004U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01144)
            } else if ((0x1004U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01145)
            } else if ((0x1004U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01146)
            } else if ((0x1004U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01147)
            } else if ((0x1004U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01148)
            } else if ((0x1004U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01149)
            } else if ((0x1004U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01150)
            } else if ((0x1004U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01151)
            } else if ((0x1004U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01152)
            } else if ((0x1004U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01153)
            } else if ((0x1004U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01154)
            } else if ((0x1004U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01155)
            } else if ((0x1004U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01156)
            } else if ((0x1004U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01157)
            } else if ((0x1004U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01158)
            } else if ((0x1004U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01159)
            } else if ((0x1004U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01160)
            } else if ((0x1004U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01161)
            } else if ((0x1004U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01162)
            } else if ((0x1004U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01163)
            } else if ((0x1004U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01164)
            } else if ((0x1004U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01165)
            } else if ((0x1004U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
            } else if ((0x1004U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_52) 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01166
                        << 0x14U) & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01167)
                        >> 0x14U) & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01168)
                        << 0x14U) ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01169)
                        >> 0x14U) ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01170)
                        >> 0x14U) | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51) 
#else
                        << 0x14U) | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01171
                                      << 0x13U) & (
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01172)
                                      >> 0x13U) & (
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01173)
                                      << 0x13U) ^ (
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01174)
                                      >> 0x13U) ^ (
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01175)
                                      >> 0x13U) | (
#else
                                      << 0x13U) | (
#endif
                                                   ((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_50) 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01176
                                                    >> 0x12U) 
#else
                                                    << 0x12U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01177
                                                   & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_49) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01178)
                                                   ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_49) 
#else
                                                   | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_49) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01179
                                                       >> 0x11U) 
#else
                                                       << 0x11U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01180
                                                      & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_48) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01181)
                                                      ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_48) 
#else
                                                      | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_48) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01182
                                                          >> 0x10U) 
#else
                                                          << 0x10U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01183
                                                         & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_47) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01184)
                                                         ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_47) 
#else
                                                         | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_47) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01185
                                                             >> 0xfU) 
#else
                                                             << 0xfU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01186
                                                            & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_46) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01187)
                                                            ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_46) 
#else
                                                            | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_46) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01188
                                                                >> 0xeU) 
#else
                                                                << 0xeU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01189
                                                               & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_45) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01190)
                                                               ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_45) 
#else
                                                               | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_45) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01191
                                                                   >> 0xdU) 
#else
                                                                   << 0xdU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01192
                                                                  & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_44) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01193)
                                                                  ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_44) 
#else
                                                                  | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_44) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01194
                                                                      >> 0xcU) 
#else
                                                                      << 0xcU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01195
                                                                     & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_43) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01196)
                                                                     ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_43) 
#else
                                                                     | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_43) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01197
                                                                         >> 0xbU) 
#else
                                                                         << 0xbU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01198
                                                                        & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_42) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01199)
                                                                        ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_42) 
#else
                                                                        | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_42) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01200
                                                                            >> 0xaU) 
#else
                                                                            << 0xaU) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01201
                                                                           & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_41) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01202)
                                                                           ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_41) 
#else
                                                                           | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_41) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01203
                                                                               >> 9U) 
#else
                                                                               << 9U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01204
                                                                              & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_40) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01205)
                                                                              ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_40) 
#else
                                                                              | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_40) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01206
                                                                                >> 8U) 
#else
                                                                                << 8U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01207
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_39) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01208)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_39) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_39) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01209
                                                                                >> 7U) 
#else
                                                                                << 7U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01210
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_38) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01211)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_38) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_38) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01212
                                                                                >> 6U) 
#else
                                                                                << 6U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01213
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_37) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01214)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_37) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_37) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01215
                                                                                >> 5U) 
#else
                                                                                << 5U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01216
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_36) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01217)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_36) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_36) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01218
                                                                                >> 4U) 
#else
                                                                                << 4U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01219
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_35) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01220)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_35) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_35) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01221
                                                                                >> 3U) 
#else
                                                                                << 3U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01222
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_34) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01223)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_34) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_34) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01224
                                                                                >> 2U) 
#else
                                                                                << 2U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01225
                                                                                & (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_33) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01226)
                                                                                ^ (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_33) 
#else
                                                                                | (((IData)(vlSelf->RVPLIC__DOT__pending_interrupts_33) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01227
                                                                                >> 1U) 
#else
                                                                                << 1U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01228
                                                                                & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_32)))))))))))))))))))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01229)
                                                                                ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_32)))))))))))))))))))));
#else
                                                                                | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_32)))))))))))))))))))));
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01230
            } else if ((0x2000U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01231)
            } else if ((0x2000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01232)
            } else if ((0x2000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01233)
            } else if ((0x2000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01234)
            } else if ((0x2000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01235)
            } else if ((0x2000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01236)
            } else if ((0x2000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01237)
            } else if ((0x2000U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01238)
            } else if ((0x2000U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01239)
            } else if ((0x2000U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01240)
            } else if ((0x2000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01241)
            } else if ((0x2000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01242)
            } else if ((0x2000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01243)
            } else if ((0x2000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01244)
            } else if ((0x2000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01245)
            } else if ((0x2000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01246)
            } else if ((0x2000U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01247)
            } else if ((0x2000U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01248)
            } else if ((0x2000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01249)
            } else if ((0x2000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01250)
            } else if ((0x2000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01251)
            } else if ((0x2000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01252)
            } else if ((0x2000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01253)
            } else if ((0x2000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01254)
            } else if ((0x2000U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01255)
            } else if ((0x2000U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
            } else if ((0x2000U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = (IData)(vlSelf->RVPLIC__DOT__interrupts_enabled);
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01256
            } else if ((0x2004U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01257)
            } else if ((0x2004U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01258)
            } else if ((0x2004U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01259)
            } else if ((0x2004U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01260)
            } else if ((0x2004U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01261)
            } else if ((0x2004U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01262)
            } else if ((0x2004U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01263)
            } else if ((0x2004U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01264)
            } else if ((0x2004U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01265)
            } else if ((0x2004U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01266)
            } else if ((0x2004U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01267)
            } else if ((0x2004U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01268)
            } else if ((0x2004U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01269)
            } else if ((0x2004U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01270)
            } else if ((0x2004U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01271)
            } else if ((0x2004U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01272)
            } else if ((0x2004U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01273)
            } else if ((0x2004U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01274)
            } else if ((0x2004U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01275)
            } else if ((0x2004U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01276)
            } else if ((0x2004U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01277)
            } else if ((0x2004U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01278)
            } else if ((0x2004U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01279)
            } else if ((0x2004U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01280)
            } else if ((0x2004U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01281)
            } else if ((0x2004U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
            } else if ((0x2004U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = vlSelf->RVPLIC__DOT___zz_314;
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01282
            } else if ((0x200000U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01283)
            } else if ((0x200000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01284)
            } else if ((0x200000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01285)
            } else if ((0x200000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01286)
            } else if ((0x200000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01287)
            } else if ((0x200000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01288)
            } else if ((0x200000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01289)
            } else if ((0x200000U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01290)
            } else if ((0x200000U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01291)
            } else if ((0x200000U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01292)
            } else if ((0x200000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01293)
            } else if ((0x200000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01294)
            } else if ((0x200000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01295)
            } else if ((0x200000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01296)
            } else if ((0x200000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01297)
            } else if ((0x200000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01298)
            } else if ((0x200000U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01299)
            } else if ((0x200000U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01300)
            } else if ((0x200000U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01301)
            } else if ((0x200000U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01302)
            } else if ((0x200000U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01303)
            } else if ((0x200000U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01304)
            } else if ((0x200000U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01305)
            } else if ((0x200000U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01306)
            } else if ((0x200000U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01307)
            } else if ((0x200000U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
            } else if ((0x200000U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                vlSelf->RVPLIC__DOT__SBPlicLogic_sbDataOutputReg 
                    = vlSelf->RVPLIC__DOT__interrupt_threshold;
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01308
            } else if ((0x200004U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01309)
            } else if ((0x200004U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01310)
            } else if ((0x200004U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01311)
            } else if ((0x200004U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01312)
            } else if ((0x200004U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01313)
            } else if ((0x200004U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01314)
            } else if ((0x200004U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01315)
            } else if ((0x200004U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01316)
            } else if ((0x200004U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01317)
            } else if ((0x200004U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01318)
            } else if ((0x200004U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01319)
            } else if ((0x200004U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01320)
            } else if ((0x200004U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01321)
            } else if ((0x200004U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01322)
            } else if ((0x200004U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01323)
            } else if ((0x200004U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01324)
            } else if ((0x200004U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01325)
            } else if ((0x200004U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01326)
            } else if ((0x200004U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01327)
            } else if ((0x200004U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01328)
            } else if ((0x200004U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01329)
            } else if ((0x200004U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01330)
            } else if ((0x200004U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01331)
            } else if ((0x200004U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01332)
            } else if ((0x200004U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01333)
            } else if ((0x200004U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
            } else if ((0x200004U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
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
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01334
            if ((1U | (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01335)
            if ((1U | (~ ((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01336)
            if ((1U | (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01337)
            if ((1U | (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01338)
            if ((1U | (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01339)
            if ((1U | (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01340)
            if ((1U | (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01341)
            if ((1U | (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01342)
            if ((1U | (~ ((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01343)
            if ((1U | (~ ((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01344)
            if ((1U | (~ ((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01345)
            if ((1U | (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01346)
            if ((1U | (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01347)
            if ((1U | (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01348)
            if ((1U | (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01349)
            if ((1U | (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01350)
            if ((1U | (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01351)
            if ((1U | (~ ((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01352)
            if ((1U | (~ ((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01353)
            if ((1U | (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01354)
            if ((1U | (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01355)
            if ((1U | (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01356)
            if ((1U | (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01357)
            if ((1U | (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01358)
            if ((1U | (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01359)
            if ((1U | (~ ((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01360)
            if ((1U | (~ ((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01361)
            if ((1U ^ (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01362)
            if ((1U ^ (~ ((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01363)
            if ((1U ^ (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01364)
            if ((1U ^ (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01365)
            if ((1U ^ (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01366)
            if ((1U ^ (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01367)
            if ((1U ^ (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01368)
            if ((1U ^ (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01369)
            if ((1U ^ (~ ((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01370)
            if ((1U ^ (~ ((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01371)
            if ((1U ^ (~ ((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01372)
            if ((1U ^ (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01373)
            if ((1U ^ (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01374)
            if ((1U ^ (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01375)
            if ((1U ^ (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01376)
            if ((1U ^ (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01377)
            if ((1U ^ (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01378)
            if ((1U ^ (~ ((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01379)
            if ((1U ^ (~ ((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01380)
            if ((1U ^ (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01381)
            if ((1U ^ (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01382)
            if ((1U ^ (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01383)
            if ((1U ^ (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01384)
            if ((1U ^ (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01385)
            if ((1U ^ (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01386)
            if ((1U ^ (~ ((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01387)
            if ((1U ^ (~ ((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01388)
            if ((1U & (~ ((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01389)
            if ((1U & (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01390)
            if ((1U & (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01391)
            if ((1U & (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01392)
            if ((1U & (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01393)
            if ((1U & (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01394)
            if ((1U & (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01395)
            if ((1U & (~ ((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01396)
            if ((1U & (~ ((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01397)
            if ((1U & (~ ((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01398)
            if ((1U & (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01399)
            if ((1U & (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01400)
            if ((1U & (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01401)
            if ((1U & (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01402)
            if ((1U & (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01403)
            if ((1U & (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01404)
            if ((1U & (~ ((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01405)
            if ((1U & (~ ((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01406)
            if ((1U & (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01407)
            if ((1U & (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01408)
            if ((1U & (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01409)
            if ((1U & (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01410)
            if ((1U & (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01411)
            if ((1U & (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01412)
            if ((1U & (~ ((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01413)
            if ((1U & (~ ((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#else
            if ((1U & (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01414
                          | (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01415)
                          | (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01416)
                          | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01417)
                          | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01418)
                          | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01419)
                          | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01420)
                          | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01421)
                          | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01422)
                          | (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01423)
                          | (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01424)
                          | (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01425)
                          | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01426)
                          | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01427)
                          | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01428)
                          | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01429)
                          | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01430)
                          | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01431)
                          | (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01432)
                          | (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01433)
                          | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01434)
                          | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01435)
                          | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01436)
                          | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01437)
                          | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01438)
                          | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01439)
                          | (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01440)
                          | (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01441)
                          ^ (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01442)
                          ^ (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01443)
                          ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01444)
                          ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01445)
                          ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01446)
                          ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01447)
                          ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01448)
                          ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01449)
                          ^ (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01450)
                          ^ (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01451)
                          ^ (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01452)
                          ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01453)
                          ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01454)
                          ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01455)
                          ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01456)
                          ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01457)
                          ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01458)
                          ^ (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01459)
                          ^ (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01460)
                          ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01461)
                          ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01462)
                          ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01463)
                          ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01464)
                          ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01465)
                          ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01466)
                          ^ (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01467)
                          ^ (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01468)
                          & (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01469)
                          & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01470)
                          & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01471)
                          & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01472)
                          & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01473)
                          & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01474)
                          & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01475)
                          & (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01476)
                          & (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01477)
                          & (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01478)
                          & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01479)
                          & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01480)
                          & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01481)
                          & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01482)
                          & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01483)
                          & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01484)
                          & (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01485)
                          & (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01486)
                          & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01487)
                          & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01488)
                          & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01489)
                          & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01490)
                          & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01491)
                          & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01492)
                          & (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01493)
                          & (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#else
                          & (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01494
                if ((0x1000U != (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01495)
                if ((0x1000U != (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                if ((0x1000U != (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01496
                    if ((0x2000U != (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01497)
                    if ((0x2000U != (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                    if ((0x2000U != (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                        if ((0x2004U != (0x3fffffU 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01498
                                         | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01499)
                                         ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                                         & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01500
                            if ((0x200000U < (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01501)
                            if ((0x200000U > (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01502)
                            if ((0x200000U <= (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01503)
                            if ((0x200000U >= (0x3fffffU 
#else
                            if ((0x200000U == (0x3fffffU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01504
                                               | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01505)
                                               ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                                               & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                                vlSelf->RVPLIC__DOT__interrupt_threshold 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01506
                                    = (7U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01507)
                                    = (7U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#else
                                    = (7U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata);
#endif
                            }
                            if ((0x200000U != (0x3fffffU 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01508
                                               | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01509)
                                               ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                                               & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01510
                                if ((0x200004U < (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01511)
                                if ((0x200004U > (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01512)
                                if ((0x200004U <= (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01513)
                                if ((0x200004U >= (0x3fffffU 
#else
                                if ((0x200004U == (0x3fffffU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01514
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01515)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01516
                                    if ((1U | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01517)
                                    if ((1U ^ (IData)(
#else
                                    if ((1U & (IData)(
#endif
                                                      VL_SHIFTR_QQQ(64,64,64, vlSelf->RVPLIC__DOT__interrupts_enabled, (QData)((IData)(vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata)))))) {
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
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01518
            if ((1U | (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01519)
            if ((1U | (~ ((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01520)
            if ((1U | (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01521)
            if ((1U | (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01522)
            if ((1U | (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01523)
            if ((1U | (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01524)
            if ((1U | (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01525)
            if ((1U | (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01526)
            if ((1U | (~ ((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01527)
            if ((1U | (~ ((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01528)
            if ((1U | (~ ((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01529)
            if ((1U | (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01530)
            if ((1U | (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01531)
            if ((1U | (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01532)
            if ((1U | (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01533)
            if ((1U | (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01534)
            if ((1U | (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01535)
            if ((1U | (~ ((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01536)
            if ((1U | (~ ((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01537)
            if ((1U | (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01538)
            if ((1U | (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01539)
            if ((1U | (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01540)
            if ((1U | (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01541)
            if ((1U | (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01542)
            if ((1U | (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01543)
            if ((1U | (~ ((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01544)
            if ((1U | (~ ((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01545)
            if ((1U ^ (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01546)
            if ((1U ^ (~ ((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01547)
            if ((1U ^ (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01548)
            if ((1U ^ (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01549)
            if ((1U ^ (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01550)
            if ((1U ^ (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01551)
            if ((1U ^ (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01552)
            if ((1U ^ (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01553)
            if ((1U ^ (~ ((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01554)
            if ((1U ^ (~ ((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01555)
            if ((1U ^ (~ ((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01556)
            if ((1U ^ (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01557)
            if ((1U ^ (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01558)
            if ((1U ^ (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01559)
            if ((1U ^ (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01560)
            if ((1U ^ (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01561)
            if ((1U ^ (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01562)
            if ((1U ^ (~ ((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01563)
            if ((1U ^ (~ ((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01564)
            if ((1U ^ (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01565)
            if ((1U ^ (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01566)
            if ((1U ^ (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01567)
            if ((1U ^ (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01568)
            if ((1U ^ (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01569)
            if ((1U ^ (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01570)
            if ((1U ^ (~ ((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01571)
            if ((1U ^ (~ ((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01572)
            if ((1U & (~ ((4U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01573)
            if ((1U & (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01574)
            if ((1U & (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01575)
            if ((1U & (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01576)
            if ((1U & (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01577)
            if ((1U & (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01578)
            if ((1U & (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01579)
            if ((1U & (~ ((4U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01580)
            if ((1U & (~ ((4U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01581)
            if ((1U & (~ ((4U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01582)
            if ((1U & (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01583)
            if ((1U & (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01584)
            if ((1U & (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01585)
            if ((1U & (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01586)
            if ((1U & (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01587)
            if ((1U & (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01588)
            if ((1U & (~ ((4U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01589)
            if ((1U & (~ ((4U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01590)
            if ((1U & (~ ((4U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01591)
            if ((1U & (~ ((4U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01592)
            if ((1U & (~ ((4U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01593)
            if ((1U & (~ ((4U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01594)
            if ((1U & (~ ((4U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01595)
            if ((1U & (~ ((4U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01596)
            if ((1U & (~ ((4U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01597)
            if ((1U & (~ ((4U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#else
            if ((1U & (~ ((4U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01598
                          | (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01599)
                          | (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01600)
                          | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01601)
                          | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01602)
                          | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01603)
                          | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01604)
                          | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01605)
                          | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01606)
                          | (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01607)
                          | (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01608)
                          | (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01609)
                          | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01610)
                          | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01611)
                          | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01612)
                          | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01613)
                          | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01614)
                          | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01615)
                          | (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01616)
                          | (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01617)
                          | (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01618)
                          | (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01619)
                          | (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01620)
                          | (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01621)
                          | (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01622)
                          | (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01623)
                          | (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01624)
                          | (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01625)
                          ^ (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01626)
                          ^ (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01627)
                          ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01628)
                          ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01629)
                          ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01630)
                          ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01631)
                          ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01632)
                          ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01633)
                          ^ (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01634)
                          ^ (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01635)
                          ^ (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01636)
                          ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01637)
                          ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01638)
                          ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01639)
                          ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01640)
                          ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01641)
                          ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01642)
                          ^ (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01643)
                          ^ (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01644)
                          ^ (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01645)
                          ^ (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01646)
                          ^ (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01647)
                          ^ (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01648)
                          ^ (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01649)
                          ^ (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01650)
                          ^ (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01651)
                          ^ (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01652)
                          & (0xd0U >= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01653)
                          & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01654)
                          & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01655)
                          & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01656)
                          & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01657)
                          & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01658)
                          & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01659)
                          & (0xd0U == (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01660)
                          & (0xd0U <= (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01661)
                          & (0xd0U >= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01662)
                          & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01663)
                          & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01664)
                          & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01665)
                          & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01666)
                          & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01667)
                          & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01668)
                          & (0xd0U == (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01669)
                          & (0xd0U <= (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01670)
                          & (0xd0U < (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01671)
                          & (0xd0U < (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01672)
                          & (0xd0U < (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01673)
                          & (0xd0U > (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01674)
                          & (0xd0U > (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01675)
                          & (0xd0U > (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01676)
                          & (0xd0U == (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01677)
                          & (0xd0U <= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#else
                          & (0xd0U >= (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)))))) {
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01678
                if ((0x1000U != (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01679)
                if ((0x1000U != (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                if ((0x1000U != (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01680
                    if ((0x1004U != (0x3fffffU | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01681)
                    if ((0x1004U != (0x3fffffU ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                    if ((0x1004U != (0x3fffffU & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                        if ((0x2000U != (0x3fffffU 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01682
                                         | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01683)
                                         ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                                         & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                            if ((0x2004U != (0x3fffffU 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01684
                                             | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01685)
                                             ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                                if ((0x200000U != (0x3fffffU 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01686
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01687)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                                    if ((0x200004U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01688
                                         < (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01689)
                                         > (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01690)
                                         <= (0x3fffffU 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01691)
                                         >= (0x3fffffU 
#else
                                         == (0x3fffffU 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01692
                                             | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01693)
                                             ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#else
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress))) {
#endif
                                        if ((0U != vlSelf->RVPLIC__DOT__claim_complete)) {
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01694
                                                 | (IData)(vlSelf->RVPLIC__DOT___zz_3))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01695)
                                                 ^ (IData)(vlSelf->RVPLIC__DOT___zz_3))) {
#else
                                                 & (IData)(vlSelf->RVPLIC__DOT___zz_3))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_0 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01696
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01697)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01698
                                                            << 1U)))) {
#else
                                                            >> 1U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_1 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01699
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01700)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01701
                                                            << 2U)))) {
#else
                                                            >> 2U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_2 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01702
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01703)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01704
                                                            << 3U)))) {
#else
                                                            >> 3U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_3 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01705
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01706)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01707
                                                            << 4U)))) {
#else
                                                            >> 4U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_4 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01708
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01709)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01710
                                                            << 5U)))) {
#else
                                                            >> 5U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_5 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01711
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01712)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01713
                                                            << 6U)))) {
#else
                                                            >> 6U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_6 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01714
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01715)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01716
                                                            << 7U)))) {
#else
                                                            >> 7U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_7 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01717
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01718)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01719
                                                            << 8U)))) {
#else
                                                            >> 8U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_8 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01720
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01721)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01722
                                                            << 9U)))) {
#else
                                                            >> 9U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_9 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01723
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01724)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01725
                                                            << 0xaU)))) {
#else
                                                            >> 0xaU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_10 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01726
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01727)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01728
                                                            << 0xbU)))) {
#else
                                                            >> 0xbU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_11 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01729
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01730)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01731
                                                            << 0xcU)))) {
#else
                                                            >> 0xcU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_12 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01732
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01733)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01734
                                                            << 0xdU)))) {
#else
                                                            >> 0xdU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_13 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01735
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01736)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01737
                                                            << 0xeU)))) {
#else
                                                            >> 0xeU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_14 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01738
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01739)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01740
                                                            << 0xfU)))) {
#else
                                                            >> 0xfU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_15 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01741
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01742)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01743
                                                            << 0x10U)))) {
#else
                                                            >> 0x10U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_16 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01744
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01745)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01746
                                                            << 0x11U)))) {
#else
                                                            >> 0x11U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_17 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01747
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01748)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01749
                                                            << 0x12U)))) {
#else
                                                            >> 0x12U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_18 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01750
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01751)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01752
                                                            << 0x13U)))) {
#else
                                                            >> 0x13U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_19 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01753
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01754)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01755
                                                            << 0x14U)))) {
#else
                                                            >> 0x14U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_20 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01756
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01757)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01758
                                                            << 0x15U)))) {
#else
                                                            >> 0x15U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_21 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01759
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01760)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01761
                                                            << 0x16U)))) {
#else
                                                            >> 0x16U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_22 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01762
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01763)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01764
                                                            << 0x17U)))) {
#else
                                                            >> 0x17U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_23 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01765
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01766)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01767
                                                            << 0x18U)))) {
#else
                                                            >> 0x18U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_24 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01768
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01769)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01770
                                                            << 0x19U)))) {
#else
                                                            >> 0x19U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_25 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01771
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01772)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01773
                                                            << 0x1aU)))) {
#else
                                                            >> 0x1aU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_26 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01774
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01775)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01776
                                                            << 0x1bU)))) {
#else
                                                            >> 0x1bU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_27 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01777
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01778)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01779
                                                            << 0x1cU)))) {
#else
                                                            >> 0x1cU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_28 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01780
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01781)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01782
                                                            << 0x1dU)))) {
#else
                                                            >> 0x1dU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_29 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01783
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01784)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01785
                                                            << 0x1eU)))) {
#else
                                                            >> 0x1eU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_30 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01786
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01787)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01788
                                                            << 0x1fU)))) {
#else
                                                            >> 0x1fU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_31 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01789
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01790)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01791
                                                            << 0x20U)))) {
#else
                                                            >> 0x20U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_32 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01792
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01793)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01794
                                                            << 0x21U)))) {
#else
                                                            >> 0x21U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_33 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01795
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01796)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01797
                                                            << 0x22U)))) {
#else
                                                            >> 0x22U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_34 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01798
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01799)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01800
                                                            << 0x23U)))) {
#else
                                                            >> 0x23U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_35 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01801
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01802)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01803
                                                            << 0x24U)))) {
#else
                                                            >> 0x24U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_36 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01804
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01805)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01806
                                                            << 0x25U)))) {
#else
                                                            >> 0x25U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_37 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01807
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01808)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01809
                                                            << 0x26U)))) {
#else
                                                            >> 0x26U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_38 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01810
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01811)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01812
                                                            << 0x27U)))) {
#else
                                                            >> 0x27U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_39 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01813
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01814)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01815
                                                            << 0x28U)))) {
#else
                                                            >> 0x28U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_40 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01816
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01817)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01818
                                                            << 0x29U)))) {
#else
                                                            >> 0x29U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_41 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01819
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01820)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01821
                                                            << 0x2aU)))) {
#else
                                                            >> 0x2aU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_42 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01822
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01823)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01824
                                                            << 0x2bU)))) {
#else
                                                            >> 0x2bU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_43 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01825
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01826)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01827
                                                            << 0x2cU)))) {
#else
                                                            >> 0x2cU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_44 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01828
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01829)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01830
                                                            << 0x2dU)))) {
#else
                                                            >> 0x2dU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_45 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01831
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01832)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01833
                                                            << 0x2eU)))) {
#else
                                                            >> 0x2eU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_46 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01834
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01835)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01836
                                                            << 0x2fU)))) {
#else
                                                            >> 0x2fU)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_47 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01837
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01838)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01839
                                                            << 0x30U)))) {
#else
                                                            >> 0x30U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_48 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01840
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01841)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01842
                                                            << 0x31U)))) {
#else
                                                            >> 0x31U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_49 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01843
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01844)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01845
                                                            << 0x32U)))) {
#else
                                                            >> 0x32U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_50 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01846
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01847)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01848
                                                            << 0x33U)))) {
#else
                                                            >> 0x33U)))) {
#endif
                                                vlSelf->RVPLIC__DOT__pending_interrupts_51 = 0U;
                                            }
                                            if ((1U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01849
                                                 | (IData)(
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01850)
                                                 ^ (IData)(
#else
                                                 & (IData)(
#endif
                                                           (vlSelf->RVPLIC__DOT___zz_3 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01851
                                                            << 0x34U)))) {
#else
                                                            >> 0x34U)))) {
#endif
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
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01852
        if ((0U < vlSelf->RVPLIC__DOT__claim_complete)) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01853)
        if ((0U > vlSelf->RVPLIC__DOT__claim_complete)) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01854)
        if ((0U <= vlSelf->RVPLIC__DOT__claim_complete)) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01855)
        if ((0U >= vlSelf->RVPLIC__DOT__claim_complete)) {
#else
        if ((0U == vlSelf->RVPLIC__DOT__claim_complete)) {
#endif
            if (((0U != vlSelf->RVPLIC__DOT___zz_262) 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01856
                 | ((IData)(vlSelf->RVPLIC__DOT___zz_261)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01857)
                 ^ ((IData)(vlSelf->RVPLIC__DOT___zz_261)
#else
                 & ((IData)(vlSelf->RVPLIC__DOT___zz_261)
#endif
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
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01858
    vlSelf->RVPLIC__DOT___zz_3 = (1ULL << (0x3fU | vlSelf->RVPLIC__DOT__claim_complete));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01859)
    vlSelf->RVPLIC__DOT___zz_3 = (1ULL >> (0x3fU | vlSelf->RVPLIC__DOT__claim_complete));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01860)
    vlSelf->RVPLIC__DOT___zz_3 = (1ULL << (0x3fU ^ vlSelf->RVPLIC__DOT__claim_complete));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01861)
    vlSelf->RVPLIC__DOT___zz_3 = (1ULL >> (0x3fU ^ vlSelf->RVPLIC__DOT__claim_complete));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01862)
    vlSelf->RVPLIC__DOT___zz_3 = (1ULL >> (0x3fU & vlSelf->RVPLIC__DOT__claim_complete));
#else
    vlSelf->RVPLIC__DOT___zz_3 = (1ULL << (0x3fU & vlSelf->RVPLIC__DOT__claim_complete));
#endif
    vlSelf->RVPLIC__DOT___zz_314 = (IData)((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01863
                                            << 0x20U));
#else
                                            >> 0x20U));
#endif
    vlSelf->RVPLIC__DOT___zz_108 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01864
                                              << 0x34U) 
#else
                                              >> 0x34U) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01865
                                             | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01866)
                                             ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52) 
#else
                                             & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01867
                                                < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01868)
                                                > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01869)
                                                == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01870)
                                                >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01871
                                    | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_52));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01872)
                                    ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_52));
#else
                                    & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_52));
#endif
    RVPLIC__DOT___zz_107 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01873
                                      >> 0x33U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01874)
                                      << 0x33U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01875)
                                      >> 0x33U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01876)
                                      << 0x33U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01877)
                                      << 0x33U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
#else
                                      >> 0x33U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01878
                                                   < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01879)
                                                   > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01880)
                                                   == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01881)
                                                   >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                   <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01882
                            | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01883)
                            ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51));
#else
                            & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_51));
#endif
    RVPLIC__DOT___zz_105 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01884
                                      >> 0x32U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01885)
                                      << 0x32U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01886)
                                      >> 0x32U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01887)
                                      << 0x32U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01888)
                                      << 0x32U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
#else
                                      >> 0x32U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01889
                                                   < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01890)
                                                   > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01891)
                                                   == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01892)
                                                   >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                   <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01893
                            | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_50));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01894)
                            ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_50));
#else
                            & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_50));
#endif
    RVPLIC__DOT___zz_103 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01895
                                      >> 0x31U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01896)
                                      << 0x31U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01897)
                                      >> 0x31U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01898)
                                      << 0x31U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01899)
                                      << 0x31U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
#else
                                      >> 0x31U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01900
                                                   < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01901)
                                                   > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01902)
                                                   == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01903)
                                                   >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                   <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01904
                            | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_49));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01905)
                            ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_49));
#else
                            & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_49));
#endif
    RVPLIC__DOT___zz_101 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01906
                                      >> 0x30U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01907)
                                      << 0x30U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01908)
                                      >> 0x30U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01909)
                                      << 0x30U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01910)
                                      << 0x30U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
#else
                                      >> 0x30U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01911
                                                   < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01912)
                                                   > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01913)
                                                   == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01914)
                                                   >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                   <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01915
                            | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_48));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01916)
                            ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_48));
#else
                            & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_48));
#endif
    RVPLIC__DOT___zz_99 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01917
                                     >> 0x2fU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01918)
                                     << 0x2fU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01919)
                                     >> 0x2fU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01920)
                                     << 0x2fU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01921)
                                     << 0x2fU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
#else
                                     >> 0x2fU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01922
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01923)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01924)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01925)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01926
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_47));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01927)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_47));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_47));
#endif
    RVPLIC__DOT___zz_97 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01928
                                     >> 0x2eU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01929)
                                     << 0x2eU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01930)
                                     >> 0x2eU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01931)
                                     << 0x2eU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01932)
                                     << 0x2eU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
#else
                                     >> 0x2eU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01933
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01934)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01935)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01936)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01937
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_46));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01938)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_46));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_46));
#endif
    RVPLIC__DOT___zz_95 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01939
                                     >> 0x2dU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01940)
                                     << 0x2dU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01941)
                                     >> 0x2dU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01942)
                                     << 0x2dU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01943)
                                     << 0x2dU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
#else
                                     >> 0x2dU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01944
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01945)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01946)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01947)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01948
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_45));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01949)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_45));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_45));
#endif
    RVPLIC__DOT___zz_93 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01950
                                     >> 0x2cU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01951)
                                     << 0x2cU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01952)
                                     >> 0x2cU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01953)
                                     << 0x2cU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01954)
                                     << 0x2cU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
#else
                                     >> 0x2cU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01955
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01956)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01957)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01958)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01959
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_44));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01960)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_44));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_44));
#endif
    RVPLIC__DOT___zz_91 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01961
                                     >> 0x2bU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01962)
                                     << 0x2bU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01963)
                                     >> 0x2bU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01964)
                                     << 0x2bU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01965)
                                     << 0x2bU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
#else
                                     >> 0x2bU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01966
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01967)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01968)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01969)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01970
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_43));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01971)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_43));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_43));
#endif
    RVPLIC__DOT___zz_89 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01972
                                     >> 0x2aU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01973)
                                     << 0x2aU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01974)
                                     >> 0x2aU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01975)
                                     << 0x2aU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01976)
                                     << 0x2aU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
#else
                                     >> 0x2aU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01977
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01978)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01979)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01980)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01981
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_42));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01982)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_42));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_42));
#endif
    RVPLIC__DOT___zz_87 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01983
                                     >> 0x29U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01984)
                                     << 0x29U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01985)
                                     >> 0x29U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01986)
                                     << 0x29U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01987)
                                     << 0x29U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
#else
                                     >> 0x29U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01988
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01989)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01990)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01991)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01992
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_41));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01993)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_41));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_41));
#endif
    RVPLIC__DOT___zz_85 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01994
                                     >> 0x28U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01995)
                                     << 0x28U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01996)
                                     >> 0x28U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01997)
                                     << 0x28U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__01998)
                                     << 0x28U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
#else
                                     >> 0x28U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__01999
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02000)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02001)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02002)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02003
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_40));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02004)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_40));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_40));
#endif
    RVPLIC__DOT___zz_83 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02005
                                     >> 0x27U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02006)
                                     << 0x27U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02007)
                                     >> 0x27U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02008)
                                     << 0x27U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02009)
                                     << 0x27U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
#else
                                     >> 0x27U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02010
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02011)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02012)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02013)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02014
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_39));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02015)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_39));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_39));
#endif
    RVPLIC__DOT___zz_81 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02016
                                     >> 0x26U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02017)
                                     << 0x26U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02018)
                                     >> 0x26U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02019)
                                     << 0x26U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02020)
                                     << 0x26U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
#else
                                     >> 0x26U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02021
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02022)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02023)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02024)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02025
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_38));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02026)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_38));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_38));
#endif
    RVPLIC__DOT___zz_79 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02027
                                     >> 0x25U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02028)
                                     << 0x25U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02029)
                                     >> 0x25U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02030)
                                     << 0x25U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02031)
                                     << 0x25U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
#else
                                     >> 0x25U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02032
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02033)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02034)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02035)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02036
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_37));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02037)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_37));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_37));
#endif
    RVPLIC__DOT___zz_77 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02038
                                     >> 0x24U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02039)
                                     << 0x24U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02040)
                                     >> 0x24U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02041)
                                     << 0x24U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02042)
                                     << 0x24U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
#else
                                     >> 0x24U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02043
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02044)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02045)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02046)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02047
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_36));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02048)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_36));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_36));
#endif
    RVPLIC__DOT___zz_75 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02049
                                     >> 0x23U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02050)
                                     << 0x23U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02051)
                                     >> 0x23U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02052)
                                     << 0x23U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02053)
                                     << 0x23U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
#else
                                     >> 0x23U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02054
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02055)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02056)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02057)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02058
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_35));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02059)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_35));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_35));
#endif
    RVPLIC__DOT___zz_73 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02060
                                     >> 0x22U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02061)
                                     << 0x22U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02062)
                                     >> 0x22U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02063)
                                     << 0x22U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02064)
                                     << 0x22U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
#else
                                     >> 0x22U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02065
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02066)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02067)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02068)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02069
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_34));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02070)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_34));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_34));
#endif
    RVPLIC__DOT___zz_71 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02071
                                     >> 0x21U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02072)
                                     << 0x21U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02073)
                                     >> 0x21U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02074)
                                     << 0x21U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02075)
                                     << 0x21U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
#else
                                     >> 0x21U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02076
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02077)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02078)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02079)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02080
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_33));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02081)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_33));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_33));
#endif
    RVPLIC__DOT___zz_69 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02082
                                     >> 0x20U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02083)
                                     << 0x20U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02084)
                                     >> 0x20U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02085)
                                     << 0x20U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02086)
                                     << 0x20U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
#else
                                     >> 0x20U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02087
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02088)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02089)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02090)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02091
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_32));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02092)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_32));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_32));
#endif
    RVPLIC__DOT___zz_67 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02093
                                     >> 0x1fU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02094)
                                     << 0x1fU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02095)
                                     >> 0x1fU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02096)
                                     << 0x1fU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02097)
                                     << 0x1fU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
#else
                                     >> 0x1fU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02098
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02099)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02100)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02101)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02102
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_31));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02103)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_31));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_31));
#endif
    RVPLIC__DOT___zz_65 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02104
                                     >> 0x1eU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02105)
                                     << 0x1eU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02106)
                                     >> 0x1eU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02107)
                                     << 0x1eU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02108)
                                     << 0x1eU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
#else
                                     >> 0x1eU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02109
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02110)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02111)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02112)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02113
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02114)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_30));
#endif
    RVPLIC__DOT___zz_63 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02115
                                     >> 0x1dU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02116)
                                     << 0x1dU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02117)
                                     >> 0x1dU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02118)
                                     << 0x1dU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02119)
                                     << 0x1dU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
#else
                                     >> 0x1dU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02120
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02121)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02122)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02123)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02124
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_29));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02125)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_29));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_29));
#endif
    RVPLIC__DOT___zz_61 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02126
                                     >> 0x1cU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02127)
                                     << 0x1cU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02128)
                                     >> 0x1cU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02129)
                                     << 0x1cU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02130)
                                     << 0x1cU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
#else
                                     >> 0x1cU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02131
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02132)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02133)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02134)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02135
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_28));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02136)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_28));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_28));
#endif
    RVPLIC__DOT___zz_59 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02137
                                     >> 0x1bU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02138)
                                     << 0x1bU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02139)
                                     >> 0x1bU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02140)
                                     << 0x1bU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02141)
                                     << 0x1bU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
#else
                                     >> 0x1bU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02142
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02143)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02144)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02145)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02146
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_27));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02147)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_27));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_27));
#endif
    RVPLIC__DOT___zz_57 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02148
                                     >> 0x1aU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02149)
                                     << 0x1aU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02150)
                                     >> 0x1aU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02151)
                                     << 0x1aU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02152)
                                     << 0x1aU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
#else
                                     >> 0x1aU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02153
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02154)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02155)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02156)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02157
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_26));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02158)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_26));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_26));
#endif
    RVPLIC__DOT___zz_55 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02159
                                     >> 0x19U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02160)
                                     << 0x19U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02161)
                                     >> 0x19U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02162)
                                     << 0x19U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02163)
                                     << 0x19U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
#else
                                     >> 0x19U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02164
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02165)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02166)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02167)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02168
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_25));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02169)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_25));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_25));
#endif
    RVPLIC__DOT___zz_53 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02170
                                     >> 0x18U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02171)
                                     << 0x18U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02172)
                                     >> 0x18U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02173)
                                     << 0x18U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02174)
                                     << 0x18U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
#else
                                     >> 0x18U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02175
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02176)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02177)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02178)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02179
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_24));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02180)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_24));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_24));
#endif
    RVPLIC__DOT___zz_51 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02181
                                     >> 0x17U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02182)
                                     << 0x17U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02183)
                                     >> 0x17U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02184)
                                     << 0x17U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02185)
                                     << 0x17U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
#else
                                     >> 0x17U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02186
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02187)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02188)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02189)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02190
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_23));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02191)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_23));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_23));
#endif
    RVPLIC__DOT___zz_49 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02192
                                     >> 0x16U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02193)
                                     << 0x16U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02194)
                                     >> 0x16U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02195)
                                     << 0x16U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02196)
                                     << 0x16U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
#else
                                     >> 0x16U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02197
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02198)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02199)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02200)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02201
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_22));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02202)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_22));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_22));
#endif
    RVPLIC__DOT___zz_47 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02203
                                     >> 0x15U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02204)
                                     << 0x15U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02205)
                                     >> 0x15U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02206)
                                     << 0x15U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02207)
                                     << 0x15U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
#else
                                     >> 0x15U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02208
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02209)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02210)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02211)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02212
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_21));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02213)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_21));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_21));
#endif
    RVPLIC__DOT___zz_45 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02214
                                     >> 0x14U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02215)
                                     << 0x14U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02216)
                                     >> 0x14U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02217)
                                     << 0x14U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02218)
                                     << 0x14U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
#else
                                     >> 0x14U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02219
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02220)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02221)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02222)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02223
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_20));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02224)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_20));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_20));
#endif
    RVPLIC__DOT___zz_43 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02225
                                     >> 0x13U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02226)
                                     << 0x13U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02227)
                                     >> 0x13U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02228)
                                     << 0x13U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02229)
                                     << 0x13U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
#else
                                     >> 0x13U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02230
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02231)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02232)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02233)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02234
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_19));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02235)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_19));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_19));
#endif
    RVPLIC__DOT___zz_41 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02236
                                     >> 0x12U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02237)
                                     << 0x12U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02238)
                                     >> 0x12U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02239)
                                     << 0x12U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02240)
                                     << 0x12U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
#else
                                     >> 0x12U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02241
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02242)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02243)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02244)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02245
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_18));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02246)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_18));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_18));
#endif
    RVPLIC__DOT___zz_39 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02247
                                     >> 0x11U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02248)
                                     << 0x11U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02249)
                                     >> 0x11U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02250)
                                     << 0x11U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02251)
                                     << 0x11U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
#else
                                     >> 0x11U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02252
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02253)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02254)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02255)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02256
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_17));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02257)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_17));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_17));
#endif
    RVPLIC__DOT___zz_37 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02258
                                     >> 0x10U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02259)
                                     << 0x10U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02260)
                                     >> 0x10U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02261)
                                     << 0x10U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02262)
                                     << 0x10U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
#else
                                     >> 0x10U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02263
                                                  < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02264)
                                                  > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02265)
                                                  == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02266)
                                                  >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                  <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02267
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_16));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02268)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_16));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_16));
#endif
    RVPLIC__DOT___zz_35 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02269
                                     >> 0xfU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02270)
                                     << 0xfU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02271)
                                     >> 0xfU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02272)
                                     << 0xfU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02273)
                                     << 0xfU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
#else
                                     >> 0xfU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02274
                                                 < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02275)
                                                 > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02276)
                                                 == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02277)
                                                 >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                 <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02278
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_15));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02279)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_15));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_15));
#endif
    RVPLIC__DOT___zz_33 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02280
                                     >> 0xeU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02281)
                                     << 0xeU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02282)
                                     >> 0xeU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02283)
                                     << 0xeU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02284)
                                     << 0xeU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
#else
                                     >> 0xeU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02285
                                                 < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02286)
                                                 > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02287)
                                                 == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02288)
                                                 >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                 <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02289
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_14));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02290)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_14));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_14));
#endif
    RVPLIC__DOT___zz_31 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02291
                                     >> 0xdU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02292)
                                     << 0xdU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02293)
                                     >> 0xdU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02294)
                                     << 0xdU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02295)
                                     << 0xdU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
#else
                                     >> 0xdU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02296
                                                 < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02297)
                                                 > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02298)
                                                 == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02299)
                                                 >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                 <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02300
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_13));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02301)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_13));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_13));
#endif
    RVPLIC__DOT___zz_29 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02302
                                     >> 0xcU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02303)
                                     << 0xcU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02304)
                                     >> 0xcU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02305)
                                     << 0xcU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02306)
                                     << 0xcU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
#else
                                     >> 0xcU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02307
                                                 < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02308)
                                                 > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02309)
                                                 == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02310)
                                                 >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                 <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02311
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_12));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02312)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_12));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_12));
#endif
    RVPLIC__DOT___zz_27 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02313
                                     >> 0xbU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02314)
                                     << 0xbU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02315)
                                     >> 0xbU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02316)
                                     << 0xbU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02317)
                                     << 0xbU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
#else
                                     >> 0xbU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02318
                                                 < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02319)
                                                 > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02320)
                                                 == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02321)
                                                 >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                 <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02322
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_11));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02323)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_11));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_11));
#endif
    RVPLIC__DOT___zz_25 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02324
                                     >> 0xaU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02325)
                                     << 0xaU) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02326)
                                     >> 0xaU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02327)
                                     << 0xaU) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02328)
                                     << 0xaU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
#else
                                     >> 0xaU) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02329
                                                 < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02330)
                                                 > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02331)
                                                 == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02332)
                                                 >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                                 <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02333
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_10));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02334)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_10));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_10));
#endif
    RVPLIC__DOT___zz_23 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02335
                                     >> 9U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02336)
                                     << 9U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02337)
                                     >> 9U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02338)
                                     << 9U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02339)
                                     << 9U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
#else
                                     >> 9U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02340
                                               < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02341)
                                               > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02342)
                                               == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02343)
                                               >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                               <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02344
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_9));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02345)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_9));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_9));
#endif
    RVPLIC__DOT___zz_21 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02346
                                     >> 8U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02347)
                                     << 8U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02348)
                                     >> 8U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02349)
                                     << 8U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02350)
                                     << 8U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
#else
                                     >> 8U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02351
                                               < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02352)
                                               > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02353)
                                               == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02354)
                                               >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                               <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02355
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_8));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02356)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_8));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_8));
#endif
    RVPLIC__DOT___zz_19 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02357
                                     >> 7U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02358)
                                     << 7U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02359)
                                     >> 7U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02360)
                                     << 7U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02361)
                                     << 7U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
#else
                                     >> 7U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02362
                                               < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02363)
                                               > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02364)
                                               == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02365)
                                               >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                               <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02366
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_7));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02367)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_7));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_7));
#endif
    RVPLIC__DOT___zz_17 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02368
                                     >> 6U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02369)
                                     << 6U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02370)
                                     >> 6U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02371)
                                     << 6U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02372)
                                     << 6U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
#else
                                     >> 6U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02373
                                               < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02374)
                                               > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02375)
                                               == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02376)
                                               >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                               <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02377
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_6));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02378)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_6));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_6));
#endif
    RVPLIC__DOT___zz_15 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02379
                                     >> 5U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02380)
                                     << 5U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02381)
                                     >> 5U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02382)
                                     << 5U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02383)
                                     << 5U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
#else
                                     >> 5U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02384
                                               < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02385)
                                               > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02386)
                                               == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02387)
                                               >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                               <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02388
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_5));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02389)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_5));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_5));
#endif
    RVPLIC__DOT___zz_13 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02390
                                     >> 4U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02391)
                                     << 4U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02392)
                                     >> 4U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02393)
                                     << 4U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02394)
                                     << 4U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
#else
                                     >> 4U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02395
                                               < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02396)
                                               > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02397)
                                               == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02398)
                                               >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                               <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02399
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_4));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02400)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_4));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_4));
#endif
    RVPLIC__DOT___zz_11 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02401
                                     >> 3U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02402)
                                     << 3U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02403)
                                     >> 3U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02404)
                                     << 3U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02405)
                                     << 3U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
#else
                                     >> 3U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02406
                                               < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02407)
                                               > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02408)
                                               == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02409)
                                               >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                               <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02410
                           | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_3));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02411)
                           ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_3));
#else
                           & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_3));
#endif
    RVPLIC__DOT___zz_9 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02412
                                    >> 2U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02413)
                                    << 2U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02414)
                                    >> 2U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02415)
                                    << 2U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02416)
                                    << 2U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
#else
                                    >> 2U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02417
                                              < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02418)
                                              > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02419)
                                              == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02420)
                                              >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                              <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02421
                          | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_2));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02422)
                          ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_2));
#else
                          & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_2));
#endif
    RVPLIC__DOT___zz_5 = ((IData)((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02423
                                   | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02424)
                                   ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0) 
#else
                                   & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02425
                                      < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02426)
                                      > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02427)
                                      == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02428)
                                      >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                      <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02429
                          | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_0));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02430)
                          ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_0));
#else
                          & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_0));
#endif
    RVPLIC__DOT___zz_7 = ((IData)(((vlSelf->RVPLIC__DOT__interrupts_enabled 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02431
                                    >> 1U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02432)
                                    << 1U) | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02433)
                                    >> 1U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02434)
                                    << 1U) ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02435)
                                    << 1U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
#else
                                    >> 1U) & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02436
                                              < (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02437)
                                              > (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02438)
                                              == (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02439)
                                              >= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#else
                                              <= (IData)(vlSelf->RVPLIC__DOT__interrupt_threshold)))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02440
                          | (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_1));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02441)
                          ^ (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_1));
#else
                          & (IData)(vlSelf->RVPLIC__DOT__pending_interrupts_1));
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02442
    RVPLIC__DOT___zz_109 = (1U | ((~ (IData)(RVPLIC__DOT___zz_7)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02443)
    RVPLIC__DOT___zz_109 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_7)) 
#else
    RVPLIC__DOT___zz_109 = (1U & ((~ (IData)(RVPLIC__DOT___zz_7)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02444
                                  & ((IData)(RVPLIC__DOT___zz_5) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02445)
                                  ^ ((IData)(RVPLIC__DOT___zz_5) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_5) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02446
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02447)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02448
                                        < (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02449)
                                        > (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02450)
                                        == (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02451)
                                        >= (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0)))));
#else
                                        <= (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0)))));
#endif
    if (RVPLIC__DOT___zz_109) {
        RVPLIC__DOT___zz_110 = vlSelf->RVPLIC__DOT__interrupt_priorities_0;
        RVPLIC__DOT___zz_111 = RVPLIC__DOT___zz_5;
    } else {
        RVPLIC__DOT___zz_110 = vlSelf->RVPLIC__DOT__interrupt_priorities_1;
        RVPLIC__DOT___zz_111 = RVPLIC__DOT___zz_7;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02452
    RVPLIC__DOT___zz_112 = (1U | ((~ (IData)(RVPLIC__DOT___zz_9)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02453)
    RVPLIC__DOT___zz_112 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_9)) 
#else
    RVPLIC__DOT___zz_112 = (1U & ((~ (IData)(RVPLIC__DOT___zz_9)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02454
                                  & ((IData)(RVPLIC__DOT___zz_111) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02455)
                                  ^ ((IData)(RVPLIC__DOT___zz_111) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_111) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02456
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02457)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02458
                                        < (IData)(RVPLIC__DOT___zz_110)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02459)
                                        > (IData)(RVPLIC__DOT___zz_110)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02460)
                                        == (IData)(RVPLIC__DOT___zz_110)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02461)
                                        >= (IData)(RVPLIC__DOT___zz_110)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_110)))));
#endif
    if (RVPLIC__DOT___zz_112) {
        RVPLIC__DOT___zz_113 = RVPLIC__DOT___zz_110;
        RVPLIC__DOT___zz_114 = RVPLIC__DOT___zz_111;
    } else {
        RVPLIC__DOT___zz_113 = vlSelf->RVPLIC__DOT__interrupt_priorities_2;
        RVPLIC__DOT___zz_114 = RVPLIC__DOT___zz_9;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02462
    RVPLIC__DOT___zz_115 = (1U | ((~ (IData)(RVPLIC__DOT___zz_11)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02463)
    RVPLIC__DOT___zz_115 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_11)) 
#else
    RVPLIC__DOT___zz_115 = (1U & ((~ (IData)(RVPLIC__DOT___zz_11)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02464
                                  & ((IData)(RVPLIC__DOT___zz_114) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02465)
                                  ^ ((IData)(RVPLIC__DOT___zz_114) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_114) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02466
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02467)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02468
                                        < (IData)(RVPLIC__DOT___zz_113)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02469)
                                        > (IData)(RVPLIC__DOT___zz_113)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02470)
                                        == (IData)(RVPLIC__DOT___zz_113)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02471)
                                        >= (IData)(RVPLIC__DOT___zz_113)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_113)))));
#endif
    if (RVPLIC__DOT___zz_115) {
        RVPLIC__DOT___zz_116 = RVPLIC__DOT___zz_113;
        RVPLIC__DOT___zz_117 = RVPLIC__DOT___zz_114;
    } else {
        RVPLIC__DOT___zz_116 = vlSelf->RVPLIC__DOT__interrupt_priorities_3;
        RVPLIC__DOT___zz_117 = RVPLIC__DOT___zz_11;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02472
    RVPLIC__DOT___zz_118 = (1U | ((~ (IData)(RVPLIC__DOT___zz_13)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02473)
    RVPLIC__DOT___zz_118 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_13)) 
#else
    RVPLIC__DOT___zz_118 = (1U & ((~ (IData)(RVPLIC__DOT___zz_13)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02474
                                  & ((IData)(RVPLIC__DOT___zz_117) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02475)
                                  ^ ((IData)(RVPLIC__DOT___zz_117) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_117) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02476
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02477)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02478
                                        < (IData)(RVPLIC__DOT___zz_116)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02479)
                                        > (IData)(RVPLIC__DOT___zz_116)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02480)
                                        == (IData)(RVPLIC__DOT___zz_116)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02481)
                                        >= (IData)(RVPLIC__DOT___zz_116)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_116)))));
#endif
    if (RVPLIC__DOT___zz_118) {
        RVPLIC__DOT___zz_119 = RVPLIC__DOT___zz_116;
        RVPLIC__DOT___zz_120 = RVPLIC__DOT___zz_117;
    } else {
        RVPLIC__DOT___zz_119 = vlSelf->RVPLIC__DOT__interrupt_priorities_4;
        RVPLIC__DOT___zz_120 = RVPLIC__DOT___zz_13;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02482
    RVPLIC__DOT___zz_121 = (1U | ((~ (IData)(RVPLIC__DOT___zz_15)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02483)
    RVPLIC__DOT___zz_121 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_15)) 
#else
    RVPLIC__DOT___zz_121 = (1U & ((~ (IData)(RVPLIC__DOT___zz_15)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02484
                                  & ((IData)(RVPLIC__DOT___zz_120) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02485)
                                  ^ ((IData)(RVPLIC__DOT___zz_120) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_120) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02486
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02487)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02488
                                        < (IData)(RVPLIC__DOT___zz_119)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02489)
                                        > (IData)(RVPLIC__DOT___zz_119)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02490)
                                        == (IData)(RVPLIC__DOT___zz_119)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02491)
                                        >= (IData)(RVPLIC__DOT___zz_119)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_119)))));
#endif
    if (RVPLIC__DOT___zz_121) {
        RVPLIC__DOT___zz_122 = RVPLIC__DOT___zz_119;
        RVPLIC__DOT___zz_123 = RVPLIC__DOT___zz_120;
    } else {
        RVPLIC__DOT___zz_122 = vlSelf->RVPLIC__DOT__interrupt_priorities_5;
        RVPLIC__DOT___zz_123 = RVPLIC__DOT___zz_15;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02492
    RVPLIC__DOT___zz_124 = (1U | ((~ (IData)(RVPLIC__DOT___zz_17)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02493)
    RVPLIC__DOT___zz_124 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_17)) 
#else
    RVPLIC__DOT___zz_124 = (1U & ((~ (IData)(RVPLIC__DOT___zz_17)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02494
                                  & ((IData)(RVPLIC__DOT___zz_123) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02495)
                                  ^ ((IData)(RVPLIC__DOT___zz_123) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_123) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02496
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02497)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02498
                                        < (IData)(RVPLIC__DOT___zz_122)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02499)
                                        > (IData)(RVPLIC__DOT___zz_122)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02500)
                                        == (IData)(RVPLIC__DOT___zz_122)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02501)
                                        >= (IData)(RVPLIC__DOT___zz_122)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_122)))));
#endif
    if (RVPLIC__DOT___zz_124) {
        RVPLIC__DOT___zz_125 = RVPLIC__DOT___zz_122;
        RVPLIC__DOT___zz_126 = RVPLIC__DOT___zz_123;
    } else {
        RVPLIC__DOT___zz_125 = vlSelf->RVPLIC__DOT__interrupt_priorities_6;
        RVPLIC__DOT___zz_126 = RVPLIC__DOT___zz_17;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02502
    RVPLIC__DOT___zz_127 = (1U | ((~ (IData)(RVPLIC__DOT___zz_19)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02503)
    RVPLIC__DOT___zz_127 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_19)) 
#else
    RVPLIC__DOT___zz_127 = (1U & ((~ (IData)(RVPLIC__DOT___zz_19)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02504
                                  & ((IData)(RVPLIC__DOT___zz_126) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02505)
                                  ^ ((IData)(RVPLIC__DOT___zz_126) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_126) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02506
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02507)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02508
                                        < (IData)(RVPLIC__DOT___zz_125)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02509)
                                        > (IData)(RVPLIC__DOT___zz_125)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02510)
                                        == (IData)(RVPLIC__DOT___zz_125)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02511)
                                        >= (IData)(RVPLIC__DOT___zz_125)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_125)))));
#endif
    if (RVPLIC__DOT___zz_127) {
        RVPLIC__DOT___zz_128 = RVPLIC__DOT___zz_125;
        RVPLIC__DOT___zz_129 = RVPLIC__DOT___zz_126;
    } else {
        RVPLIC__DOT___zz_128 = vlSelf->RVPLIC__DOT__interrupt_priorities_7;
        RVPLIC__DOT___zz_129 = RVPLIC__DOT___zz_19;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02512
    RVPLIC__DOT___zz_130 = (1U | ((~ (IData)(RVPLIC__DOT___zz_21)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02513)
    RVPLIC__DOT___zz_130 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_21)) 
#else
    RVPLIC__DOT___zz_130 = (1U & ((~ (IData)(RVPLIC__DOT___zz_21)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02514
                                  & ((IData)(RVPLIC__DOT___zz_129) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02515)
                                  ^ ((IData)(RVPLIC__DOT___zz_129) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_129) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02516
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02517)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02518
                                        < (IData)(RVPLIC__DOT___zz_128)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02519)
                                        > (IData)(RVPLIC__DOT___zz_128)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02520)
                                        == (IData)(RVPLIC__DOT___zz_128)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02521)
                                        >= (IData)(RVPLIC__DOT___zz_128)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_128)))));
#endif
    if (RVPLIC__DOT___zz_130) {
        RVPLIC__DOT___zz_131 = RVPLIC__DOT___zz_128;
        RVPLIC__DOT___zz_132 = RVPLIC__DOT___zz_129;
    } else {
        RVPLIC__DOT___zz_131 = vlSelf->RVPLIC__DOT__interrupt_priorities_8;
        RVPLIC__DOT___zz_132 = RVPLIC__DOT___zz_21;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02522
    RVPLIC__DOT___zz_133 = (1U | ((~ (IData)(RVPLIC__DOT___zz_23)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02523)
    RVPLIC__DOT___zz_133 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_23)) 
#else
    RVPLIC__DOT___zz_133 = (1U & ((~ (IData)(RVPLIC__DOT___zz_23)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02524
                                  & ((IData)(RVPLIC__DOT___zz_132) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02525)
                                  ^ ((IData)(RVPLIC__DOT___zz_132) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_132) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02526
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02527)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02528
                                        < (IData)(RVPLIC__DOT___zz_131)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02529)
                                        > (IData)(RVPLIC__DOT___zz_131)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02530)
                                        == (IData)(RVPLIC__DOT___zz_131)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02531)
                                        >= (IData)(RVPLIC__DOT___zz_131)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_131)))));
#endif
    if (RVPLIC__DOT___zz_133) {
        RVPLIC__DOT___zz_134 = RVPLIC__DOT___zz_131;
        RVPLIC__DOT___zz_135 = RVPLIC__DOT___zz_132;
    } else {
        RVPLIC__DOT___zz_134 = vlSelf->RVPLIC__DOT__interrupt_priorities_9;
        RVPLIC__DOT___zz_135 = RVPLIC__DOT___zz_23;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02532
    RVPLIC__DOT___zz_136 = (1U | ((~ (IData)(RVPLIC__DOT___zz_25)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02533)
    RVPLIC__DOT___zz_136 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_25)) 
#else
    RVPLIC__DOT___zz_136 = (1U & ((~ (IData)(RVPLIC__DOT___zz_25)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02534
                                  & ((IData)(RVPLIC__DOT___zz_135) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02535)
                                  ^ ((IData)(RVPLIC__DOT___zz_135) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_135) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02536
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02537)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02538
                                        < (IData)(RVPLIC__DOT___zz_134)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02539)
                                        > (IData)(RVPLIC__DOT___zz_134)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02540)
                                        == (IData)(RVPLIC__DOT___zz_134)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02541)
                                        >= (IData)(RVPLIC__DOT___zz_134)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_134)))));
#endif
    if (RVPLIC__DOT___zz_136) {
        RVPLIC__DOT___zz_137 = RVPLIC__DOT___zz_134;
        RVPLIC__DOT___zz_138 = RVPLIC__DOT___zz_135;
    } else {
        RVPLIC__DOT___zz_137 = vlSelf->RVPLIC__DOT__interrupt_priorities_10;
        RVPLIC__DOT___zz_138 = RVPLIC__DOT___zz_25;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02542
    RVPLIC__DOT___zz_139 = (1U | ((~ (IData)(RVPLIC__DOT___zz_27)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02543)
    RVPLIC__DOT___zz_139 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_27)) 
#else
    RVPLIC__DOT___zz_139 = (1U & ((~ (IData)(RVPLIC__DOT___zz_27)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02544
                                  & ((IData)(RVPLIC__DOT___zz_138) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02545)
                                  ^ ((IData)(RVPLIC__DOT___zz_138) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_138) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02546
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02547)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02548
                                        < (IData)(RVPLIC__DOT___zz_137)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02549)
                                        > (IData)(RVPLIC__DOT___zz_137)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02550)
                                        == (IData)(RVPLIC__DOT___zz_137)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02551)
                                        >= (IData)(RVPLIC__DOT___zz_137)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_137)))));
#endif
    if (RVPLIC__DOT___zz_139) {
        RVPLIC__DOT___zz_140 = RVPLIC__DOT___zz_137;
        RVPLIC__DOT___zz_141 = RVPLIC__DOT___zz_138;
    } else {
        RVPLIC__DOT___zz_140 = vlSelf->RVPLIC__DOT__interrupt_priorities_11;
        RVPLIC__DOT___zz_141 = RVPLIC__DOT___zz_27;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02552
    RVPLIC__DOT___zz_142 = (1U | ((~ (IData)(RVPLIC__DOT___zz_29)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02553)
    RVPLIC__DOT___zz_142 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_29)) 
#else
    RVPLIC__DOT___zz_142 = (1U & ((~ (IData)(RVPLIC__DOT___zz_29)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02554
                                  & ((IData)(RVPLIC__DOT___zz_141) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02555)
                                  ^ ((IData)(RVPLIC__DOT___zz_141) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_141) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02556
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02557)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02558
                                        < (IData)(RVPLIC__DOT___zz_140)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02559)
                                        > (IData)(RVPLIC__DOT___zz_140)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02560)
                                        == (IData)(RVPLIC__DOT___zz_140)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02561)
                                        >= (IData)(RVPLIC__DOT___zz_140)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_140)))));
#endif
    if (RVPLIC__DOT___zz_142) {
        RVPLIC__DOT___zz_143 = RVPLIC__DOT___zz_140;
        RVPLIC__DOT___zz_144 = RVPLIC__DOT___zz_141;
    } else {
        RVPLIC__DOT___zz_143 = vlSelf->RVPLIC__DOT__interrupt_priorities_12;
        RVPLIC__DOT___zz_144 = RVPLIC__DOT___zz_29;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02562
    RVPLIC__DOT___zz_145 = (1U | ((~ (IData)(RVPLIC__DOT___zz_31)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02563)
    RVPLIC__DOT___zz_145 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_31)) 
#else
    RVPLIC__DOT___zz_145 = (1U & ((~ (IData)(RVPLIC__DOT___zz_31)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02564
                                  & ((IData)(RVPLIC__DOT___zz_144) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02565)
                                  ^ ((IData)(RVPLIC__DOT___zz_144) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_144) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02566
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02567)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02568
                                        < (IData)(RVPLIC__DOT___zz_143)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02569)
                                        > (IData)(RVPLIC__DOT___zz_143)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02570)
                                        == (IData)(RVPLIC__DOT___zz_143)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02571)
                                        >= (IData)(RVPLIC__DOT___zz_143)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_143)))));
#endif
    if (RVPLIC__DOT___zz_145) {
        RVPLIC__DOT___zz_146 = RVPLIC__DOT___zz_143;
        RVPLIC__DOT___zz_147 = RVPLIC__DOT___zz_144;
    } else {
        RVPLIC__DOT___zz_146 = vlSelf->RVPLIC__DOT__interrupt_priorities_13;
        RVPLIC__DOT___zz_147 = RVPLIC__DOT___zz_31;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02572
    RVPLIC__DOT___zz_148 = (1U | ((~ (IData)(RVPLIC__DOT___zz_33)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02573)
    RVPLIC__DOT___zz_148 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_33)) 
#else
    RVPLIC__DOT___zz_148 = (1U & ((~ (IData)(RVPLIC__DOT___zz_33)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02574
                                  & ((IData)(RVPLIC__DOT___zz_147) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02575)
                                  ^ ((IData)(RVPLIC__DOT___zz_147) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_147) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02576
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02577)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02578
                                        < (IData)(RVPLIC__DOT___zz_146)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02579)
                                        > (IData)(RVPLIC__DOT___zz_146)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02580)
                                        == (IData)(RVPLIC__DOT___zz_146)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02581)
                                        >= (IData)(RVPLIC__DOT___zz_146)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_146)))));
#endif
    if (RVPLIC__DOT___zz_148) {
        RVPLIC__DOT___zz_149 = RVPLIC__DOT___zz_146;
        RVPLIC__DOT___zz_150 = RVPLIC__DOT___zz_147;
    } else {
        RVPLIC__DOT___zz_149 = vlSelf->RVPLIC__DOT__interrupt_priorities_14;
        RVPLIC__DOT___zz_150 = RVPLIC__DOT___zz_33;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02582
    RVPLIC__DOT___zz_151 = (1U | ((~ (IData)(RVPLIC__DOT___zz_35)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02583)
    RVPLIC__DOT___zz_151 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_35)) 
#else
    RVPLIC__DOT___zz_151 = (1U & ((~ (IData)(RVPLIC__DOT___zz_35)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02584
                                  & ((IData)(RVPLIC__DOT___zz_150) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02585)
                                  ^ ((IData)(RVPLIC__DOT___zz_150) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_150) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02586
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02587)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02588
                                        < (IData)(RVPLIC__DOT___zz_149)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02589)
                                        > (IData)(RVPLIC__DOT___zz_149)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02590)
                                        == (IData)(RVPLIC__DOT___zz_149)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02591)
                                        >= (IData)(RVPLIC__DOT___zz_149)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_149)))));
#endif
    if (RVPLIC__DOT___zz_151) {
        RVPLIC__DOT___zz_152 = RVPLIC__DOT___zz_149;
        RVPLIC__DOT___zz_153 = RVPLIC__DOT___zz_150;
    } else {
        RVPLIC__DOT___zz_152 = vlSelf->RVPLIC__DOT__interrupt_priorities_15;
        RVPLIC__DOT___zz_153 = RVPLIC__DOT___zz_35;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02592
    RVPLIC__DOT___zz_154 = (1U | ((~ (IData)(RVPLIC__DOT___zz_37)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02593)
    RVPLIC__DOT___zz_154 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_37)) 
#else
    RVPLIC__DOT___zz_154 = (1U & ((~ (IData)(RVPLIC__DOT___zz_37)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02594
                                  & ((IData)(RVPLIC__DOT___zz_153) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02595)
                                  ^ ((IData)(RVPLIC__DOT___zz_153) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_153) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02596
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02597)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02598
                                        < (IData)(RVPLIC__DOT___zz_152)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02599)
                                        > (IData)(RVPLIC__DOT___zz_152)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02600)
                                        == (IData)(RVPLIC__DOT___zz_152)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02601)
                                        >= (IData)(RVPLIC__DOT___zz_152)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_152)))));
#endif
    if (RVPLIC__DOT___zz_154) {
        RVPLIC__DOT___zz_155 = RVPLIC__DOT___zz_152;
        RVPLIC__DOT___zz_156 = RVPLIC__DOT___zz_153;
    } else {
        RVPLIC__DOT___zz_155 = vlSelf->RVPLIC__DOT__interrupt_priorities_16;
        RVPLIC__DOT___zz_156 = RVPLIC__DOT___zz_37;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02602
    RVPLIC__DOT___zz_157 = (1U | ((~ (IData)(RVPLIC__DOT___zz_39)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02603)
    RVPLIC__DOT___zz_157 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_39)) 
#else
    RVPLIC__DOT___zz_157 = (1U & ((~ (IData)(RVPLIC__DOT___zz_39)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02604
                                  & ((IData)(RVPLIC__DOT___zz_156) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02605)
                                  ^ ((IData)(RVPLIC__DOT___zz_156) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_156) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02606
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02607)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02608
                                        < (IData)(RVPLIC__DOT___zz_155)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02609)
                                        > (IData)(RVPLIC__DOT___zz_155)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02610)
                                        == (IData)(RVPLIC__DOT___zz_155)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02611)
                                        >= (IData)(RVPLIC__DOT___zz_155)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_155)))));
#endif
    if (RVPLIC__DOT___zz_157) {
        RVPLIC__DOT___zz_158 = RVPLIC__DOT___zz_155;
        RVPLIC__DOT___zz_159 = RVPLIC__DOT___zz_156;
    } else {
        RVPLIC__DOT___zz_158 = vlSelf->RVPLIC__DOT__interrupt_priorities_17;
        RVPLIC__DOT___zz_159 = RVPLIC__DOT___zz_39;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02612
    RVPLIC__DOT___zz_160 = (1U | ((~ (IData)(RVPLIC__DOT___zz_41)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02613)
    RVPLIC__DOT___zz_160 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_41)) 
#else
    RVPLIC__DOT___zz_160 = (1U & ((~ (IData)(RVPLIC__DOT___zz_41)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02614
                                  & ((IData)(RVPLIC__DOT___zz_159) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02615)
                                  ^ ((IData)(RVPLIC__DOT___zz_159) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_159) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02616
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02617)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02618
                                        < (IData)(RVPLIC__DOT___zz_158)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02619)
                                        > (IData)(RVPLIC__DOT___zz_158)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02620)
                                        == (IData)(RVPLIC__DOT___zz_158)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02621)
                                        >= (IData)(RVPLIC__DOT___zz_158)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_158)))));
#endif
    if (RVPLIC__DOT___zz_160) {
        RVPLIC__DOT___zz_161 = RVPLIC__DOT___zz_158;
        RVPLIC__DOT___zz_162 = RVPLIC__DOT___zz_159;
    } else {
        RVPLIC__DOT___zz_161 = vlSelf->RVPLIC__DOT__interrupt_priorities_18;
        RVPLIC__DOT___zz_162 = RVPLIC__DOT___zz_41;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02622
    RVPLIC__DOT___zz_163 = (1U | ((~ (IData)(RVPLIC__DOT___zz_43)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02623)
    RVPLIC__DOT___zz_163 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_43)) 
#else
    RVPLIC__DOT___zz_163 = (1U & ((~ (IData)(RVPLIC__DOT___zz_43)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02624
                                  & ((IData)(RVPLIC__DOT___zz_162) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02625)
                                  ^ ((IData)(RVPLIC__DOT___zz_162) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_162) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02626
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02627)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02628
                                        < (IData)(RVPLIC__DOT___zz_161)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02629)
                                        > (IData)(RVPLIC__DOT___zz_161)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02630)
                                        == (IData)(RVPLIC__DOT___zz_161)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02631)
                                        >= (IData)(RVPLIC__DOT___zz_161)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_161)))));
#endif
    if (RVPLIC__DOT___zz_163) {
        RVPLIC__DOT___zz_164 = RVPLIC__DOT___zz_161;
        RVPLIC__DOT___zz_165 = RVPLIC__DOT___zz_162;
    } else {
        RVPLIC__DOT___zz_164 = vlSelf->RVPLIC__DOT__interrupt_priorities_19;
        RVPLIC__DOT___zz_165 = RVPLIC__DOT___zz_43;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02632
    RVPLIC__DOT___zz_166 = (1U | ((~ (IData)(RVPLIC__DOT___zz_45)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02633)
    RVPLIC__DOT___zz_166 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_45)) 
#else
    RVPLIC__DOT___zz_166 = (1U & ((~ (IData)(RVPLIC__DOT___zz_45)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02634
                                  & ((IData)(RVPLIC__DOT___zz_165) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02635)
                                  ^ ((IData)(RVPLIC__DOT___zz_165) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_165) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02636
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02637)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02638
                                        < (IData)(RVPLIC__DOT___zz_164)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02639)
                                        > (IData)(RVPLIC__DOT___zz_164)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02640)
                                        == (IData)(RVPLIC__DOT___zz_164)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02641)
                                        >= (IData)(RVPLIC__DOT___zz_164)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_164)))));
#endif
    if (RVPLIC__DOT___zz_166) {
        RVPLIC__DOT___zz_167 = RVPLIC__DOT___zz_164;
        RVPLIC__DOT___zz_168 = RVPLIC__DOT___zz_165;
    } else {
        RVPLIC__DOT___zz_167 = vlSelf->RVPLIC__DOT__interrupt_priorities_20;
        RVPLIC__DOT___zz_168 = RVPLIC__DOT___zz_45;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02642
    RVPLIC__DOT___zz_169 = (1U | ((~ (IData)(RVPLIC__DOT___zz_47)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02643)
    RVPLIC__DOT___zz_169 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_47)) 
#else
    RVPLIC__DOT___zz_169 = (1U & ((~ (IData)(RVPLIC__DOT___zz_47)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02644
                                  & ((IData)(RVPLIC__DOT___zz_168) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02645)
                                  ^ ((IData)(RVPLIC__DOT___zz_168) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_168) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02646
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02647)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02648
                                        < (IData)(RVPLIC__DOT___zz_167)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02649)
                                        > (IData)(RVPLIC__DOT___zz_167)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02650)
                                        == (IData)(RVPLIC__DOT___zz_167)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02651)
                                        >= (IData)(RVPLIC__DOT___zz_167)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_167)))));
#endif
    if (RVPLIC__DOT___zz_169) {
        RVPLIC__DOT___zz_170 = RVPLIC__DOT___zz_167;
        RVPLIC__DOT___zz_171 = RVPLIC__DOT___zz_168;
    } else {
        RVPLIC__DOT___zz_170 = vlSelf->RVPLIC__DOT__interrupt_priorities_21;
        RVPLIC__DOT___zz_171 = RVPLIC__DOT___zz_47;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02652
    RVPLIC__DOT___zz_172 = (1U | ((~ (IData)(RVPLIC__DOT___zz_49)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02653)
    RVPLIC__DOT___zz_172 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_49)) 
#else
    RVPLIC__DOT___zz_172 = (1U & ((~ (IData)(RVPLIC__DOT___zz_49)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02654
                                  & ((IData)(RVPLIC__DOT___zz_171) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02655)
                                  ^ ((IData)(RVPLIC__DOT___zz_171) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_171) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02656
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02657)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02658
                                        < (IData)(RVPLIC__DOT___zz_170)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02659)
                                        > (IData)(RVPLIC__DOT___zz_170)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02660)
                                        == (IData)(RVPLIC__DOT___zz_170)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02661)
                                        >= (IData)(RVPLIC__DOT___zz_170)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_170)))));
#endif
    if (RVPLIC__DOT___zz_172) {
        RVPLIC__DOT___zz_173 = RVPLIC__DOT___zz_170;
        RVPLIC__DOT___zz_174 = RVPLIC__DOT___zz_171;
    } else {
        RVPLIC__DOT___zz_173 = vlSelf->RVPLIC__DOT__interrupt_priorities_22;
        RVPLIC__DOT___zz_174 = RVPLIC__DOT___zz_49;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02662
    RVPLIC__DOT___zz_175 = (1U | ((~ (IData)(RVPLIC__DOT___zz_51)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02663)
    RVPLIC__DOT___zz_175 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_51)) 
#else
    RVPLIC__DOT___zz_175 = (1U & ((~ (IData)(RVPLIC__DOT___zz_51)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02664
                                  & ((IData)(RVPLIC__DOT___zz_174) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02665)
                                  ^ ((IData)(RVPLIC__DOT___zz_174) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_174) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02666
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02667)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02668
                                        < (IData)(RVPLIC__DOT___zz_173)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02669)
                                        > (IData)(RVPLIC__DOT___zz_173)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02670)
                                        == (IData)(RVPLIC__DOT___zz_173)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02671)
                                        >= (IData)(RVPLIC__DOT___zz_173)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_173)))));
#endif
    if (RVPLIC__DOT___zz_175) {
        RVPLIC__DOT___zz_176 = RVPLIC__DOT___zz_173;
        RVPLIC__DOT___zz_177 = RVPLIC__DOT___zz_174;
    } else {
        RVPLIC__DOT___zz_176 = vlSelf->RVPLIC__DOT__interrupt_priorities_23;
        RVPLIC__DOT___zz_177 = RVPLIC__DOT___zz_51;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02672
    RVPLIC__DOT___zz_178 = (1U | ((~ (IData)(RVPLIC__DOT___zz_53)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02673)
    RVPLIC__DOT___zz_178 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_53)) 
#else
    RVPLIC__DOT___zz_178 = (1U & ((~ (IData)(RVPLIC__DOT___zz_53)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02674
                                  & ((IData)(RVPLIC__DOT___zz_177) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02675)
                                  ^ ((IData)(RVPLIC__DOT___zz_177) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_177) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02676
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02677)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02678
                                        < (IData)(RVPLIC__DOT___zz_176)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02679)
                                        > (IData)(RVPLIC__DOT___zz_176)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02680)
                                        == (IData)(RVPLIC__DOT___zz_176)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02681)
                                        >= (IData)(RVPLIC__DOT___zz_176)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_176)))));
#endif
    if (RVPLIC__DOT___zz_178) {
        RVPLIC__DOT___zz_179 = RVPLIC__DOT___zz_176;
        RVPLIC__DOT___zz_180 = RVPLIC__DOT___zz_177;
    } else {
        RVPLIC__DOT___zz_179 = vlSelf->RVPLIC__DOT__interrupt_priorities_24;
        RVPLIC__DOT___zz_180 = RVPLIC__DOT___zz_53;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02682
    RVPLIC__DOT___zz_181 = (1U | ((~ (IData)(RVPLIC__DOT___zz_55)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02683)
    RVPLIC__DOT___zz_181 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_55)) 
#else
    RVPLIC__DOT___zz_181 = (1U & ((~ (IData)(RVPLIC__DOT___zz_55)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02684
                                  & ((IData)(RVPLIC__DOT___zz_180) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02685)
                                  ^ ((IData)(RVPLIC__DOT___zz_180) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_180) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02686
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02687)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02688
                                        < (IData)(RVPLIC__DOT___zz_179)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02689)
                                        > (IData)(RVPLIC__DOT___zz_179)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02690)
                                        == (IData)(RVPLIC__DOT___zz_179)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02691)
                                        >= (IData)(RVPLIC__DOT___zz_179)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_179)))));
#endif
    if (RVPLIC__DOT___zz_181) {
        RVPLIC__DOT___zz_182 = RVPLIC__DOT___zz_179;
        RVPLIC__DOT___zz_183 = RVPLIC__DOT___zz_180;
    } else {
        RVPLIC__DOT___zz_182 = vlSelf->RVPLIC__DOT__interrupt_priorities_25;
        RVPLIC__DOT___zz_183 = RVPLIC__DOT___zz_55;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02692
    RVPLIC__DOT___zz_184 = (1U | ((~ (IData)(RVPLIC__DOT___zz_57)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02693)
    RVPLIC__DOT___zz_184 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_57)) 
#else
    RVPLIC__DOT___zz_184 = (1U & ((~ (IData)(RVPLIC__DOT___zz_57)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02694
                                  & ((IData)(RVPLIC__DOT___zz_183) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02695)
                                  ^ ((IData)(RVPLIC__DOT___zz_183) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_183) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02696
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02697)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02698
                                        < (IData)(RVPLIC__DOT___zz_182)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02699)
                                        > (IData)(RVPLIC__DOT___zz_182)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02700)
                                        == (IData)(RVPLIC__DOT___zz_182)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02701)
                                        >= (IData)(RVPLIC__DOT___zz_182)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_182)))));
#endif
    if (RVPLIC__DOT___zz_184) {
        RVPLIC__DOT___zz_185 = RVPLIC__DOT___zz_182;
        RVPLIC__DOT___zz_186 = RVPLIC__DOT___zz_183;
    } else {
        RVPLIC__DOT___zz_185 = vlSelf->RVPLIC__DOT__interrupt_priorities_26;
        RVPLIC__DOT___zz_186 = RVPLIC__DOT___zz_57;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02702
    RVPLIC__DOT___zz_187 = (1U | ((~ (IData)(RVPLIC__DOT___zz_59)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02703)
    RVPLIC__DOT___zz_187 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_59)) 
#else
    RVPLIC__DOT___zz_187 = (1U & ((~ (IData)(RVPLIC__DOT___zz_59)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02704
                                  & ((IData)(RVPLIC__DOT___zz_186) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02705)
                                  ^ ((IData)(RVPLIC__DOT___zz_186) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_186) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02706
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02707)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02708
                                        < (IData)(RVPLIC__DOT___zz_185)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02709)
                                        > (IData)(RVPLIC__DOT___zz_185)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02710)
                                        == (IData)(RVPLIC__DOT___zz_185)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02711)
                                        >= (IData)(RVPLIC__DOT___zz_185)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_185)))));
#endif
    if (RVPLIC__DOT___zz_187) {
        RVPLIC__DOT___zz_188 = RVPLIC__DOT___zz_185;
        RVPLIC__DOT___zz_189 = RVPLIC__DOT___zz_186;
    } else {
        RVPLIC__DOT___zz_188 = vlSelf->RVPLIC__DOT__interrupt_priorities_27;
        RVPLIC__DOT___zz_189 = RVPLIC__DOT___zz_59;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02712
    RVPLIC__DOT___zz_190 = (1U | ((~ (IData)(RVPLIC__DOT___zz_61)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02713)
    RVPLIC__DOT___zz_190 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_61)) 
#else
    RVPLIC__DOT___zz_190 = (1U & ((~ (IData)(RVPLIC__DOT___zz_61)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02714
                                  & ((IData)(RVPLIC__DOT___zz_189) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02715)
                                  ^ ((IData)(RVPLIC__DOT___zz_189) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_189) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02716
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02717)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02718
                                        < (IData)(RVPLIC__DOT___zz_188)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02719)
                                        > (IData)(RVPLIC__DOT___zz_188)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02720)
                                        == (IData)(RVPLIC__DOT___zz_188)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02721)
                                        >= (IData)(RVPLIC__DOT___zz_188)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_188)))));
#endif
    if (RVPLIC__DOT___zz_190) {
        RVPLIC__DOT___zz_191 = RVPLIC__DOT___zz_188;
        RVPLIC__DOT___zz_192 = RVPLIC__DOT___zz_189;
    } else {
        RVPLIC__DOT___zz_191 = vlSelf->RVPLIC__DOT__interrupt_priorities_28;
        RVPLIC__DOT___zz_192 = RVPLIC__DOT___zz_61;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02722
    RVPLIC__DOT___zz_193 = (1U | ((~ (IData)(RVPLIC__DOT___zz_63)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02723)
    RVPLIC__DOT___zz_193 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_63)) 
#else
    RVPLIC__DOT___zz_193 = (1U & ((~ (IData)(RVPLIC__DOT___zz_63)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02724
                                  & ((IData)(RVPLIC__DOT___zz_192) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02725)
                                  ^ ((IData)(RVPLIC__DOT___zz_192) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_192) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02726
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02727)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02728
                                        < (IData)(RVPLIC__DOT___zz_191)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02729)
                                        > (IData)(RVPLIC__DOT___zz_191)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02730)
                                        == (IData)(RVPLIC__DOT___zz_191)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02731)
                                        >= (IData)(RVPLIC__DOT___zz_191)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_191)))));
#endif
    if (RVPLIC__DOT___zz_193) {
        RVPLIC__DOT___zz_194 = RVPLIC__DOT___zz_191;
        RVPLIC__DOT___zz_195 = RVPLIC__DOT___zz_192;
    } else {
        RVPLIC__DOT___zz_194 = vlSelf->RVPLIC__DOT__interrupt_priorities_29;
        RVPLIC__DOT___zz_195 = RVPLIC__DOT___zz_63;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02732
    RVPLIC__DOT___zz_196 = (1U | ((~ (IData)(RVPLIC__DOT___zz_65)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02733)
    RVPLIC__DOT___zz_196 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_65)) 
#else
    RVPLIC__DOT___zz_196 = (1U & ((~ (IData)(RVPLIC__DOT___zz_65)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02734
                                  & ((IData)(RVPLIC__DOT___zz_195) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02735)
                                  ^ ((IData)(RVPLIC__DOT___zz_195) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_195) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02736
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02737)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02738
                                        < (IData)(RVPLIC__DOT___zz_194)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02739)
                                        > (IData)(RVPLIC__DOT___zz_194)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02740)
                                        == (IData)(RVPLIC__DOT___zz_194)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02741)
                                        >= (IData)(RVPLIC__DOT___zz_194)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_194)))));
#endif
    if (RVPLIC__DOT___zz_196) {
        RVPLIC__DOT___zz_197 = RVPLIC__DOT___zz_194;
        RVPLIC__DOT___zz_198 = RVPLIC__DOT___zz_195;
    } else {
        RVPLIC__DOT___zz_197 = vlSelf->RVPLIC__DOT__interrupt_priorities_30;
        RVPLIC__DOT___zz_198 = RVPLIC__DOT___zz_65;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02742
    RVPLIC__DOT___zz_199 = (1U | ((~ (IData)(RVPLIC__DOT___zz_67)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02743)
    RVPLIC__DOT___zz_199 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_67)) 
#else
    RVPLIC__DOT___zz_199 = (1U & ((~ (IData)(RVPLIC__DOT___zz_67)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02744
                                  & ((IData)(RVPLIC__DOT___zz_198) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02745)
                                  ^ ((IData)(RVPLIC__DOT___zz_198) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_198) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02746
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02747)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02748
                                        < (IData)(RVPLIC__DOT___zz_197)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02749)
                                        > (IData)(RVPLIC__DOT___zz_197)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02750)
                                        == (IData)(RVPLIC__DOT___zz_197)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02751)
                                        >= (IData)(RVPLIC__DOT___zz_197)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_197)))));
#endif
    if (RVPLIC__DOT___zz_199) {
        RVPLIC__DOT___zz_200 = RVPLIC__DOT___zz_197;
        RVPLIC__DOT___zz_201 = RVPLIC__DOT___zz_198;
    } else {
        RVPLIC__DOT___zz_200 = vlSelf->RVPLIC__DOT__interrupt_priorities_31;
        RVPLIC__DOT___zz_201 = RVPLIC__DOT___zz_67;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02752
    RVPLIC__DOT___zz_202 = (1U | ((~ (IData)(RVPLIC__DOT___zz_69)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02753)
    RVPLIC__DOT___zz_202 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_69)) 
#else
    RVPLIC__DOT___zz_202 = (1U & ((~ (IData)(RVPLIC__DOT___zz_69)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02754
                                  & ((IData)(RVPLIC__DOT___zz_201) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02755)
                                  ^ ((IData)(RVPLIC__DOT___zz_201) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_201) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02756
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02757)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02758
                                        < (IData)(RVPLIC__DOT___zz_200)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02759)
                                        > (IData)(RVPLIC__DOT___zz_200)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02760)
                                        == (IData)(RVPLIC__DOT___zz_200)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02761)
                                        >= (IData)(RVPLIC__DOT___zz_200)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_200)))));
#endif
    if (RVPLIC__DOT___zz_202) {
        RVPLIC__DOT___zz_203 = RVPLIC__DOT___zz_200;
        RVPLIC__DOT___zz_204 = RVPLIC__DOT___zz_201;
    } else {
        RVPLIC__DOT___zz_203 = vlSelf->RVPLIC__DOT__interrupt_priorities_32;
        RVPLIC__DOT___zz_204 = RVPLIC__DOT___zz_69;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02762
    RVPLIC__DOT___zz_205 = (1U | ((~ (IData)(RVPLIC__DOT___zz_71)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02763)
    RVPLIC__DOT___zz_205 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_71)) 
#else
    RVPLIC__DOT___zz_205 = (1U & ((~ (IData)(RVPLIC__DOT___zz_71)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02764
                                  & ((IData)(RVPLIC__DOT___zz_204) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02765)
                                  ^ ((IData)(RVPLIC__DOT___zz_204) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_204) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02766
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02767)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02768
                                        < (IData)(RVPLIC__DOT___zz_203)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02769)
                                        > (IData)(RVPLIC__DOT___zz_203)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02770)
                                        == (IData)(RVPLIC__DOT___zz_203)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02771)
                                        >= (IData)(RVPLIC__DOT___zz_203)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_203)))));
#endif
    if (RVPLIC__DOT___zz_205) {
        RVPLIC__DOT___zz_206 = RVPLIC__DOT___zz_203;
        RVPLIC__DOT___zz_207 = RVPLIC__DOT___zz_204;
    } else {
        RVPLIC__DOT___zz_206 = vlSelf->RVPLIC__DOT__interrupt_priorities_33;
        RVPLIC__DOT___zz_207 = RVPLIC__DOT___zz_71;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02772
    RVPLIC__DOT___zz_208 = (1U | ((~ (IData)(RVPLIC__DOT___zz_73)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02773)
    RVPLIC__DOT___zz_208 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_73)) 
#else
    RVPLIC__DOT___zz_208 = (1U & ((~ (IData)(RVPLIC__DOT___zz_73)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02774
                                  & ((IData)(RVPLIC__DOT___zz_207) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02775)
                                  ^ ((IData)(RVPLIC__DOT___zz_207) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_207) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02776
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02777)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02778
                                        < (IData)(RVPLIC__DOT___zz_206)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02779)
                                        > (IData)(RVPLIC__DOT___zz_206)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02780)
                                        == (IData)(RVPLIC__DOT___zz_206)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02781)
                                        >= (IData)(RVPLIC__DOT___zz_206)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_206)))));
#endif
    if (RVPLIC__DOT___zz_208) {
        RVPLIC__DOT___zz_209 = RVPLIC__DOT___zz_206;
        RVPLIC__DOT___zz_210 = RVPLIC__DOT___zz_207;
    } else {
        RVPLIC__DOT___zz_209 = vlSelf->RVPLIC__DOT__interrupt_priorities_34;
        RVPLIC__DOT___zz_210 = RVPLIC__DOT___zz_73;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02782
    RVPLIC__DOT___zz_211 = (1U | ((~ (IData)(RVPLIC__DOT___zz_75)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02783)
    RVPLIC__DOT___zz_211 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_75)) 
#else
    RVPLIC__DOT___zz_211 = (1U & ((~ (IData)(RVPLIC__DOT___zz_75)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02784
                                  & ((IData)(RVPLIC__DOT___zz_210) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02785)
                                  ^ ((IData)(RVPLIC__DOT___zz_210) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_210) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02786
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02787)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02788
                                        < (IData)(RVPLIC__DOT___zz_209)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02789)
                                        > (IData)(RVPLIC__DOT___zz_209)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02790)
                                        == (IData)(RVPLIC__DOT___zz_209)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02791)
                                        >= (IData)(RVPLIC__DOT___zz_209)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_209)))));
#endif
    if (RVPLIC__DOT___zz_211) {
        RVPLIC__DOT___zz_212 = RVPLIC__DOT___zz_209;
        RVPLIC__DOT___zz_213 = RVPLIC__DOT___zz_210;
    } else {
        RVPLIC__DOT___zz_212 = vlSelf->RVPLIC__DOT__interrupt_priorities_35;
        RVPLIC__DOT___zz_213 = RVPLIC__DOT___zz_75;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02792
    RVPLIC__DOT___zz_214 = (1U | ((~ (IData)(RVPLIC__DOT___zz_77)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02793)
    RVPLIC__DOT___zz_214 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_77)) 
#else
    RVPLIC__DOT___zz_214 = (1U & ((~ (IData)(RVPLIC__DOT___zz_77)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02794
                                  & ((IData)(RVPLIC__DOT___zz_213) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02795)
                                  ^ ((IData)(RVPLIC__DOT___zz_213) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_213) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02796
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02797)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02798
                                        < (IData)(RVPLIC__DOT___zz_212)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02799)
                                        > (IData)(RVPLIC__DOT___zz_212)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02800)
                                        == (IData)(RVPLIC__DOT___zz_212)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02801)
                                        >= (IData)(RVPLIC__DOT___zz_212)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_212)))));
#endif
    if (RVPLIC__DOT___zz_214) {
        RVPLIC__DOT___zz_215 = RVPLIC__DOT___zz_212;
        RVPLIC__DOT___zz_216 = RVPLIC__DOT___zz_213;
    } else {
        RVPLIC__DOT___zz_215 = vlSelf->RVPLIC__DOT__interrupt_priorities_36;
        RVPLIC__DOT___zz_216 = RVPLIC__DOT___zz_77;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02802
    RVPLIC__DOT___zz_217 = (1U | ((~ (IData)(RVPLIC__DOT___zz_79)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02803)
    RVPLIC__DOT___zz_217 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_79)) 
#else
    RVPLIC__DOT___zz_217 = (1U & ((~ (IData)(RVPLIC__DOT___zz_79)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02804
                                  & ((IData)(RVPLIC__DOT___zz_216) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02805)
                                  ^ ((IData)(RVPLIC__DOT___zz_216) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_216) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02806
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02807)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02808
                                        < (IData)(RVPLIC__DOT___zz_215)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02809)
                                        > (IData)(RVPLIC__DOT___zz_215)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02810)
                                        == (IData)(RVPLIC__DOT___zz_215)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02811)
                                        >= (IData)(RVPLIC__DOT___zz_215)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_215)))));
#endif
    if (RVPLIC__DOT___zz_217) {
        RVPLIC__DOT___zz_218 = RVPLIC__DOT___zz_215;
        RVPLIC__DOT___zz_219 = RVPLIC__DOT___zz_216;
    } else {
        RVPLIC__DOT___zz_218 = vlSelf->RVPLIC__DOT__interrupt_priorities_37;
        RVPLIC__DOT___zz_219 = RVPLIC__DOT___zz_79;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02812
    RVPLIC__DOT___zz_220 = (1U | ((~ (IData)(RVPLIC__DOT___zz_81)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02813)
    RVPLIC__DOT___zz_220 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_81)) 
#else
    RVPLIC__DOT___zz_220 = (1U & ((~ (IData)(RVPLIC__DOT___zz_81)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02814
                                  & ((IData)(RVPLIC__DOT___zz_219) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02815)
                                  ^ ((IData)(RVPLIC__DOT___zz_219) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_219) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02816
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02817)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02818
                                        < (IData)(RVPLIC__DOT___zz_218)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02819)
                                        > (IData)(RVPLIC__DOT___zz_218)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02820)
                                        == (IData)(RVPLIC__DOT___zz_218)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02821)
                                        >= (IData)(RVPLIC__DOT___zz_218)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_218)))));
#endif
    if (RVPLIC__DOT___zz_220) {
        RVPLIC__DOT___zz_221 = RVPLIC__DOT___zz_218;
        RVPLIC__DOT___zz_222 = RVPLIC__DOT___zz_219;
    } else {
        RVPLIC__DOT___zz_221 = vlSelf->RVPLIC__DOT__interrupt_priorities_38;
        RVPLIC__DOT___zz_222 = RVPLIC__DOT___zz_81;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02822
    RVPLIC__DOT___zz_223 = (1U | ((~ (IData)(RVPLIC__DOT___zz_83)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02823)
    RVPLIC__DOT___zz_223 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_83)) 
#else
    RVPLIC__DOT___zz_223 = (1U & ((~ (IData)(RVPLIC__DOT___zz_83)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02824
                                  & ((IData)(RVPLIC__DOT___zz_222) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02825)
                                  ^ ((IData)(RVPLIC__DOT___zz_222) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_222) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02826
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02827)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02828
                                        < (IData)(RVPLIC__DOT___zz_221)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02829)
                                        > (IData)(RVPLIC__DOT___zz_221)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02830)
                                        == (IData)(RVPLIC__DOT___zz_221)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02831)
                                        >= (IData)(RVPLIC__DOT___zz_221)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_221)))));
#endif
    if (RVPLIC__DOT___zz_223) {
        RVPLIC__DOT___zz_224 = RVPLIC__DOT___zz_221;
        RVPLIC__DOT___zz_225 = RVPLIC__DOT___zz_222;
    } else {
        RVPLIC__DOT___zz_224 = vlSelf->RVPLIC__DOT__interrupt_priorities_39;
        RVPLIC__DOT___zz_225 = RVPLIC__DOT___zz_83;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02832
    RVPLIC__DOT___zz_226 = (1U | ((~ (IData)(RVPLIC__DOT___zz_85)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02833)
    RVPLIC__DOT___zz_226 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_85)) 
#else
    RVPLIC__DOT___zz_226 = (1U & ((~ (IData)(RVPLIC__DOT___zz_85)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02834
                                  & ((IData)(RVPLIC__DOT___zz_225) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02835)
                                  ^ ((IData)(RVPLIC__DOT___zz_225) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_225) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02836
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02837)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02838
                                        < (IData)(RVPLIC__DOT___zz_224)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02839)
                                        > (IData)(RVPLIC__DOT___zz_224)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02840)
                                        == (IData)(RVPLIC__DOT___zz_224)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02841)
                                        >= (IData)(RVPLIC__DOT___zz_224)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_224)))));
#endif
    if (RVPLIC__DOT___zz_226) {
        RVPLIC__DOT___zz_227 = RVPLIC__DOT___zz_224;
        RVPLIC__DOT___zz_228 = RVPLIC__DOT___zz_225;
    } else {
        RVPLIC__DOT___zz_227 = vlSelf->RVPLIC__DOT__interrupt_priorities_40;
        RVPLIC__DOT___zz_228 = RVPLIC__DOT___zz_85;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02842
    RVPLIC__DOT___zz_229 = (1U | ((~ (IData)(RVPLIC__DOT___zz_87)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02843)
    RVPLIC__DOT___zz_229 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_87)) 
#else
    RVPLIC__DOT___zz_229 = (1U & ((~ (IData)(RVPLIC__DOT___zz_87)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02844
                                  & ((IData)(RVPLIC__DOT___zz_228) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02845)
                                  ^ ((IData)(RVPLIC__DOT___zz_228) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_228) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02846
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02847)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02848
                                        < (IData)(RVPLIC__DOT___zz_227)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02849)
                                        > (IData)(RVPLIC__DOT___zz_227)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02850)
                                        == (IData)(RVPLIC__DOT___zz_227)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02851)
                                        >= (IData)(RVPLIC__DOT___zz_227)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_227)))));
#endif
    if (RVPLIC__DOT___zz_229) {
        RVPLIC__DOT___zz_230 = RVPLIC__DOT___zz_227;
        RVPLIC__DOT___zz_231 = RVPLIC__DOT___zz_228;
    } else {
        RVPLIC__DOT___zz_230 = vlSelf->RVPLIC__DOT__interrupt_priorities_41;
        RVPLIC__DOT___zz_231 = RVPLIC__DOT___zz_87;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02852
    RVPLIC__DOT___zz_232 = (1U | ((~ (IData)(RVPLIC__DOT___zz_89)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02853)
    RVPLIC__DOT___zz_232 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_89)) 
#else
    RVPLIC__DOT___zz_232 = (1U & ((~ (IData)(RVPLIC__DOT___zz_89)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02854
                                  & ((IData)(RVPLIC__DOT___zz_231) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02855)
                                  ^ ((IData)(RVPLIC__DOT___zz_231) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_231) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02856
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02857)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02858
                                        < (IData)(RVPLIC__DOT___zz_230)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02859)
                                        > (IData)(RVPLIC__DOT___zz_230)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02860)
                                        == (IData)(RVPLIC__DOT___zz_230)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02861)
                                        >= (IData)(RVPLIC__DOT___zz_230)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_230)))));
#endif
    if (RVPLIC__DOT___zz_232) {
        RVPLIC__DOT___zz_233 = RVPLIC__DOT___zz_230;
        RVPLIC__DOT___zz_234 = RVPLIC__DOT___zz_231;
    } else {
        RVPLIC__DOT___zz_233 = vlSelf->RVPLIC__DOT__interrupt_priorities_42;
        RVPLIC__DOT___zz_234 = RVPLIC__DOT___zz_89;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02862
    RVPLIC__DOT___zz_235 = (1U | ((~ (IData)(RVPLIC__DOT___zz_91)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02863)
    RVPLIC__DOT___zz_235 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_91)) 
#else
    RVPLIC__DOT___zz_235 = (1U & ((~ (IData)(RVPLIC__DOT___zz_91)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02864
                                  & ((IData)(RVPLIC__DOT___zz_234) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02865)
                                  ^ ((IData)(RVPLIC__DOT___zz_234) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_234) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02866
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02867)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02868
                                        < (IData)(RVPLIC__DOT___zz_233)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02869)
                                        > (IData)(RVPLIC__DOT___zz_233)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02870)
                                        == (IData)(RVPLIC__DOT___zz_233)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02871)
                                        >= (IData)(RVPLIC__DOT___zz_233)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_233)))));
#endif
    if (RVPLIC__DOT___zz_235) {
        RVPLIC__DOT___zz_236 = RVPLIC__DOT___zz_233;
        RVPLIC__DOT___zz_237 = RVPLIC__DOT___zz_234;
    } else {
        RVPLIC__DOT___zz_236 = vlSelf->RVPLIC__DOT__interrupt_priorities_43;
        RVPLIC__DOT___zz_237 = RVPLIC__DOT___zz_91;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02872
    RVPLIC__DOT___zz_238 = (1U | ((~ (IData)(RVPLIC__DOT___zz_93)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02873)
    RVPLIC__DOT___zz_238 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_93)) 
#else
    RVPLIC__DOT___zz_238 = (1U & ((~ (IData)(RVPLIC__DOT___zz_93)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02874
                                  & ((IData)(RVPLIC__DOT___zz_237) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02875)
                                  ^ ((IData)(RVPLIC__DOT___zz_237) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_237) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02876
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02877)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02878
                                        < (IData)(RVPLIC__DOT___zz_236)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02879)
                                        > (IData)(RVPLIC__DOT___zz_236)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02880)
                                        == (IData)(RVPLIC__DOT___zz_236)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02881)
                                        >= (IData)(RVPLIC__DOT___zz_236)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_236)))));
#endif
    if (RVPLIC__DOT___zz_238) {
        RVPLIC__DOT___zz_239 = RVPLIC__DOT___zz_236;
        RVPLIC__DOT___zz_240 = RVPLIC__DOT___zz_237;
    } else {
        RVPLIC__DOT___zz_239 = vlSelf->RVPLIC__DOT__interrupt_priorities_44;
        RVPLIC__DOT___zz_240 = RVPLIC__DOT___zz_93;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02882
    RVPLIC__DOT___zz_241 = (1U | ((~ (IData)(RVPLIC__DOT___zz_95)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02883)
    RVPLIC__DOT___zz_241 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_95)) 
#else
    RVPLIC__DOT___zz_241 = (1U & ((~ (IData)(RVPLIC__DOT___zz_95)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02884
                                  & ((IData)(RVPLIC__DOT___zz_240) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02885)
                                  ^ ((IData)(RVPLIC__DOT___zz_240) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_240) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02886
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02887)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02888
                                        < (IData)(RVPLIC__DOT___zz_239)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02889)
                                        > (IData)(RVPLIC__DOT___zz_239)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02890)
                                        == (IData)(RVPLIC__DOT___zz_239)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02891)
                                        >= (IData)(RVPLIC__DOT___zz_239)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_239)))));
#endif
    if (RVPLIC__DOT___zz_241) {
        RVPLIC__DOT___zz_242 = RVPLIC__DOT___zz_239;
        RVPLIC__DOT___zz_243 = RVPLIC__DOT___zz_240;
    } else {
        RVPLIC__DOT___zz_242 = vlSelf->RVPLIC__DOT__interrupt_priorities_45;
        RVPLIC__DOT___zz_243 = RVPLIC__DOT___zz_95;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02892
    RVPLIC__DOT___zz_244 = (1U | ((~ (IData)(RVPLIC__DOT___zz_97)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02893)
    RVPLIC__DOT___zz_244 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_97)) 
#else
    RVPLIC__DOT___zz_244 = (1U & ((~ (IData)(RVPLIC__DOT___zz_97)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02894
                                  & ((IData)(RVPLIC__DOT___zz_243) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02895)
                                  ^ ((IData)(RVPLIC__DOT___zz_243) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_243) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02896
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02897)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02898
                                        < (IData)(RVPLIC__DOT___zz_242)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02899)
                                        > (IData)(RVPLIC__DOT___zz_242)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02900)
                                        == (IData)(RVPLIC__DOT___zz_242)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02901)
                                        >= (IData)(RVPLIC__DOT___zz_242)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_242)))));
#endif
    if (RVPLIC__DOT___zz_244) {
        RVPLIC__DOT___zz_245 = RVPLIC__DOT___zz_242;
        RVPLIC__DOT___zz_246 = RVPLIC__DOT___zz_243;
    } else {
        RVPLIC__DOT___zz_245 = vlSelf->RVPLIC__DOT__interrupt_priorities_46;
        RVPLIC__DOT___zz_246 = RVPLIC__DOT___zz_97;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02902
    RVPLIC__DOT___zz_247 = (1U | ((~ (IData)(RVPLIC__DOT___zz_99)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02903)
    RVPLIC__DOT___zz_247 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_99)) 
#else
    RVPLIC__DOT___zz_247 = (1U & ((~ (IData)(RVPLIC__DOT___zz_99)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02904
                                  & ((IData)(RVPLIC__DOT___zz_246) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02905)
                                  ^ ((IData)(RVPLIC__DOT___zz_246) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_246) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02906
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02907)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02908
                                        < (IData)(RVPLIC__DOT___zz_245)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02909)
                                        > (IData)(RVPLIC__DOT___zz_245)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02910)
                                        == (IData)(RVPLIC__DOT___zz_245)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02911)
                                        >= (IData)(RVPLIC__DOT___zz_245)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_245)))));
#endif
    if (RVPLIC__DOT___zz_247) {
        RVPLIC__DOT___zz_248 = RVPLIC__DOT___zz_245;
        RVPLIC__DOT___zz_249 = RVPLIC__DOT___zz_246;
    } else {
        RVPLIC__DOT___zz_248 = vlSelf->RVPLIC__DOT__interrupt_priorities_47;
        RVPLIC__DOT___zz_249 = RVPLIC__DOT___zz_99;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02912
    RVPLIC__DOT___zz_250 = (1U | ((~ (IData)(RVPLIC__DOT___zz_101)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02913)
    RVPLIC__DOT___zz_250 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_101)) 
#else
    RVPLIC__DOT___zz_250 = (1U & ((~ (IData)(RVPLIC__DOT___zz_101)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02914
                                  & ((IData)(RVPLIC__DOT___zz_249) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02915)
                                  ^ ((IData)(RVPLIC__DOT___zz_249) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_249) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02916
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02917)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02918
                                        < (IData)(RVPLIC__DOT___zz_248)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02919)
                                        > (IData)(RVPLIC__DOT___zz_248)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02920)
                                        == (IData)(RVPLIC__DOT___zz_248)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02921)
                                        >= (IData)(RVPLIC__DOT___zz_248)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_248)))));
#endif
    if (RVPLIC__DOT___zz_250) {
        RVPLIC__DOT___zz_251 = RVPLIC__DOT___zz_248;
        RVPLIC__DOT___zz_252 = RVPLIC__DOT___zz_249;
    } else {
        RVPLIC__DOT___zz_251 = vlSelf->RVPLIC__DOT__interrupt_priorities_48;
        RVPLIC__DOT___zz_252 = RVPLIC__DOT___zz_101;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02922
    RVPLIC__DOT___zz_253 = (1U | ((~ (IData)(RVPLIC__DOT___zz_103)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02923)
    RVPLIC__DOT___zz_253 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_103)) 
#else
    RVPLIC__DOT___zz_253 = (1U & ((~ (IData)(RVPLIC__DOT___zz_103)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02924
                                  & ((IData)(RVPLIC__DOT___zz_252) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02925)
                                  ^ ((IData)(RVPLIC__DOT___zz_252) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_252) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02926
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02927)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02928
                                        < (IData)(RVPLIC__DOT___zz_251)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02929)
                                        > (IData)(RVPLIC__DOT___zz_251)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02930)
                                        == (IData)(RVPLIC__DOT___zz_251)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02931)
                                        >= (IData)(RVPLIC__DOT___zz_251)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_251)))));
#endif
    if (RVPLIC__DOT___zz_253) {
        RVPLIC__DOT___zz_254 = RVPLIC__DOT___zz_251;
        RVPLIC__DOT___zz_255 = RVPLIC__DOT___zz_252;
    } else {
        RVPLIC__DOT___zz_254 = vlSelf->RVPLIC__DOT__interrupt_priorities_49;
        RVPLIC__DOT___zz_255 = RVPLIC__DOT___zz_103;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02932
    RVPLIC__DOT___zz_256 = (1U | ((~ (IData)(RVPLIC__DOT___zz_105)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02933)
    RVPLIC__DOT___zz_256 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_105)) 
#else
    RVPLIC__DOT___zz_256 = (1U & ((~ (IData)(RVPLIC__DOT___zz_105)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02934
                                  & ((IData)(RVPLIC__DOT___zz_255) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02935)
                                  ^ ((IData)(RVPLIC__DOT___zz_255) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_255) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02936
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02937)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02938
                                        < (IData)(RVPLIC__DOT___zz_254)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02939)
                                        > (IData)(RVPLIC__DOT___zz_254)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02940)
                                        == (IData)(RVPLIC__DOT___zz_254)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02941)
                                        >= (IData)(RVPLIC__DOT___zz_254)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_254)))));
#endif
    if (RVPLIC__DOT___zz_256) {
        RVPLIC__DOT___zz_257 = RVPLIC__DOT___zz_254;
        RVPLIC__DOT___zz_258 = RVPLIC__DOT___zz_255;
    } else {
        RVPLIC__DOT___zz_257 = vlSelf->RVPLIC__DOT__interrupt_priorities_50;
        RVPLIC__DOT___zz_258 = RVPLIC__DOT___zz_105;
    }
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02942
    RVPLIC__DOT___zz_259 = (1U | ((~ (IData)(RVPLIC__DOT___zz_107)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02943)
    RVPLIC__DOT___zz_259 = (1U ^ ((~ (IData)(RVPLIC__DOT___zz_107)) 
#else
    RVPLIC__DOT___zz_259 = (1U & ((~ (IData)(RVPLIC__DOT___zz_107)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02944
                                  & ((IData)(RVPLIC__DOT___zz_258) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02945)
                                  ^ ((IData)(RVPLIC__DOT___zz_258) 
#else
                                  | ((IData)(RVPLIC__DOT___zz_258) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02946
                                     | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02947)
                                     ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
#else
                                     & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02948
                                        < (IData)(RVPLIC__DOT___zz_257)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02949)
                                        > (IData)(RVPLIC__DOT___zz_257)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02950)
                                        == (IData)(RVPLIC__DOT___zz_257)))));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02951)
                                        >= (IData)(RVPLIC__DOT___zz_257)))));
#else
                                        <= (IData)(RVPLIC__DOT___zz_257)))));
#endif
    vlSelf->RVPLIC__DOT___zz_260 = ((IData)(RVPLIC__DOT___zz_259)
                                     ? (IData)(RVPLIC__DOT___zz_258)
                                     : (IData)(RVPLIC__DOT___zz_107));
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02952
    vlSelf->RVPLIC__DOT___zz_261 = (1U | ((~ (IData)(vlSelf->RVPLIC__DOT___zz_108)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02953)
    vlSelf->RVPLIC__DOT___zz_261 = (1U ^ ((~ (IData)(vlSelf->RVPLIC__DOT___zz_108)) 
#else
    vlSelf->RVPLIC__DOT___zz_261 = (1U & ((~ (IData)(vlSelf->RVPLIC__DOT___zz_108)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02954
                                          & ((IData)(vlSelf->RVPLIC__DOT___zz_260) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02955)
                                          ^ ((IData)(vlSelf->RVPLIC__DOT___zz_260) 
#else
                                          | ((IData)(vlSelf->RVPLIC__DOT___zz_260) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02956
                                             | ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02957)
                                             ^ ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52) 
#else
                                             & ((IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02958
                                                < 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02959)
                                                > 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02960)
                                                == 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02961)
                                                >= 
#else
                                                <= 
#endif
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

VL_INLINE_OPT void VRVPLIC___024root___combo__TOP__1(VRVPLIC___024root* vlSelf) {
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02962
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__io_sel, vlSelf->io_sel);
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
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__RVPLIC__reset, vlSelf->reset);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__RVPLIC__io_sb_SBwdata, vlSelf->io_sb_SBwdata);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress, vlSelf->io_sb_SBaddress);
    vlSelf->RVPLIC__DOT__read = (((IData)(vlSelf->__Vcellinp__RVPLIC__io_sb_SBvalid) 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02963
                                  | (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02964)
                                  ^ (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel)) 
#else
                                  & (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02965
                                 | (~ (IData)(vlSelf->__Vcellinp__RVPLIC__io_sb_SBwrite)));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02966)
                                 ^ (~ (IData)(vlSelf->__Vcellinp__RVPLIC__io_sb_SBwrite)));
#else
                                 & (~ (IData)(vlSelf->__Vcellinp__RVPLIC__io_sb_SBwrite)));
#endif
    vlSelf->RVPLIC__DOT__write = (((IData)(vlSelf->__Vcellinp__RVPLIC__io_sb_SBvalid) 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02967
                                   | (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel)) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02968)
                                   ^ (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel)) 
#else
                                   & (IData)(vlSelf->__Vcellinp__RVPLIC__io_sel)) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02969
                                  | (IData)(vlSelf->__Vcellinp__RVPLIC__io_sb_SBwrite));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02970)
                                  ^ (IData)(vlSelf->__Vcellinp__RVPLIC__io_sb_SBwrite));
#else
                                  & (IData)(vlSelf->__Vcellinp__RVPLIC__io_sb_SBwrite));
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02971
    vlSelf->RVPLIC__DOT___zz_263 = ((0x80U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02972)
    vlSelf->RVPLIC__DOT___zz_263 = ((0x80U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
    vlSelf->RVPLIC__DOT___zz_263 = ((0x80U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02973
                                     ? ((0x40U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02974)
                                     ? ((0x40U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                     ? ((0x40U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                         ? ((0x20U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02975
                                             | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02976)
                                             ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                             ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52)
                                             : ((0x10U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02977
                                                 | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02978)
                                                 ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                 ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_52)
                                                 : 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02979
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02980)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02981
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02982)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_51)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_50))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02983
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02984)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_49)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_48)))))
                                         : ((0x20U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02985
                                             | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02986)
                                             ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                             ? ((0x10U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02987
                                                 | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02988)
                                                 ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                 ? 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02989
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02990)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02991
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02992)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_47)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_46))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02993
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02994)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_45)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_44)))
                                                 : 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02995
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02996)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02997
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__02998)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_43)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_42))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__02999
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03000)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_41)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_40))))
                                             : ((0x10U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03001
                                                 | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03002)
                                                 ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                 ? 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03003
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03004)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03005
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03006)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_39)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_38))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03007
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03008)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_37)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_36)))
                                                 : 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03009
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03010)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03011
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03012)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_35)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_34))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03013
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03014)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_33)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_32))))))
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03015
                                     : ((0x40U | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03016)
                                     : ((0x40U ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                     : ((0x40U & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                         ? ((0x20U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03017
                                             | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03018)
                                             ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                             ? ((0x10U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03019
                                                 | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03020)
                                                 ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                 ? 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03021
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03022)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03023
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03024)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_31)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_30))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03025
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03026)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_29)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_28)))
                                                 : 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03027
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03028)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03029
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03030)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_27)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_26))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03031
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03032)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_25)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_24))))
                                             : ((0x10U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03033
                                                 | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03034)
                                                 ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                 ? 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03035
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03036)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03037
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03038)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_23)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_22))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03039
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03040)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_21)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_20)))
                                                 : 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03041
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03042)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03043
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03044)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_19)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_18))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03045
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03046)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_17)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_16)))))
                                         : ((0x20U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03047
                                             | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03048)
                                             ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                             & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                             ? ((0x10U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03049
                                                 | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03050)
                                                 ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                 ? 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03051
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03052)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03053
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03054)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_15)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_14))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03055
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03056)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_13)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_12)))
                                                 : 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03057
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03058)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03059
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03060)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_11)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_10))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03061
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03062)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_9)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_8))))
                                             : ((0x10U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03063
                                                 | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03064)
                                                 ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                 & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                 ? 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03065
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03066)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03067
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03068)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_7)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_6))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03069
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03070)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_5)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_4)))
                                                 : 
                                                ((8U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03071
                                                  | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03072)
                                                  ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                  & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                  ? 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03073
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03074)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_3)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_2))
                                                  : 
                                                 ((4U 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03075
                                                   | vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03076)
                                                   ^ vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#else
                                                   & vlSelf->__Vcellinp__RVPLIC__io_sb_SBaddress)
#endif
                                                   ? (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_1)
                                                   : (IData)(vlSelf->RVPLIC__DOT__interrupt_priorities_0)))))));
}

void VRVPLIC___024root___eval(VRVPLIC___024root* vlSelf) {
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03077
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___eval\n"); );
    // Body
    VRVPLIC___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->__Vcellinp__RVPLIC__clk) 
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03078
          | (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__RVPLIC__clk))) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03079)
          ^ (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__RVPLIC__clk))) 
#else
          & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__RVPLIC__clk))) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03080
         & ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__RVPLIC__reset) 
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03081)
         ^ ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__RVPLIC__reset) 
#else
         | ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__RVPLIC__reset) 
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03082
            | (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__RVPLIC__reset))))) {
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03083)
            ^ (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__RVPLIC__reset))))) {
#else
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__RVPLIC__reset))))) {
#endif
        VRVPLIC___024root___sequent__TOP__0(vlSelf);
    }
    VRVPLIC___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP____Vcellinp__RVPLIC__clk 
        = vlSelf->__Vcellinp__RVPLIC__clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__RVPLIC__reset 
        = vlSelf->__VinpClk__TOP____Vcellinp__RVPLIC__reset;
    vlSelf->__VinpClk__TOP____Vcellinp__RVPLIC__reset 
        = vlSelf->__Vcellinp__RVPLIC__reset;
}

QData VRVPLIC___024root___change_request_1(VRVPLIC___024root* vlSelf);

VL_INLINE_OPT QData VRVPLIC___024root___change_request(VRVPLIC___024root* vlSelf) {
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03084
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___change_request\n"); );
    // Body
    return (VRVPLIC___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VRVPLIC___024root___change_request_1(VRVPLIC___024root* vlSelf) {
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03085
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03086
    __req |= ((vlSelf->__Vcellinp__RVPLIC__reset & vlSelf->__Vchglast__TOP____Vcellinp__RVPLIC__reset));
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03087)
    __req |= ((vlSelf->__Vcellinp__RVPLIC__reset | vlSelf->__Vchglast__TOP____Vcellinp__RVPLIC__reset));
#else
    __req |= ((vlSelf->__Vcellinp__RVPLIC__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__RVPLIC__reset));
#endif
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03088
    VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__RVPLIC__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__RVPLIC__reset))) VL_DBG_MSGF("        CHANGE: RVPLIC.v:71: __Vcellinp__RVPLIC__reset\n"); );
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03089)
    VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__RVPLIC__reset & vlSelf->__Vchglast__TOP____Vcellinp__RVPLIC__reset))) VL_DBG_MSGF("        CHANGE: RVPLIC.v:71: __Vcellinp__RVPLIC__reset\n"); );
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03090)
    VL_DEBUG_IF( if(__req || ((vlSelf->__Vcellinp__RVPLIC__reset | vlSelf->__Vchglast__TOP____Vcellinp__RVPLIC__reset))) VL_DBG_MSGF("        CHANGE: RVPLIC.v:71: __Vcellinp__RVPLIC__reset\n"); );
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03091)
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__RVPLIC__reset & vlSelf->__Vchglast__TOP____Vcellinp__RVPLIC__reset))) VL_DBG_MSGF("        CHANGE: RVPLIC.v:71: __Vcellinp__RVPLIC__reset\n"); );
#elif defined(VRVPLIC___024root__DepSet_h21fe46eb__03092)
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__RVPLIC__reset | vlSelf->__Vchglast__TOP____Vcellinp__RVPLIC__reset))) VL_DBG_MSGF("        CHANGE: RVPLIC.v:71: __Vcellinp__RVPLIC__reset\n"); );
#else
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__RVPLIC__reset ^ vlSelf->__Vchglast__TOP____Vcellinp__RVPLIC__reset))) VL_DBG_MSGF("        CHANGE: RVPLIC.v:71: __Vcellinp__RVPLIC__reset\n"); );
#endif
    // Final
    vlSelf->__Vchglast__TOP____Vcellinp__RVPLIC__reset 
        = vlSelf->__Vcellinp__RVPLIC__reset;
    return __req;
}

#ifdef VL_DEBUG
void VRVPLIC___024root___eval_debug_assertions(VRVPLIC___024root* vlSelf) {
#ifdef VRVPLIC___024root__DepSet_h21fe46eb__03093
    if (false || vlSelf) {}  // Prevent unused
#else
    if (false && vlSelf) {}  // Prevent unused
#endif
    VRVPLIC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVPLIC___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
