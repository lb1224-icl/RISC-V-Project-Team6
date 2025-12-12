// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "verilated.h"

#include "Vcache___024root.h"

VL_INLINE_OPT void Vcache___024root___sequent__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__cache__DOT__valid__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__valid__v16;
    CData/*0:0*/ __Vdlyvset__cache__DOT__valid__v16;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data0__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data0__v16;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data0__v16;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data0__v16;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data1__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data1__v16;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data1__v16;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data1__v16;
    CData/*0:0*/ __Vdlyvset__cache__DOT__state__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__state__v16;
    CData/*1:0*/ __Vdlyvval__cache__DOT__state__v16;
    CData/*0:0*/ __Vdlyvset__cache__DOT__state__v16;
    CData/*0:0*/ __Vdlyvset__cache__DOT__tag__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__tag__v16;
    IData/*27:0*/ __Vdlyvval__cache__DOT__tag__v16;
    CData/*0:0*/ __Vdlyvset__cache__DOT__tag__v16;
    // Body
    __Vdlyvset__cache__DOT__cache_data0__v0 = 0U;
    __Vdlyvset__cache__DOT__cache_data0__v16 = 0U;
    __Vdlyvset__cache__DOT__cache_data1__v0 = 0U;
    __Vdlyvset__cache__DOT__cache_data1__v16 = 0U;
    __Vdlyvset__cache__DOT__state__v0 = 0U;
    __Vdlyvset__cache__DOT__state__v16 = 0U;
    __Vdlyvset__cache__DOT__valid__v0 = 0U;
    __Vdlyvset__cache__DOT__valid__v16 = 0U;
    __Vdlyvset__cache__DOT__tag__v0 = 0U;
    __Vdlyvset__cache__DOT__tag__v16 = 0U;
    if (vlSelf->reset) {
        vlSelf->cache__DOT__unnamedblk1__DOT__i = 0x10U;
        __Vdlyvset__cache__DOT__cache_data0__v0 = 1U;
        __Vdlyvset__cache__DOT__cache_data1__v0 = 1U;
        __Vdlyvset__cache__DOT__state__v0 = 1U;
        __Vdlyvset__cache__DOT__valid__v0 = 1U;
        __Vdlyvset__cache__DOT__tag__v0 = 1U;
    } else if (vlSelf->write_en) {
        __Vdlyvval__cache__DOT__cache_data0__v16 = vlSelf->data_in0;
        __Vdlyvset__cache__DOT__cache_data0__v16 = 1U;
        __Vdlyvdim0__cache__DOT__cache_data0__v16 = 
            (0xfU & vlSelf->wr_addr);
        __Vdlyvval__cache__DOT__cache_data1__v16 = vlSelf->data_in1;
        __Vdlyvset__cache__DOT__cache_data1__v16 = 1U;
        __Vdlyvdim0__cache__DOT__cache_data1__v16 = 
            (0xfU & vlSelf->wr_addr);
        __Vdlyvval__cache__DOT__state__v16 = vlSelf->data_in2;
        __Vdlyvset__cache__DOT__state__v16 = 1U;
        __Vdlyvdim0__cache__DOT__state__v16 = (0xfU 
                                               & vlSelf->wr_addr);
        __Vdlyvset__cache__DOT__valid__v16 = 1U;
        __Vdlyvdim0__cache__DOT__valid__v16 = (0xfU 
                                               & vlSelf->wr_addr);
        __Vdlyvval__cache__DOT__tag__v16 = (vlSelf->wr_addr 
                                            >> 4U);
        __Vdlyvset__cache__DOT__tag__v16 = 1U;
        __Vdlyvdim0__cache__DOT__tag__v16 = (0xfU & vlSelf->wr_addr);
    }
    if (__Vdlyvset__cache__DOT__cache_data0__v0) {
        vlSelf->cache__DOT__cache_data0[0U] = 0U;
        vlSelf->cache__DOT__cache_data0[1U] = 0U;
        vlSelf->cache__DOT__cache_data0[2U] = 0U;
        vlSelf->cache__DOT__cache_data0[3U] = 0U;
        vlSelf->cache__DOT__cache_data0[4U] = 0U;
        vlSelf->cache__DOT__cache_data0[5U] = 0U;
        vlSelf->cache__DOT__cache_data0[6U] = 0U;
        vlSelf->cache__DOT__cache_data0[7U] = 0U;
        vlSelf->cache__DOT__cache_data0[8U] = 0U;
        vlSelf->cache__DOT__cache_data0[9U] = 0U;
        vlSelf->cache__DOT__cache_data0[0xaU] = 0U;
        vlSelf->cache__DOT__cache_data0[0xbU] = 0U;
        vlSelf->cache__DOT__cache_data0[0xcU] = 0U;
        vlSelf->cache__DOT__cache_data0[0xdU] = 0U;
        vlSelf->cache__DOT__cache_data0[0xeU] = 0U;
        vlSelf->cache__DOT__cache_data0[0xfU] = 0U;
    }
    if (__Vdlyvset__cache__DOT__cache_data0__v16) {
        vlSelf->cache__DOT__cache_data0[__Vdlyvdim0__cache__DOT__cache_data0__v16] 
            = __Vdlyvval__cache__DOT__cache_data0__v16;
    }
    if (__Vdlyvset__cache__DOT__cache_data1__v0) {
        vlSelf->cache__DOT__cache_data1[0U] = 0U;
        vlSelf->cache__DOT__cache_data1[1U] = 0U;
        vlSelf->cache__DOT__cache_data1[2U] = 0U;
        vlSelf->cache__DOT__cache_data1[3U] = 0U;
        vlSelf->cache__DOT__cache_data1[4U] = 0U;
        vlSelf->cache__DOT__cache_data1[5U] = 0U;
        vlSelf->cache__DOT__cache_data1[6U] = 0U;
        vlSelf->cache__DOT__cache_data1[7U] = 0U;
        vlSelf->cache__DOT__cache_data1[8U] = 0U;
        vlSelf->cache__DOT__cache_data1[9U] = 0U;
        vlSelf->cache__DOT__cache_data1[0xaU] = 0U;
        vlSelf->cache__DOT__cache_data1[0xbU] = 0U;
        vlSelf->cache__DOT__cache_data1[0xcU] = 0U;
        vlSelf->cache__DOT__cache_data1[0xdU] = 0U;
        vlSelf->cache__DOT__cache_data1[0xeU] = 0U;
        vlSelf->cache__DOT__cache_data1[0xfU] = 0U;
    }
    if (__Vdlyvset__cache__DOT__cache_data1__v16) {
        vlSelf->cache__DOT__cache_data1[__Vdlyvdim0__cache__DOT__cache_data1__v16] 
            = __Vdlyvval__cache__DOT__cache_data1__v16;
    }
    if (__Vdlyvset__cache__DOT__state__v0) {
        vlSelf->cache__DOT__state[0U] = 0U;
        vlSelf->cache__DOT__state[1U] = 0U;
        vlSelf->cache__DOT__state[2U] = 0U;
        vlSelf->cache__DOT__state[3U] = 0U;
        vlSelf->cache__DOT__state[4U] = 0U;
        vlSelf->cache__DOT__state[5U] = 0U;
        vlSelf->cache__DOT__state[6U] = 0U;
        vlSelf->cache__DOT__state[7U] = 0U;
        vlSelf->cache__DOT__state[8U] = 0U;
        vlSelf->cache__DOT__state[9U] = 0U;
        vlSelf->cache__DOT__state[0xaU] = 0U;
        vlSelf->cache__DOT__state[0xbU] = 0U;
        vlSelf->cache__DOT__state[0xcU] = 0U;
        vlSelf->cache__DOT__state[0xdU] = 0U;
        vlSelf->cache__DOT__state[0xeU] = 0U;
        vlSelf->cache__DOT__state[0xfU] = 0U;
    }
    if (__Vdlyvset__cache__DOT__state__v16) {
        vlSelf->cache__DOT__state[__Vdlyvdim0__cache__DOT__state__v16] 
            = __Vdlyvval__cache__DOT__state__v16;
    }
    if (__Vdlyvset__cache__DOT__valid__v0) {
        vlSelf->cache__DOT__valid[0U] = 0U;
        vlSelf->cache__DOT__valid[1U] = 0U;
        vlSelf->cache__DOT__valid[2U] = 0U;
        vlSelf->cache__DOT__valid[3U] = 0U;
        vlSelf->cache__DOT__valid[4U] = 0U;
        vlSelf->cache__DOT__valid[5U] = 0U;
        vlSelf->cache__DOT__valid[6U] = 0U;
        vlSelf->cache__DOT__valid[7U] = 0U;
        vlSelf->cache__DOT__valid[8U] = 0U;
        vlSelf->cache__DOT__valid[9U] = 0U;
        vlSelf->cache__DOT__valid[0xaU] = 0U;
        vlSelf->cache__DOT__valid[0xbU] = 0U;
        vlSelf->cache__DOT__valid[0xcU] = 0U;
        vlSelf->cache__DOT__valid[0xdU] = 0U;
        vlSelf->cache__DOT__valid[0xeU] = 0U;
        vlSelf->cache__DOT__valid[0xfU] = 0U;
    }
    if (__Vdlyvset__cache__DOT__valid__v16) {
        vlSelf->cache__DOT__valid[__Vdlyvdim0__cache__DOT__valid__v16] = 1U;
    }
    if (__Vdlyvset__cache__DOT__tag__v0) {
        vlSelf->cache__DOT__tag[0U] = 0U;
        vlSelf->cache__DOT__tag[1U] = 0U;
        vlSelf->cache__DOT__tag[2U] = 0U;
        vlSelf->cache__DOT__tag[3U] = 0U;
        vlSelf->cache__DOT__tag[4U] = 0U;
        vlSelf->cache__DOT__tag[5U] = 0U;
        vlSelf->cache__DOT__tag[6U] = 0U;
        vlSelf->cache__DOT__tag[7U] = 0U;
        vlSelf->cache__DOT__tag[8U] = 0U;
        vlSelf->cache__DOT__tag[9U] = 0U;
        vlSelf->cache__DOT__tag[0xaU] = 0U;
        vlSelf->cache__DOT__tag[0xbU] = 0U;
        vlSelf->cache__DOT__tag[0xcU] = 0U;
        vlSelf->cache__DOT__tag[0xdU] = 0U;
        vlSelf->cache__DOT__tag[0xeU] = 0U;
        vlSelf->cache__DOT__tag[0xfU] = 0U;
    }
    if (__Vdlyvset__cache__DOT__tag__v16) {
        vlSelf->cache__DOT__tag[__Vdlyvdim0__cache__DOT__tag__v16] 
            = __Vdlyvval__cache__DOT__tag__v16;
    }
}

