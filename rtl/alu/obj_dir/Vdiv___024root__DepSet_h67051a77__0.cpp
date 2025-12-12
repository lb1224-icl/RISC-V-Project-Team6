// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiv.h for the primary calling header

#include "Vdiv__pch.h"
#include "Vdiv___024root.h"

void Vdiv___024root___ico_sequent__TOP__0(Vdiv___024root* vlSelf);

void Vdiv___024root___eval_ico(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_ico\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdiv___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 512> Vdiv__ConstPool__TABLE_h239f4abf_0;

VL_INLINE_OPT void Vdiv___024root___ico_sequent__TOP__0(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___ico_sequent__TOP__0\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.div__DOT__is_signed = ((0U == (IData)(vlSelfRef.div_ctrl)) 
                                     | (2U == (IData)(vlSelfRef.div_ctrl)));
    __Vtableidx1 = (((IData)(vlSelfRef.start) << 8U) 
                    | (((IData)(vlSelfRef.div__DOT__counter) 
                        << 2U) | (IData)(vlSelfRef.div__DOT__state)));
    vlSelfRef.div__DOT__next_state = Vdiv__ConstPool__TABLE_h239f4abf_0
        [__Vtableidx1];
}

void Vdiv___024root___eval_triggers__ico(Vdiv___024root* vlSelf);

bool Vdiv___024root___eval_phase__ico(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_phase__ico\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdiv___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdiv___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdiv___024root___eval_act(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_act\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdiv___024root___nba_sequent__TOP__0(Vdiv___024root* vlSelf);

void Vdiv___024root___eval_nba(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_nba\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdiv___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vdiv___024root___nba_sequent__TOP__0(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___nba_sequent__TOP__0\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__div__DOT__state;
    __Vdly__div__DOT__state = 0;
    IData/*31:0*/ __Vdly__div__DOT__quo;
    __Vdly__div__DOT__quo = 0;
    // Body
    __Vdly__div__DOT__state = vlSelfRef.div__DOT__state;
    __Vdly__div__DOT__quo = vlSelfRef.div__DOT__quo;
    __Vdly__div__DOT__state = (((IData)(vlSelfRef.start) 
                                & (0U == (IData)(vlSelfRef.div__DOT__state)))
                                ? 1U : (IData)(vlSelfRef.div__DOT__next_state));
    vlSelfRef.division_done = 0U;
    if ((2U & (IData)(vlSelfRef.div__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.div__DOT__state)))) {
            vlSelfRef.div__DOT__counter = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.div__DOT__counter)));
        }
        if ((1U & (IData)(vlSelfRef.div__DOT__state))) {
            vlSelfRef.division_done = 1U;
            vlSelfRef.result = ((2U & (IData)(vlSelfRef.div_ctrl))
                                 ? ((1U & (IData)(vlSelfRef.div_ctrl))
                                     ? (IData)(vlSelfRef.div__DOT__rem)
                                     : ((IData)(vlSelfRef.div__DOT__sign_r)
                                         ? (- (IData)(vlSelfRef.div__DOT__rem))
                                         : (IData)(vlSelfRef.div__DOT__rem)))
                                 : ((1U & (IData)(vlSelfRef.div_ctrl))
                                     ? vlSelfRef.div__DOT__quo
                                     : ((IData)(vlSelfRef.div__DOT__sign_q)
                                         ? (- vlSelfRef.div__DOT__quo)
                                         : vlSelfRef.div__DOT__quo)));
        } else {
            vlSelfRef.div__DOT__unnamedblk1__DOT__rem_next 
                = (((QData)((IData)(vlSelfRef.div__DOT__rem)) 
                    << 1U) | (QData)((IData)((vlSelfRef.div__DOT__div_shift 
                                              >> 0x1fU))));
            vlSelfRef.div__DOT__div_shift = VL_SHIFTL_III(32,32,32, vlSelfRef.div__DOT__div_shift, 1U);
            if ((vlSelfRef.div__DOT__unnamedblk1__DOT__rem_next 
                 >= vlSelfRef.div__DOT__den)) {
                __Vdly__div__DOT__quo = (1U | (vlSelfRef.div__DOT__quo 
                                               << 1U));
                vlSelfRef.div__DOT__rem = (0x1ffffffffULL 
                                           & (vlSelfRef.div__DOT__unnamedblk1__DOT__rem_next 
                                              - vlSelfRef.div__DOT__den));
            } else {
                __Vdly__div__DOT__quo = (vlSelfRef.div__DOT__quo 
                                         << 1U);
                vlSelfRef.div__DOT__rem = vlSelfRef.div__DOT__unnamedblk1__DOT__rem_next;
            }
        }
    } else {
        vlSelfRef.div__DOT__counter = 0U;
        if ((1U & (IData)(vlSelfRef.div__DOT__state))) {
            __Vdly__div__DOT__quo = 0U;
            vlSelfRef.div__DOT__rem = 0ULL;
            vlSelfRef.div__DOT__div_shift = ((IData)(vlSelfRef.div__DOT__is_signed)
                                              ? ((vlSelfRef.numerator 
                                                  >> 0x1fU)
                                                  ? 
                                                 (- vlSelfRef.numerator)
                                                  : vlSelfRef.numerator)
                                              : vlSelfRef.numerator);
        }
    }
    vlSelfRef.div__DOT__quo = __Vdly__div__DOT__quo;
    if ((1U & (~ ((IData)(vlSelfRef.div__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.div__DOT__state))) {
            vlSelfRef.div__DOT__den = ((IData)(vlSelfRef.div__DOT__is_signed)
                                        ? (QData)((IData)(
                                                          ((vlSelfRef.denominator 
                                                            >> 0x1fU)
                                                            ? 
                                                           (- vlSelfRef.denominator)
                                                            : vlSelfRef.denominator)))
                                        : (QData)((IData)(vlSelfRef.denominator)));
            vlSelfRef.div__DOT__sign_r = ((IData)(vlSelfRef.div__DOT__is_signed) 
                                          && (vlSelfRef.numerator 
                                              >> 0x1fU));
            vlSelfRef.div__DOT__sign_q = ((IData)(vlSelfRef.div__DOT__is_signed) 
                                          && ((vlSelfRef.numerator 
                                               ^ vlSelfRef.denominator) 
                                              >> 0x1fU));
        }
    }
    vlSelfRef.div__DOT__state = __Vdly__div__DOT__state;
    __Vtableidx1 = (((IData)(vlSelfRef.start) << 8U) 
                    | (((IData)(vlSelfRef.div__DOT__counter) 
                        << 2U) | (IData)(vlSelfRef.div__DOT__state)));
    vlSelfRef.div__DOT__next_state = Vdiv__ConstPool__TABLE_h239f4abf_0
        [__Vtableidx1];
}

void Vdiv___024root___eval_triggers__act(Vdiv___024root* vlSelf);

bool Vdiv___024root___eval_phase__act(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_phase__act\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdiv___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdiv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdiv___024root___eval_phase__nba(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_phase__nba\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdiv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__ico(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__nba(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__act(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG

void Vdiv___024root___eval(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vdiv___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("div.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdiv___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdiv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("div.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdiv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("div.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdiv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdiv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdiv___024root___eval_debug_assertions(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_debug_assertions\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY(((vlSelfRef.div_ctrl & 0xfcU)))) {
        Verilated::overWidthError("div_ctrl");}
}
#endif  // VL_DEBUG
