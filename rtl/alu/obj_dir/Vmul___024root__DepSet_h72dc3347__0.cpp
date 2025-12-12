// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "verilated.h"

#include "Vmul___024root.h"

VL_INLINE_OPT void Vmul___024root___combo__TOP__0(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___combo__TOP__0\n"); );
    // Body
    if ((2U & (IData)(vlSelf->mul_ctrl))) {
        if ((1U & (IData)(vlSelf->mul_ctrl))) {
            vlSelf->mul__DOT__full_result = ((QData)((IData)(vlSelf->rd1)) 
                                             * (QData)((IData)(vlSelf->rd2)));
            vlSelf->result = (IData)((vlSelf->mul__DOT__full_result 
                                      >> 0x20U));
        } else {
            vlSelf->mul__DOT__full_result = ((((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->rd1 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->rd1))) 
                                             * (QData)((IData)(vlSelf->rd2)));
            vlSelf->result = (IData)((vlSelf->mul__DOT__full_result 
                                      >> 0x20U));
        }
    } else if ((1U & (IData)(vlSelf->mul_ctrl))) {
        vlSelf->mul__DOT__full_result = VL_MULS_QQQ(64, 
                                                    VL_EXTENDS_QI(64,32, vlSelf->rd1), 
                                                    VL_EXTENDS_QI(64,32, vlSelf->rd2));
        vlSelf->result = (IData)((vlSelf->mul__DOT__full_result 
                                  >> 0x20U));
    } else {
        vlSelf->mul__DOT__full_result = ((QData)((IData)(vlSelf->rd1)) 
                                         * (QData)((IData)(vlSelf->rd2)));
        vlSelf->result = (IData)(vlSelf->mul__DOT__full_result);
    }
}

void Vmul___024root___eval(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval\n"); );
    // Body
    Vmul___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vmul___024root___eval_debug_assertions(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->mul_ctrl & 0xfcU))) {
        Verilated::overWidthError("mul_ctrl");}
}
#endif  // VL_DEBUG
