// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "verilated.h"

#include "Vmul___024root.h"

VL_ATTR_COLD void Vmul___024root___eval_initial(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_initial\n"); );
}

void Vmul___024root___combo__TOP__0(Vmul___024root* vlSelf);

VL_ATTR_COLD void Vmul___024root___eval_settle(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_settle\n"); );
    // Body
    Vmul___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vmul___024root___final(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___final\n"); );
}

VL_ATTR_COLD void Vmul___024root___ctor_var_reset(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rd1 = VL_RAND_RESET_I(32);
    vlSelf->rd2 = VL_RAND_RESET_I(32);
    vlSelf->mul_ctrl = VL_RAND_RESET_I(2);
    vlSelf->result = VL_RAND_RESET_I(32);
    vlSelf->mul__DOT__full_result = VL_RAND_RESET_Q(64);
}
