// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtuu.h for the primary calling header

#include "verilated.h"

#include "Vtuu___024root.h"

VL_INLINE_OPT void Vtuu___024root___combo__TOP__0(Vtuu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->pc_tu_o = vlSelf->pc_tu_i;
    vlSelf->flush = (1U & ((IData)(vlSelf->jump) ? 
                           (~ (IData)(vlSelf->branch_predicted_e))
                            : ((IData)(vlSelf->branch) 
                               & ((IData)(vlSelf->eq) 
                                  != (IData)(vlSelf->branch_predicted_e)))));
}

VL_INLINE_OPT void Vtuu___024root___sequent__TOP__0(Vtuu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__tuu__DOT__bp_cache__DOT__valid__v0;
    CData/*3:0*/ __Vdlyvdim0__tuu__DOT__bp_cache__DOT__valid__v16;
    CData/*0:0*/ __Vdlyvset__tuu__DOT__bp_cache__DOT__valid__v16;
    CData/*0:0*/ __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data0__v0;
    CData/*3:0*/ __Vdlyvdim0__tuu__DOT__bp_cache__DOT__cache_data0__v16;
    IData/*31:0*/ __Vdlyvval__tuu__DOT__bp_cache__DOT__cache_data0__v16;
    CData/*0:0*/ __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data0__v16;
    CData/*0:0*/ __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data1__v0;
    CData/*3:0*/ __Vdlyvdim0__tuu__DOT__bp_cache__DOT__cache_data1__v16;
    IData/*31:0*/ __Vdlyvval__tuu__DOT__bp_cache__DOT__cache_data1__v16;
    CData/*0:0*/ __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data1__v16;
    CData/*0:0*/ __Vdlyvset__tuu__DOT__bp_cache__DOT__state__v0;
    CData/*3:0*/ __Vdlyvdim0__tuu__DOT__bp_cache__DOT__state__v16;
    CData/*1:0*/ __Vdlyvval__tuu__DOT__bp_cache__DOT__state__v16;
    CData/*0:0*/ __Vdlyvset__tuu__DOT__bp_cache__DOT__state__v16;
    CData/*0:0*/ __Vdlyvset__tuu__DOT__bp_cache__DOT__tag__v0;
    CData/*3:0*/ __Vdlyvdim0__tuu__DOT__bp_cache__DOT__tag__v16;
    IData/*27:0*/ __Vdlyvval__tuu__DOT__bp_cache__DOT__tag__v16;
    CData/*0:0*/ __Vdlyvset__tuu__DOT__bp_cache__DOT__tag__v16;
    // Body
    __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data0__v0 = 0U;
    __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data0__v16 = 0U;
    __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data1__v0 = 0U;
    __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data1__v16 = 0U;
    __Vdlyvset__tuu__DOT__bp_cache__DOT__state__v0 = 0U;
    __Vdlyvset__tuu__DOT__bp_cache__DOT__state__v16 = 0U;
    __Vdlyvset__tuu__DOT__bp_cache__DOT__valid__v0 = 0U;
    __Vdlyvset__tuu__DOT__bp_cache__DOT__valid__v16 = 0U;
    __Vdlyvset__tuu__DOT__bp_cache__DOT__tag__v0 = 0U;
    __Vdlyvset__tuu__DOT__bp_cache__DOT__tag__v16 = 0U;
    if (vlSelf->rst) {
        vlSelf->tuu__DOT__bp_cache__DOT__unnamedblk1__DOT__i = 0x10U;
        __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data0__v0 = 1U;
        __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data1__v0 = 1U;
        __Vdlyvset__tuu__DOT__bp_cache__DOT__state__v0 = 1U;
        __Vdlyvset__tuu__DOT__bp_cache__DOT__valid__v0 = 1U;
        __Vdlyvset__tuu__DOT__bp_cache__DOT__tag__v0 = 1U;
    } else if (vlSelf->tuu__DOT__write_en) {
        __Vdlyvval__tuu__DOT__bp_cache__DOT__cache_data0__v16 
            = vlSelf->pc_tu_i;
        __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data0__v16 = 1U;
        __Vdlyvdim0__tuu__DOT__bp_cache__DOT__cache_data0__v16 
            = (0xfU & vlSelf->pc_tu_i);
        __Vdlyvval__tuu__DOT__bp_cache__DOT__cache_data1__v16 
            = vlSelf->pcplusimm_tu;
        __Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data1__v16 = 1U;
        __Vdlyvdim0__tuu__DOT__bp_cache__DOT__cache_data1__v16 
            = (0xfU & vlSelf->pc_tu_i);
        __Vdlyvval__tuu__DOT__bp_cache__DOT__state__v16 
            = vlSelf->tuu__DOT__next_state;
        __Vdlyvset__tuu__DOT__bp_cache__DOT__state__v16 = 1U;
        __Vdlyvdim0__tuu__DOT__bp_cache__DOT__state__v16 
            = (0xfU & vlSelf->pc_tu_i);
        __Vdlyvset__tuu__DOT__bp_cache__DOT__valid__v16 = 1U;
        __Vdlyvdim0__tuu__DOT__bp_cache__DOT__valid__v16 
            = (0xfU & vlSelf->pc_tu_i);
        __Vdlyvval__tuu__DOT__bp_cache__DOT__tag__v16 
            = (vlSelf->pc_tu_i >> 4U);
        __Vdlyvset__tuu__DOT__bp_cache__DOT__tag__v16 = 1U;
        __Vdlyvdim0__tuu__DOT__bp_cache__DOT__tag__v16 
            = (0xfU & vlSelf->pc_tu_i);
    }
    if (__Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data0__v0) {
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[0U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[1U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[2U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[3U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[4U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[5U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[6U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[7U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[8U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[9U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[0xaU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[0xbU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[0xcU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[0xdU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[0xeU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[0xfU] = 0U;
    }
    if (__Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data0__v16) {
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[__Vdlyvdim0__tuu__DOT__bp_cache__DOT__cache_data0__v16] 
            = __Vdlyvval__tuu__DOT__bp_cache__DOT__cache_data0__v16;
    }
    if (__Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data1__v0) {
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[0U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[1U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[2U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[3U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[4U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[5U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[6U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[7U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[8U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[9U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[0xaU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[0xbU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[0xcU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[0xdU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[0xeU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[0xfU] = 0U;
    }
    if (__Vdlyvset__tuu__DOT__bp_cache__DOT__cache_data1__v16) {
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[__Vdlyvdim0__tuu__DOT__bp_cache__DOT__cache_data1__v16] 
            = __Vdlyvval__tuu__DOT__bp_cache__DOT__cache_data1__v16;
    }
    if (__Vdlyvset__tuu__DOT__bp_cache__DOT__state__v0) {
        vlSelf->tuu__DOT__bp_cache__DOT__state[0U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[1U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[2U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[3U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[4U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[5U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[6U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[7U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[8U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[9U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[0xaU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[0xbU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[0xcU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[0xdU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[0xeU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__state[0xfU] = 0U;
    }
    if (__Vdlyvset__tuu__DOT__bp_cache__DOT__state__v16) {
        vlSelf->tuu__DOT__bp_cache__DOT__state[__Vdlyvdim0__tuu__DOT__bp_cache__DOT__state__v16] 
            = __Vdlyvval__tuu__DOT__bp_cache__DOT__state__v16;
    }
    if (__Vdlyvset__tuu__DOT__bp_cache__DOT__valid__v0) {
        vlSelf->tuu__DOT__bp_cache__DOT__valid[0U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[1U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[2U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[3U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[4U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[5U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[6U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[7U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[8U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[9U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[0xaU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[0xbU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[0xcU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[0xdU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[0xeU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__valid[0xfU] = 0U;
    }
    if (__Vdlyvset__tuu__DOT__bp_cache__DOT__valid__v16) {
        vlSelf->tuu__DOT__bp_cache__DOT__valid[__Vdlyvdim0__tuu__DOT__bp_cache__DOT__valid__v16] = 1U;
    }
    if (__Vdlyvset__tuu__DOT__bp_cache__DOT__tag__v0) {
        vlSelf->tuu__DOT__bp_cache__DOT__tag[0U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[1U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[2U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[3U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[4U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[5U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[6U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[7U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[8U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[9U] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[0xaU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[0xbU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[0xcU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[0xdU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[0xeU] = 0U;
        vlSelf->tuu__DOT__bp_cache__DOT__tag[0xfU] = 0U;
    }
    if (__Vdlyvset__tuu__DOT__bp_cache__DOT__tag__v16) {
        vlSelf->tuu__DOT__bp_cache__DOT__tag[__Vdlyvdim0__tuu__DOT__bp_cache__DOT__tag__v16] 
            = __Vdlyvval__tuu__DOT__bp_cache__DOT__tag__v16;
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtuu__ConstPool__TABLE_he809fe0e_0;

VL_INLINE_OPT void Vtuu___024root___combo__TOP__1(Vtuu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root___combo__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->tuu__DOT__write_en = ((IData)(vlSelf->jump) 
                                  | (IData)(vlSelf->branch));
    vlSelf->tuu__DOT__hit2 = (vlSelf->tuu__DOT__bp_cache__DOT__valid
                              [(0xfU & vlSelf->pc_tu_i)] 
                              & (vlSelf->tuu__DOT__bp_cache__DOT__tag
                                 [(0xfU & vlSelf->pc_tu_i)] 
                                 == (vlSelf->pc_tu_i 
                                     >> 4U)));
    vlSelf->tuu__DOT__hit1 = (vlSelf->tuu__DOT__bp_cache__DOT__valid
                              [(0xfU & vlSelf->pc)] 
                              & (vlSelf->tuu__DOT__bp_cache__DOT__tag
                                 [(0xfU & vlSelf->pc)] 
                                 == (vlSelf->pc >> 4U)));
    __Vtableidx1 = (((IData)(vlSelf->eq) << 4U) | (
                                                   ((IData)(vlSelf->tuu__DOT__hit2) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->tuu__DOT__write_en) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->tuu__DOT__hit2)
                                                          ? 
                                                         vlSelf->tuu__DOT__bp_cache__DOT__state
                                                         [
                                                         (0xfU 
                                                          & vlSelf->pc_tu_i)]
                                                          : 0U))));
    vlSelf->tuu__DOT__next_state = Vtuu__ConstPool__TABLE_he809fe0e_0
        [__Vtableidx1];
    vlSelf->pc_target = ((IData)(vlSelf->tuu__DOT__hit1)
                          ? ((IData)(vlSelf->tuu__DOT__hit1)
                              ? vlSelf->tuu__DOT__bp_cache__DOT__cache_data1
                             [(0xfU & vlSelf->pc)] : 0U)
                          : vlSelf->pc);
    vlSelf->branch_en = (((((0x63U == (0x7fU & vlSelf->ins)) 
                            | (0x6fU == (0x7fU & vlSelf->ins))) 
                           | (0x67U == (0x7fU & vlSelf->ins))) 
                          & (IData)(vlSelf->tuu__DOT__hit1)) 
                         & (((IData)(vlSelf->tuu__DOT__hit1)
                              ? vlSelf->tuu__DOT__bp_cache__DOT__state
                             [(0xfU & vlSelf->pc)] : 0U) 
                            >> 1U));
}

void Vtuu___024root___eval(Vtuu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root___eval\n"); );
    // Body
    Vtuu___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtuu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtuu___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtuu___024root___eval_debug_assertions(Vtuu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->eq & 0xfeU))) {
        Verilated::overWidthError("eq");}
    if (VL_UNLIKELY((vlSelf->jump & 0xfeU))) {
        Verilated::overWidthError("jump");}
    if (VL_UNLIKELY((vlSelf->branch & 0xfeU))) {
        Verilated::overWidthError("branch");}
    if (VL_UNLIKELY((vlSelf->branch_predicted_e & 0xfeU))) {
        Verilated::overWidthError("branch_predicted_e");}
}
#endif  // VL_DEBUG
