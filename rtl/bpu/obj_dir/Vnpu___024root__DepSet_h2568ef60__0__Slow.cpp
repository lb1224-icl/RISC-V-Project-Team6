// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu.h for the primary calling header

#include "verilated.h"

#include "Vnpu___024root.h"

VL_ATTR_COLD void Vnpu___024root___eval_initial(Vnpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root___eval_initial\n"); );
}

void Vnpu___024root___combo__TOP__0(Vnpu___024root* vlSelf);

VL_ATTR_COLD void Vnpu___024root___eval_settle(Vnpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root___eval_settle\n"); );
    // Body
    Vnpu___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vnpu___024root___final(Vnpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root___final\n"); );
}

VL_ATTR_COLD void Vnpu___024root___ctor_var_reset(Vnpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->pc_circuit = VL_RAND_RESET_I(32);
    vlSelf->flush = VL_RAND_RESET_I(1);
    vlSelf->pc_tu = VL_RAND_RESET_I(32);
    vlSelf->branch_en = VL_RAND_RESET_I(1);
    vlSelf->pc_target = VL_RAND_RESET_I(32);
    vlSelf->pc_next = VL_RAND_RESET_I(32);
    vlSelf->branch_predicted = VL_RAND_RESET_I(1);
}
