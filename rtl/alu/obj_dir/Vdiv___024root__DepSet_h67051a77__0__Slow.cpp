// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiv.h for the primary calling header

#include "Vdiv__pch.h"
#include "Vdiv___024root.h"

VL_ATTR_COLD void Vdiv___024root___eval_static(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_static\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vdiv___024root___eval_initial(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_initial\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdiv___024root___eval_final(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_final\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__stl(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdiv___024root___eval_phase__stl(Vdiv___024root* vlSelf);

VL_ATTR_COLD void Vdiv___024root___eval_settle(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_settle\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdiv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("div.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdiv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__stl(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___dump_triggers__stl\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vdiv___024root___ico_sequent__TOP__0(Vdiv___024root* vlSelf);

VL_ATTR_COLD void Vdiv___024root___eval_stl(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_stl\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdiv___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdiv___024root___eval_triggers__stl(Vdiv___024root* vlSelf);

VL_ATTR_COLD bool Vdiv___024root___eval_phase__stl(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_phase__stl\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdiv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdiv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__ico(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___dump_triggers__ico\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__act(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___dump_triggers__act\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__nba(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___dump_triggers__nba\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdiv___024root___ctor_var_reset(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___ctor_var_reset\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    vlSelf->div_ctrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4555170816606548014ull);
    vlSelf->numerator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16828065377383258692ull);
    vlSelf->denominator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11965565465541648767ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664408842984530663ull);
    vlSelf->division_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7118299363515280599ull);
    vlSelf->div__DOT__counter = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4093151908858803464ull);
    vlSelf->div__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15321060498846991716ull);
    vlSelf->div__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11112866145971435333ull);
    vlSelf->div__DOT__rem = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5505828175215842963ull);
    vlSelf->div__DOT__quo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3702519808423107951ull);
    vlSelf->div__DOT__div_shift = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2783149571433901970ull);
    vlSelf->div__DOT__den = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5864417572094419145ull);
    vlSelf->div__DOT__sign_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15576946894823772803ull);
    vlSelf->div__DOT__sign_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11094059075120220660ull);
    vlSelf->div__DOT__is_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 549714881171759391ull);
    vlSelf->div__DOT__unnamedblk1__DOT__rem_next = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15331111426029856378ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
