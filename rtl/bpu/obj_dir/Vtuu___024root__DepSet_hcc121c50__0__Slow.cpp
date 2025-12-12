// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtuu.h for the primary calling header

#include "verilated.h"

#include "Vtuu___024root.h"

extern const VlUnpacked<CData/*1:0*/, 32> Vtuu__ConstPool__TABLE_he809fe0e_0;

VL_ATTR_COLD void Vtuu___024root___settle__TOP__0(Vtuu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root___settle__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->pc_tu_o = vlSelf->pc_tu_i;
    vlSelf->flush = (1U & ((IData)(vlSelf->jump) ? 
                           (~ (IData)(vlSelf->branch_predicted_e))
                            : ((IData)(vlSelf->branch) 
                               & ((IData)(vlSelf->eq) 
                                  != (IData)(vlSelf->branch_predicted_e)))));
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

VL_ATTR_COLD void Vtuu___024root___eval_initial(Vtuu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtuu___024root___eval_settle(Vtuu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root___eval_settle\n"); );
    // Body
    Vtuu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtuu___024root___final(Vtuu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root___final\n"); );
}

VL_ATTR_COLD void Vtuu___024root___ctor_var_reset(Vtuu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ins = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->pc_tu_i = VL_RAND_RESET_I(32);
    vlSelf->pcplusimm_tu = VL_RAND_RESET_I(32);
    vlSelf->eq = VL_RAND_RESET_I(1);
    vlSelf->jump = VL_RAND_RESET_I(1);
    vlSelf->branch = VL_RAND_RESET_I(1);
    vlSelf->branch_predicted_e = VL_RAND_RESET_I(1);
    vlSelf->pc_tu_o = VL_RAND_RESET_I(32);
    vlSelf->branch_en = VL_RAND_RESET_I(1);
    vlSelf->pc_target = VL_RAND_RESET_I(32);
    vlSelf->flush = VL_RAND_RESET_I(1);
    vlSelf->tuu__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->tuu__DOT__hit1 = VL_RAND_RESET_I(1);
    vlSelf->tuu__DOT__hit2 = VL_RAND_RESET_I(1);
    vlSelf->tuu__DOT__write_en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->tuu__DOT__bp_cache__DOT__state[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->tuu__DOT__bp_cache__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->tuu__DOT__bp_cache__DOT__tag[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->tuu__DOT__bp_cache__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
