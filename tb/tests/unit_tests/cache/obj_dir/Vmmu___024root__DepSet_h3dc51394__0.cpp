// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmmu.h for the primary calling header

#include "verilated.h"

#include "Vmmu___024root.h"

VL_INLINE_OPT void Vmmu___024root___sequent__TOP__0(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___sequent__TOP__0\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v0;
    CData/*7:0*/ __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v0;
    IData/*16:0*/ __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v1;
    CData/*7:0*/ __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v1;
    IData/*16:0*/ __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v2;
    CData/*7:0*/ __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v2;
    IData/*16:0*/ __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v3;
    CData/*7:0*/ __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v3;
    // Body
    __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v0 = 0U;
    if (vlSelf->mmu__DOT__ram_we) {
        __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v0 
            = (0xffU & vlSelf->mem_w_data);
        __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v0 = 1U;
        __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v0 
            = (0x1ffffU & vlSelf->mmu__DOT__ram_addr);
        __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v1 
            = (0xffU & (vlSelf->mem_w_data >> 8U));
        __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v1 
            = (0x1ffffU & ((IData)(1U) + vlSelf->mmu__DOT__ram_addr));
        __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v2 
            = (0xffU & (vlSelf->mem_w_data >> 0x10U));
        __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v2 
            = (0x1ffffU & ((IData)(2U) + vlSelf->mmu__DOT__ram_addr));
        __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v3 
            = (vlSelf->mem_w_data >> 0x18U);
        __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v3 
            = (0x1ffffU & ((IData)(3U) + vlSelf->mmu__DOT__ram_addr));
    }
    if (__Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v0) {
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v0] 
            = __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v0;
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v1] 
            = __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v1;
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v2] 
            = __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v2;
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v3] 
            = __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v3;
    }
}

