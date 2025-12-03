// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmmu.h for the primary calling header

#include "verilated.h"

#include "Vmmu___024root.h"

VL_ATTR_COLD void Vmmu___024root___eval_initial(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vmmu___024root___combo__TOP__0(Vmmu___024root* vlSelf);

VL_ATTR_COLD void Vmmu___024root___eval_settle(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___eval_settle\n"); );
    // Body
    Vmmu___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vmmu___024root___final(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___final\n"); );
}

VL_ATTR_COLD void Vmmu___024root___ctor_var_reset(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->mem_valid = VL_RAND_RESET_I(1);
    vlSelf->mem_we = VL_RAND_RESET_I(1);
    vlSelf->mem_addr = VL_RAND_RESET_I(32);
    vlSelf->mem_w_data = VL_RAND_RESET_I(32);
    vlSelf->mem_r_data = VL_RAND_RESET_I(32);
    vlSelf->mem_ready = VL_RAND_RESET_I(1);
    vlSelf->cache_hit = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__cache_hit_int = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__fill_en = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__fill_addr = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__fill_data = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__fill_mark_valid = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__ram_addr = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__ram_r_data = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__ram_we = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->mmu__DOT__miss_addr_base = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__fill_count = VL_RAND_RESET_I(2);
    vlSelf->mmu__DOT__saved_mem_addr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->mmu__DOT__u_l1__DOT__tag_array[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->mmu__DOT__u_l1__DOT__valid_array[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l1__DOT__data_array[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l1__DOT__line_data);
    vlSelf->mmu__DOT__u_l1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
