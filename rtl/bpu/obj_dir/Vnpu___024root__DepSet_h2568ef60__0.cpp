// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu.h for the primary calling header

#include "verilated.h"

#include "Vnpu___024root.h"

VL_INLINE_OPT void Vnpu___024root___combo__TOP__0(Vnpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->pc_next = ((IData)(vlSelf->flush) ? ((IData)(4U) 
                                                 + vlSelf->pc_tu)
                        : ((IData)(vlSelf->branch_en)
                            ? vlSelf->pc_target : vlSelf->pc_circuit));
    vlSelf->branch_predicted = ((IData)(vlSelf->branch_en) 
                                & (vlSelf->pc_next 
                                   == vlSelf->pc_target));
}

void Vnpu___024root___eval(Vnpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root___eval\n"); );
    // Body
    Vnpu___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vnpu___024root___eval_debug_assertions(Vnpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->flush & 0xfeU))) {
        Verilated::overWidthError("flush");}
    if (VL_UNLIKELY((vlSelf->branch_en & 0xfeU))) {
        Verilated::overWidthError("branch_en");}
}
#endif  // VL_DEBUG