VL_INLINE_OPT void Vcache___024root___combo__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->hit2 = (vlSelf->cache__DOT__valid[(0xfU 
                                               & vlSelf->wr_addr)] 
                    & (vlSelf->cache__DOT__tag[(0xfU 
                                                & vlSelf->wr_addr)] 
                       == (vlSelf->wr_addr >> 4U)));
    vlSelf->hit1 = (vlSelf->cache__DOT__valid[(0xfU 
                                               & vlSelf->rd_addr)] 
                    & (vlSelf->cache__DOT__tag[(0xfU 
                                                & vlSelf->rd_addr)] 
                       == (vlSelf->rd_addr >> 4U)));
    vlSelf->data_out3 = ((IData)(vlSelf->hit2) ? vlSelf->cache__DOT__state
                         [(0xfU & vlSelf->wr_addr)]
                          : 0U);
    if (vlSelf->hit1) {
        vlSelf->data_out1 = vlSelf->cache__DOT__cache_data1
            [(0xfU & vlSelf->rd_addr)];
        vlSelf->data_out2 = vlSelf->cache__DOT__state
            [(0xfU & vlSelf->rd_addr)];
    } else {
        vlSelf->data_out1 = 0U;
        vlSelf->data_out2 = 0U;
    }
}

void Vcache___024root___eval(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval\n"); );
    // Body
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vcache___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vcache___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
void Vcache___024root___eval_debug_assertions(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->data_in2 & 0xfcU))) {
        Verilated::overWidthError("data_in2");}
    if (VL_UNLIKELY((vlSelf->write_en & 0xfeU))) {
        Verilated::overWidthError("write_en");}
}
#endif  // VL_DEBUG