VL_INLINE_OPT void Vmmu___024root___sequent__TOP__1(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___sequent__TOP__1\n"); );
    // Init
    CData/*1:0*/ __Vdly__mmu__DOT__state;
    CData/*1:0*/ __Vdly__mmu__DOT__fill_count;
    IData/*31:0*/ __Vdly__mmu__DOT__miss_addr_base;
    IData/*31:0*/ __Vdly__mmu__DOT__saved_mem_addr;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v0;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v0;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v0;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v1;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v1;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v1;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v1;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v2;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v2;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v2;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v2;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v3;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v3;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v3;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v3;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v4;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v4;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v4;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v4;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v5;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v5;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v5;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v5;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v6;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v6;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v6;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v6;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v7;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v7;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v7;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v7;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__tag_array__v0;
    IData/*19:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__tag_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__tag_array__v0;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__valid_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__valid_array__v0;
    // Body
    __Vdly__mmu__DOT__saved_mem_addr = vlSelf->mmu__DOT__saved_mem_addr;
    __Vdly__mmu__DOT__miss_addr_base = vlSelf->mmu__DOT__miss_addr_base;
    __Vdly__mmu__DOT__fill_count = vlSelf->mmu__DOT__fill_count;
    __Vdly__mmu__DOT__state = vlSelf->mmu__DOT__state;
    __Vdlyvset__mmu__DOT__u_l1__DOT__valid_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__tag_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v1 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v2 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v3 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v4 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v5 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v6 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v7 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->mmu__DOT__fill_en) {
            if (vlSelf->mmu__DOT__fill_mark_valid) {
                __Vdlyvset__mmu__DOT__u_l1__DOT__valid_array__v0 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__valid_array__v0 
                    = (0xffU & (vlSelf->mmu__DOT__fill_addr 
                                >> 4U));
                __Vdlyvval__mmu__DOT__u_l1__DOT__tag_array__v0 
                    = (vlSelf->mmu__DOT__fill_addr 
                       >> 0xcU);
                __Vdlyvset__mmu__DOT__u_l1__DOT__tag_array__v0 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__tag_array__v0 
                    = (0xffU & (vlSelf->mmu__DOT__fill_addr 
                                >> 4U));
            }
            if ((0U == (3U & (vlSelf->mmu__DOT__fill_addr 
                              >> 2U)))) {
                __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v4 
                    = vlSelf->mmu__DOT__fill_data;
                __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v4 = 1U;
                __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v4 = 0U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v4 
                    = (0xffU & (vlSelf->mmu__DOT__fill_addr 
                                >> 4U));
            } else if ((1U == (3U & (vlSelf->mmu__DOT__fill_addr 
                                     >> 2U)))) {
                __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v5 
                    = vlSelf->mmu__DOT__fill_data;
                __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v5 = 1U;
                __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v5 = 0x20U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v5 
                    = (0xffU & (vlSelf->mmu__DOT__fill_addr 
                                >> 4U));
            } else if ((2U == (3U & (vlSelf->mmu__DOT__fill_addr 
                                     >> 2U)))) {
                __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v6 
                    = vlSelf->mmu__DOT__fill_data;
                __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v6 = 1U;
                __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v6 = 0x40U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v6 
                    = (0xffU & (vlSelf->mmu__DOT__fill_addr 
                                >> 4U));
            } else if ((3U == (3U & (vlSelf->mmu__DOT__fill_addr 
                                     >> 2U)))) {
                __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v7 
                    = vlSelf->mmu__DOT__fill_data;
                __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v7 = 1U;
                __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v7 = 0x60U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v7 
                    = (0xffU & (vlSelf->mmu__DOT__fill_addr 
                                >> 4U));
            }
        }
        if ((((IData)(vlSelf->mem_valid) & (IData)(vlSelf->mem_we)) 
             & (IData)(vlSelf->mmu__DOT__cache_hit_int))) {
            if ((0U == (3U & (vlSelf->mem_addr >> 2U)))) {
                __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v0 
                    = vlSelf->mem_w_data;
                __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v0 = 1U;
                __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v0 = 0U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v0 
                    = (0xffU & (vlSelf->mem_addr >> 4U));
            } else if ((1U == (3U & (vlSelf->mem_addr 
                                     >> 2U)))) {
                __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v1 
                    = vlSelf->mem_w_data;
                __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v1 = 1U;
                __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v1 = 0x20U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v1 
                    = (0xffU & (vlSelf->mem_addr >> 4U));
            } else if ((2U == (3U & (vlSelf->mem_addr 
                                     >> 2U)))) {
                __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v2 
                    = vlSelf->mem_w_data;
                __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v2 = 1U;
                __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v2 = 0x40U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v2 
                    = (0xffU & (vlSelf->mem_addr >> 4U));
            } else if ((3U == (3U & (vlSelf->mem_addr 
                                     >> 2U)))) {
                __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v3 
                    = vlSelf->mem_w_data;
                __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v3 = 1U;
                __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v3 = 0x60U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v3 
                    = (0xffU & (vlSelf->mem_addr >> 4U));
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->mmu__DOT__u_l1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->mmu__DOT__u_l1__DOT__i)) {
            vlSelf->mmu__DOT__u_l1__DOT__valid_array[(0xffU 
                                                      & vlSelf->mmu__DOT__u_l1__DOT__i)] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__tag_array[(0xffU 
                                                    & vlSelf->mmu__DOT__u_l1__DOT__i)] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__i)][0U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__i)][1U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__i)][2U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__i)][3U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__i = ((IData)(1U) 
                                              + vlSelf->mmu__DOT__u_l1__DOT__i);
        }
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__valid_array__v0) {
        vlSelf->mmu__DOT__u_l1__DOT__valid_array[__Vdlyvdim0__mmu__DOT__u_l1__DOT__valid_array__v0] = 1U;
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__tag_array__v0) {
        vlSelf->mmu__DOT__u_l1__DOT__tag_array[__Vdlyvdim0__mmu__DOT__u_l1__DOT__tag_array__v0] 
            = __Vdlyvval__mmu__DOT__u_l1__DOT__tag_array__v0;
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v0) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v0), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v0], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v0);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v1) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v1), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v1], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v1);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v2) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v2), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v2], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v2);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v3) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v3), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v3], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v3);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v4) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v4), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v4], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v4);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v5) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v5), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v5], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v5);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v6) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v6), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v6], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v6);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v7) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v7), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v7], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v7);
    }
    if (vlSelf->rst) {
        __Vdly__mmu__DOT__state = 0U;
        __Vdly__mmu__DOT__fill_count = 0U;
        __Vdly__mmu__DOT__miss_addr_base = 0U;
        __Vdly__mmu__DOT__saved_mem_addr = 0U;
        vlSelf->mem_r_data = 0U;
        vlSelf->mem_ready = 0U;
    } else {
        vlSelf->mem_ready = 0U;
        vlSelf->mmu__DOT__fill_en = 0U;
        vlSelf->mmu__DOT__fill_mark_valid = 0U;
        if ((0U == (IData)(vlSelf->mmu__DOT__state))) {
            if (vlSelf->mem_valid) {
                __Vdly__mmu__DOT__saved_mem_addr = vlSelf->mem_addr;
                if (vlSelf->mem_we) {
                    vlSelf->mem_ready = 1U;
                } else if (vlSelf->mmu__DOT__cache_hit_int) {
                    vlSelf->mem_r_data = ((0U == (3U 
                                                  & (vlSelf->mem_addr 
                                                     >> 2U)))
                                           ? vlSelf->mmu__DOT__u_l1__DOT__line_data[0U]
                                           : ((1U == 
                                               (3U 
                                                & (vlSelf->mem_addr 
                                                   >> 2U)))
                                               ? vlSelf->mmu__DOT__u_l1__DOT__line_data[1U]
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->mem_addr 
                                                       >> 2U)))
                                                   ? 
                                                  vlSelf->mmu__DOT__u_l1__DOT__line_data[2U]
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->mem_addr 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->mmu__DOT__u_l1__DOT__line_data[3U]
                                                    : 0U))));
                    vlSelf->mem_ready = 1U;
                } else {
                    __Vdly__mmu__DOT__miss_addr_base 
                        = (0xfffffff0U & vlSelf->mem_addr);
                    __Vdly__mmu__DOT__fill_count = 0U;
                    __Vdly__mmu__DOT__state = 1U;
                }
            }
        } else if (VL_LIKELY((1U == (IData)(vlSelf->mmu__DOT__state)))) {
            vlSelf->mmu__DOT__fill_en = 1U;
            vlSelf->mmu__DOT__fill_addr = (vlSelf->mmu__DOT__miss_addr_base 
                                           + ((IData)(vlSelf->mmu__DOT__fill_count) 
                                              << 2U));
            vlSelf->mmu__DOT__fill_data = vlSelf->mmu__DOT__ram_r_data;
            if (((IData)(vlSelf->mmu__DOT__fill_count) 
                 == (3U & (vlSelf->mmu__DOT__saved_mem_addr 
                           >> 2U)))) {
                vlSelf->mem_r_data = vlSelf->mmu__DOT__ram_r_data;
            }
            if ((3U == (IData)(vlSelf->mmu__DOT__fill_count))) {
                vlSelf->mmu__DOT__fill_mark_valid = 1U;
                __Vdly__mmu__DOT__state = 0U;
                vlSelf->mem_ready = 1U;
            } else {
                __Vdly__mmu__DOT__fill_count = (3U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->mmu__DOT__fill_count)));
            }
        } else {
            VL_WRITEF("Not valid state\n");
        }
    }
    vlSelf->mmu__DOT__saved_mem_addr = __Vdly__mmu__DOT__saved_mem_addr;
    vlSelf->mmu__DOT__fill_count = __Vdly__mmu__DOT__fill_count;
    vlSelf->mmu__DOT__miss_addr_base = __Vdly__mmu__DOT__miss_addr_base;
    vlSelf->mmu__DOT__state = __Vdly__mmu__DOT__state;
}

VL_INLINE_OPT void Vmmu___024root___combo__TOP__0(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->mmu__DOT__u_l1__DOT__line_data[0U] = vlSelf->mmu__DOT__u_l1__DOT__data_array
        [(0xffU & (vlSelf->mem_addr >> 4U))][0U];
    vlSelf->mmu__DOT__u_l1__DOT__line_data[1U] = vlSelf->mmu__DOT__u_l1__DOT__data_array
        [(0xffU & (vlSelf->mem_addr >> 4U))][1U];
    vlSelf->mmu__DOT__u_l1__DOT__line_data[2U] = vlSelf->mmu__DOT__u_l1__DOT__data_array
        [(0xffU & (vlSelf->mem_addr >> 4U))][2U];
    vlSelf->mmu__DOT__u_l1__DOT__line_data[3U] = vlSelf->mmu__DOT__u_l1__DOT__data_array
        [(0xffU & (vlSelf->mem_addr >> 4U))][3U];
    vlSelf->mmu__DOT__cache_hit_int = (vlSelf->mmu__DOT__u_l1__DOT__valid_array
                                       [(0xffU & (vlSelf->mem_addr 
                                                  >> 4U))] 
                                       & (vlSelf->mmu__DOT__u_l1__DOT__tag_array
                                          [(0xffU & 
                                            (vlSelf->mem_addr 
                                             >> 4U))] 
                                          == (vlSelf->mem_addr 
                                              >> 0xcU)));
    if ((0U == (IData)(vlSelf->mmu__DOT__state))) {
        vlSelf->mmu__DOT__ram_we = ((IData)(vlSelf->mem_valid) 
                                    & (IData)(vlSelf->mem_we));
        vlSelf->mmu__DOT__ram_addr = vlSelf->mem_addr;
    } else {
        vlSelf->mmu__DOT__ram_we = 0U;
        vlSelf->mmu__DOT__ram_addr = ((1U == (IData)(vlSelf->mmu__DOT__state))
                                       ? (vlSelf->mmu__DOT__miss_addr_base 
                                          + ((IData)(vlSelf->mmu__DOT__fill_count) 
                                             << 2U))
                                       : 0U);
    }
    vlSelf->cache_hit = vlSelf->mmu__DOT__cache_hit_int;
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
}

void Vmmu___024root___eval(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vmmu___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vmmu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vmmu___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vmmu___024root___eval_debug_assertions(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->mem_valid & 0xfeU))) {
        Verilated::overWidthError("mem_valid");}
    if (VL_UNLIKELY((vlSelf->mem_we & 0xfeU))) {
        Verilated::overWidthError("mem_we");}
}
#endif  // VL_DEBUG
