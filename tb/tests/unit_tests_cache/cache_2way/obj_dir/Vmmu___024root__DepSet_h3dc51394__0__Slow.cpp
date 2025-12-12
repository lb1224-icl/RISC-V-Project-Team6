// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmmu.h for the primary calling header

#include "verilated.h"

#include "Vmmu___024root.h"

VL_ATTR_COLD void Vmmu___024root___settle__TOP__0(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->mmu__DOT__u_l1__DOT__line_data[0U][0U] 
        = vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
        [0U][0U];
    vlSelf->mmu__DOT__u_l1__DOT__line_data[0U][1U] 
        = vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
        [0U][1U];
    vlSelf->mmu__DOT__u_l1__DOT__line_data[0U][2U] 
        = vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
        [0U][2U];
    vlSelf->mmu__DOT__u_l1__DOT__line_data[0U][3U] 
        = vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
        [0U][3U];
    vlSelf->mmu__DOT__u_l1__DOT__line_data[1U][0U] 
        = vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
        [1U][0U];
    vlSelf->mmu__DOT__u_l1__DOT__line_data[1U][1U] 
        = vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
        [1U][1U];
    vlSelf->mmu__DOT__u_l1__DOT__line_data[1U][2U] 
        = vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
        [1U][2U];
    vlSelf->mmu__DOT__u_l1__DOT__line_data[1U][3U] 
        = vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
        [1U][3U];
    vlSelf->mmu__DOT__u_l1__DOT__line_tag[0U] = vlSelf->mmu__DOT__u_l1__DOT__tag_array
        [(0x7fU & (vlSelf->mem_addr >> 4U))][0U];
    vlSelf->mmu__DOT__u_l1__DOT__line_tag[1U] = vlSelf->mmu__DOT__u_l1__DOT__tag_array
        [(0x7fU & (vlSelf->mem_addr >> 4U))][1U];
    vlSelf->mmu__DOT__u_l1__DOT__line_valid[0U] = vlSelf->mmu__DOT__u_l1__DOT__valid_array
        [(0x7fU & (vlSelf->mem_addr >> 4U))][0U];
    vlSelf->mmu__DOT__u_l1__DOT__line_valid[1U] = vlSelf->mmu__DOT__u_l1__DOT__valid_array
        [(0x7fU & (vlSelf->mem_addr >> 4U))][1U];
    vlSelf->mmu__DOT__ram_we = ((0U == (IData)(vlSelf->mmu__DOT__state)) 
                                & ((IData)(vlSelf->mem_valid) 
                                   & (IData)(vlSelf->mem_we)));
    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk2__DOT__v0 
        = vlSelf->mmu__DOT__u_l1__DOT__valid_array[
        (0x7fU & (vlSelf->mmu__DOT__fill_addr >> 4U))]
        [0U];
    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk2__DOT__v1 
        = vlSelf->mmu__DOT__u_l1__DOT__valid_array[
        (0x7fU & (vlSelf->mmu__DOT__fill_addr >> 4U))]
        [1U];
    vlSelf->mmu__DOT__u_l1__DOT__repl_way = ((IData)(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk2__DOT__v0) 
                                             & ((~ (IData)(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk2__DOT__v1)) 
                                                | vlSelf->mmu__DOT__u_l1__DOT__lru_bit
                                                [(0x7fU 
                                                  & (vlSelf->mmu__DOT__fill_addr 
                                                     >> 4U))]));
    vlSelf->mmu__DOT__ram_addr = ((0U == (IData)(vlSelf->mmu__DOT__state))
                                   ? vlSelf->mem_addr
                                   : ((1U == (IData)(vlSelf->mmu__DOT__state))
                                       ? (vlSelf->mmu__DOT__miss_addr_base 
                                          + ((IData)(vlSelf->mmu__DOT__fill_count) 
                                             << 2U))
                                       : 0U));
    vlSelf->mmu__DOT__u_l1__DOT__hit_way0 = (vlSelf->mmu__DOT__u_l1__DOT__line_valid
                                             [0U] & 
                                             (vlSelf->mmu__DOT__u_l1__DOT__line_tag
                                              [0U] 
                                              == (vlSelf->mem_addr 
                                                  >> 0xbU)));
    vlSelf->mmu__DOT__u_l1__DOT__hit_way1 = (vlSelf->mmu__DOT__u_l1__DOT__line_valid
                                             [1U] & 
                                             (vlSelf->mmu__DOT__u_l1__DOT__line_tag
                                              [1U] 
                                              == (vlSelf->mem_addr 
                                                  >> 0xbU)));
    vlSelf->mmu__DOT__ram_r_data = ((vlSelf->mmu__DOT__u_ram__DOT__data_array
                                     [(0x1ffffU & ((IData)(3U) 
                                                   + vlSelf->mmu__DOT__ram_addr))] 
                                     << 0x18U) | ((
                                                   vlSelf->mmu__DOT__u_ram__DOT__data_array
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->mmu__DOT__ram_addr))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->mmu__DOT__u_ram__DOT__data_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->mmu__DOT__ram_addr))] 
                                                      << 8U) 
                                                     | vlSelf->mmu__DOT__u_ram__DOT__data_array
                                                     [
                                                     (0x1ffffU 
                                                      & vlSelf->mmu__DOT__ram_addr)])));
    vlSelf->mmu__DOT__u_l1__DOT__line_word = 0U;
    if (vlSelf->mmu__DOT__u_l1__DOT__hit_way0) {
        vlSelf->mmu__DOT__u_l1__DOT__line_word = ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->mem_addr 
                                                       >> 2U)))
                                                   ? 
                                                  vlSelf->mmu__DOT__u_l1__DOT__line_data
                                                  [0U][0U]
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->mem_addr 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->mmu__DOT__u_l1__DOT__line_data
                                                   [0U][1U]
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->mem_addr 
                                                         >> 2U)))
                                                     ? 
                                                    vlSelf->mmu__DOT__u_l1__DOT__line_data
                                                    [0U][2U]
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->mem_addr 
                                                          >> 2U)))
                                                      ? 
                                                     vlSelf->mmu__DOT__u_l1__DOT__line_data
                                                     [0U][3U]
                                                      : 0U))));
    } else if (vlSelf->mmu__DOT__u_l1__DOT__hit_way1) {
        vlSelf->mmu__DOT__u_l1__DOT__line_word = ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->mem_addr 
                                                       >> 2U)))
                                                   ? 
                                                  vlSelf->mmu__DOT__u_l1__DOT__line_data
                                                  [1U][0U]
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->mem_addr 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->mmu__DOT__u_l1__DOT__line_data
                                                   [1U][1U]
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->mem_addr 
                                                         >> 2U)))
                                                     ? 
                                                    vlSelf->mmu__DOT__u_l1__DOT__line_data
                                                    [1U][2U]
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->mem_addr 
                                                          >> 2U)))
                                                      ? 
                                                     vlSelf->mmu__DOT__u_l1__DOT__line_data
                                                     [1U][3U]
                                                      : 0U))));
    }
    vlSelf->mmu__DOT__cache_hit_int = ((IData)(vlSelf->mmu__DOT__u_l1__DOT__hit_way0) 
                                       | (IData)(vlSelf->mmu__DOT__u_l1__DOT__hit_way1));
    vlSelf->cache_hit = vlSelf->mmu__DOT__cache_hit_int;
}

VL_ATTR_COLD void Vmmu___024root___eval_initial(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vmmu___024root___eval_settle(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___eval_settle\n"); );
    // Body
    Vmmu___024root___settle__TOP__0(vlSelf);
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
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->mmu__DOT__u_l1__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->mmu__DOT__u_l1__DOT__valid_array[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l1__DOT__data_array[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->mmu__DOT__u_l1__DOT__lru_bit[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mmu__DOT__u_l1__DOT__line_tag[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mmu__DOT__u_l1__DOT__line_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l1__DOT__line_data[__Vi0]);
    }
    vlSelf->mmu__DOT__u_l1__DOT__hit_way0 = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__u_l1__DOT__hit_way1 = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__u_l1__DOT__line_word = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l1__DOT__repl_way = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__u_l1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk2__DOT__v0 = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk2__DOT__v1 = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk3__DOT__w = 0;
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
