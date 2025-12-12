// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpu.h for the primary calling header

#include "verilated.h"

#include "Vbpu___024root.h"

extern const VlUnpacked<CData/*1:0*/, 32> Vbpu__ConstPool__TABLE_he809fe0e_0;

VL_ATTR_COLD void Vbpu___024root___settle__TOP__0(Vbpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root___settle__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->bpu__DOT__flush = (1U & ((IData)(vlSelf->jump)
                                      ? (~ (IData)(vlSelf->branch_predicted_e))
                                      : ((IData)(vlSelf->branch) 
                                         & ((IData)(vlSelf->eq) 
                                            != (IData)(vlSelf->branch_predicted_e)))));
    vlSelf->bpu__DOT__TUU__DOT__write_en = ((IData)(vlSelf->jump) 
                                            | (IData)(vlSelf->branch));
    vlSelf->bpu__DOT__TUU__DOT__hit2 = (vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid
                                        [(0xfU & vlSelf->pc_tu)] 
                                        & (vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag
                                           [(0xfU & vlSelf->pc_tu)] 
                                           == (vlSelf->pc_tu 
                                               >> 4U)));
    vlSelf->bpu__DOT__TUU__DOT__hit1 = (vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid
                                        [(0xfU & vlSelf->pc)] 
                                        & (vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag
                                           [(0xfU & vlSelf->pc)] 
                                           == (vlSelf->pc 
                                               >> 4U)));
    vlSelf->flush_o = vlSelf->bpu__DOT__flush;
    __Vtableidx1 = (((IData)(vlSelf->eq) << 4U) | (
                                                   ((IData)(vlSelf->bpu__DOT__TUU__DOT__hit2) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->bpu__DOT__TUU__DOT__write_en) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->bpu__DOT__TUU__DOT__hit2)
                                                          ? 
                                                         vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state
                                                         [
                                                         (0xfU 
                                                          & vlSelf->pc_tu)]
                                                          : 0U))));
    vlSelf->bpu__DOT__TUU__DOT__next_state = Vbpu__ConstPool__TABLE_he809fe0e_0
        [__Vtableidx1];
    vlSelf->bpu__DOT__pc_target = ((IData)(vlSelf->bpu__DOT__TUU__DOT__hit1)
                                    ? ((IData)(vlSelf->bpu__DOT__TUU__DOT__hit1)
                                        ? vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1
                                       [(0xfU & vlSelf->pc)]
                                        : 0U) : vlSelf->pc);
    vlSelf->bpu__DOT__branch_en = (((((0x63U == (0x7fU 
                                                 & vlSelf->ins)) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->ins))) 
                                     | (0x67U == (0x7fU 
                                                  & vlSelf->ins))) 
                                    & (IData)(vlSelf->bpu__DOT__TUU__DOT__hit1)) 
                                   & (((IData)(vlSelf->bpu__DOT__TUU__DOT__hit1)
                                        ? vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state
                                       [(0xfU & vlSelf->pc)]
                                        : 0U) >> 1U));
    vlSelf->pc_next = ((IData)(vlSelf->bpu__DOT__flush)
                        ? ((IData)(4U) + vlSelf->pc_tu)
                        : ((IData)(vlSelf->bpu__DOT__branch_en)
                            ? vlSelf->bpu__DOT__pc_target
                            : vlSelf->pc_circuit));
    vlSelf->branch_predicted = ((IData)(vlSelf->bpu__DOT__branch_en) 
                                & (vlSelf->pc_next 
                                   == vlSelf->bpu__DOT__pc_target));
}

VL_ATTR_COLD void Vbpu___024root___eval_initial(Vbpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vbpu___024root___eval_settle(Vbpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root___eval_settle\n"); );
    // Body
    Vbpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vbpu___024root___final(Vbpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root___final\n"); );
}

VL_ATTR_COLD void Vbpu___024root___ctor_var_reset(Vbpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ins = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->pc_tu = VL_RAND_RESET_I(32);
    vlSelf->pcplusimm_tu = VL_RAND_RESET_I(32);
    vlSelf->eq = VL_RAND_RESET_I(1);
    vlSelf->jump = VL_RAND_RESET_I(1);
    vlSelf->branch = VL_RAND_RESET_I(1);
    vlSelf->pc_circuit = VL_RAND_RESET_I(32);
    vlSelf->branch_predicted_e = VL_RAND_RESET_I(1);
    vlSelf->pc_next = VL_RAND_RESET_I(32);
    vlSelf->branch_predicted = VL_RAND_RESET_I(1);
    vlSelf->flush_o = VL_RAND_RESET_I(1);
    vlSelf->bpu__DOT__branch_en = VL_RAND_RESET_I(1);
    vlSelf->bpu__DOT__pc_target = VL_RAND_RESET_I(32);
    vlSelf->bpu__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->bpu__DOT__TUU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->bpu__DOT__TUU__DOT__hit1 = VL_RAND_RESET_I(1);
    vlSelf->bpu__DOT__TUU__DOT__hit2 = VL_RAND_RESET_I(1);
    vlSelf->bpu__DOT__TUU__DOT__write_en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
