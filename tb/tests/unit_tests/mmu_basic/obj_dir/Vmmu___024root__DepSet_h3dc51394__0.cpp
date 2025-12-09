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
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v1;
    IData/*16:0*/ __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v2;
    CData/*7:0*/ __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v2;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v2;
    IData/*16:0*/ __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v3;
    CData/*7:0*/ __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v3;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v3;
    // Body
    __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v1 = 0U;
    __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v2 = 0U;
    __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v3 = 0U;
    if (vlSelf->mem_we) {
        if ((1U & (IData)(vlSelf->mem_byte_en))) {
            __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v0 
                = (0xffU & vlSelf->mem_w_data);
            __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v0 = 1U;
            __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v0 
                = (0x1ffffU & vlSelf->mmu__DOT__ram_addr);
        }
        if ((2U & (IData)(vlSelf->mem_byte_en))) {
            __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v1 
                = (0xffU & (vlSelf->mem_w_data >> 8U));
            __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v1 = 1U;
            __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelf->mmu__DOT__ram_addr));
        }
        if ((4U & (IData)(vlSelf->mem_byte_en))) {
            __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v2 
                = (0xffU & (vlSelf->mem_w_data >> 0x10U));
            __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v2 = 1U;
            __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelf->mmu__DOT__ram_addr));
        }
        if ((8U & (IData)(vlSelf->mem_byte_en))) {
            __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v3 
                = (vlSelf->mem_w_data >> 0x18U);
            __Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v3 = 1U;
            __Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelf->mmu__DOT__ram_addr));
        }
    }
    if (__Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v0) {
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v0] 
            = __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v0;
    }
    if (__Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v1) {
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v1] 
            = __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v1;
    }
    if (__Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v2) {
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v2] 
            = __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v2;
    }
    if (__Vdlyvset__mmu__DOT__u_ram__DOT__data_array__v3) {
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_ram__DOT__data_array__v3] 
            = __Vdlyvval__mmu__DOT__u_ram__DOT__data_array__v3;
    }
}

VL_INLINE_OPT void Vmmu___024root___sequent__TOP__1(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__mmu__DOT__state;
    IData/*31:0*/ __Vdly__mmu__DOT__saved_addr;
    CData/*1:0*/ __Vdly__mmu__DOT__saved_word_index;
    CData/*1:0*/ __Vdly__mmu__DOT__fill_count;
    VlWide<4>/*127:0*/ __Vdly__mmu__DOT__block_buf;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__rr_ptr__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v0;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__rr_ptr__v1;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v1;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__rr_ptr__v2;
    CData/*0:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__rr_ptr__v2;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v2;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__valid_array__v0;
    CData/*0:0*/ __Vdlyvdim1__mmu__DOT__u_l1__DOT__valid_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__valid_array__v0;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v0;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v0;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v0;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v1;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v1;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v1;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v1;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v2;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v2;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v2;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v2;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v3;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v3;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v3;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v3;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v4;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v4;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v4;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v4;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v5;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v5;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v5;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v5;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v6;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v6;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v6;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v6;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v7;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v7;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v7;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v7;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v8;
    CData/*0:0*/ __Vdlyvdim1__mmu__DOT__u_l1__DOT__data_array__v8;
    VlWide<4>/*127:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v8;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v8;
    CData/*6:0*/ __Vdlyvdim0__mmu__DOT__u_l1__DOT__tag_array__v0;
    CData/*0:0*/ __Vdlyvdim1__mmu__DOT__u_l1__DOT__tag_array__v0;
    IData/*20:0*/ __Vdlyvval__mmu__DOT__u_l1__DOT__tag_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l1__DOT__tag_array__v0;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v0;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v1;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v1;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v2;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v2;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v3;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v3;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v4;
    CData/*1:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__rr_ptr__v4;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v4;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v0;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v0;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v0;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v1;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v1;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v1;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v1;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v2;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v2;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v2;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v2;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v3;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v3;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v3;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v3;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v4;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v4;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v4;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v4;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v5;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v5;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v5;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v5;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v6;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v6;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v6;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v6;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v7;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v7;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v7;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v7;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v8;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v8;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v8;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v8;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v9;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v9;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v9;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v9;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v10;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v10;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v10;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v10;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v11;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v11;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v11;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v11;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v12;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v12;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v12;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v12;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v13;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v13;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v13;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v13;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v14;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v14;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v14;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v14;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v15;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v15;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v15;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v15;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v16;
    CData/*1:0*/ __Vdlyvdim1__mmu__DOT__u_l2__DOT__data_array__v16;
    VlWide<4>/*127:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v16;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v16;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__tag_array__v0;
    CData/*1:0*/ __Vdlyvdim1__mmu__DOT__u_l2__DOT__tag_array__v0;
    IData/*19:0*/ __Vdlyvval__mmu__DOT__u_l2__DOT__tag_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__tag_array__v0;
    CData/*7:0*/ __Vdlyvdim0__mmu__DOT__u_l2__DOT__valid_array__v0;
    CData/*1:0*/ __Vdlyvdim1__mmu__DOT__u_l2__DOT__valid_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l2__DOT__valid_array__v0;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__valid_array__v0;
    CData/*2:0*/ __Vdlyvdim1__mmu__DOT__u_l3__DOT__valid_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__valid_array__v0;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__tag_array__v0;
    CData/*2:0*/ __Vdlyvdim1__mmu__DOT__u_l3__DOT__tag_array__v0;
    IData/*18:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__tag_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__tag_array__v0;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v0;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v0;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v0;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v1;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v1;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v1;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v1;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v2;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v2;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v2;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v2;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v3;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v3;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v3;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v3;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v4;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v4;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v4;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v4;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v5;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v5;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v5;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v5;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v6;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v6;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v6;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v6;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v7;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v7;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v7;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v7;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v8;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v8;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v8;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v8;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v9;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v9;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v9;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v9;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v10;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v10;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v10;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v10;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v11;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v11;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v11;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v11;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v12;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v12;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v12;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v12;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v13;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v13;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v13;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v13;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v14;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v14;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v14;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v14;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v15;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v15;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v15;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v15;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v16;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v16;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v16;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v16;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v17;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v17;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v17;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v17;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v18;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v18;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v18;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v18;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v19;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v19;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v19;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v19;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v20;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v20;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v20;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v20;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v21;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v21;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v21;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v21;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v22;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v22;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v22;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v22;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v23;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v23;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v23;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v23;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v24;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v24;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v24;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v24;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v25;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v25;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v25;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v25;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v26;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v26;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v26;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v26;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v27;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v27;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v27;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v27;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v28;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v28;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v28;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v28;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v29;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v29;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v29;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v29;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v30;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v30;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v30;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v30;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v31;
    CData/*6:0*/ __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v31;
    IData/*31:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v31;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v31;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v32;
    CData/*2:0*/ __Vdlyvdim1__mmu__DOT__u_l3__DOT__data_array__v32;
    VlWide<4>/*127:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v32;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v32;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v0;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v0;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v1;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v1;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v2;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v2;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v3;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v3;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v4;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v4;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v5;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v5;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v6;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v6;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v7;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v7;
    SData/*8:0*/ __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v8;
    CData/*2:0*/ __Vdlyvval__mmu__DOT__u_l3__DOT__rr_ptr__v8;
    CData/*0:0*/ __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v8;
    // Body
    __Vdly__mmu__DOT__saved_word_index = vlSelf->mmu__DOT__saved_word_index;
    __Vdly__mmu__DOT__fill_count = vlSelf->mmu__DOT__fill_count;
    __Vdly__mmu__DOT__saved_addr = vlSelf->mmu__DOT__saved_addr;
    __Vdly__mmu__DOT__block_buf[0U] = vlSelf->mmu__DOT__block_buf[0U];
    __Vdly__mmu__DOT__block_buf[1U] = vlSelf->mmu__DOT__block_buf[1U];
    __Vdly__mmu__DOT__block_buf[2U] = vlSelf->mmu__DOT__block_buf[2U];
    __Vdly__mmu__DOT__block_buf[3U] = vlSelf->mmu__DOT__block_buf[3U];
    __Vdly__mmu__DOT__state = vlSelf->mmu__DOT__state;
    __Vdlyvset__mmu__DOT__u_l3__DOT__valid_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__valid_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__valid_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__tag_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__tag_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__tag_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v1 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v2 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v1 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v2 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v3 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v4 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v1 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v2 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v3 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v4 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v5 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v6 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v7 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v8 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v1 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v2 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v3 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v4 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v5 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v6 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v7 = 0U;
    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v8 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((((IData)(vlSelf->mem_valid) & (IData)(vlSelf->mem_we)) 
             & (0U != (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)))) {
            vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__w = 4U;
            if ((1U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v0 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v0 
                    = (0xffU & (vlSelf->mem_addr >> 4U));
            }
            if ((2U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v1 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v1 
                    = (0xffU & (vlSelf->mem_addr >> 4U));
            }
            if ((4U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v2 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v2 
                    = (0xffU & (vlSelf->mem_addr >> 4U));
            }
            if ((8U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v3 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v3 
                    = (0xffU & (vlSelf->mem_addr >> 4U));
            }
        }
        if ((((IData)(vlSelf->mem_valid) & (IData)(vlSelf->mem_we)) 
             & (0U != (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)))) {
            vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__w = 8U;
            if ((1U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v0 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v0 
                    = (0x1ffU & (vlSelf->mem_addr >> 4U));
            }
            if ((2U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v1 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v1 
                    = (0x1ffU & (vlSelf->mem_addr >> 4U));
            }
            if ((4U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v2 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v2 
                    = (0x1ffU & (vlSelf->mem_addr >> 4U));
            }
            if ((8U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v3 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v3 
                    = (0x1ffU & (vlSelf->mem_addr >> 4U));
            }
            if ((0x10U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v4 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v4 
                    = (0x1ffU & (vlSelf->mem_addr >> 4U));
            }
            if ((0x20U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v5 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v5 
                    = (0x1ffU & (vlSelf->mem_addr >> 4U));
            }
            if ((0x40U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v6 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v6 
                    = (0x1ffU & (vlSelf->mem_addr >> 4U));
            }
            if ((0x80U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v7 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v7 
                    = (0x1ffU & (vlSelf->mem_addr >> 4U));
            }
        }
        if ((((IData)(vlSelf->mem_valid) & (IData)(vlSelf->mem_we)) 
             & (0U != (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit)))) {
            vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__ww = 2U;
            if ((1U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v0 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__rr_ptr__v0 
                    = (0x7fU & (vlSelf->mem_addr >> 4U));
            }
            if ((2U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))) {
                __Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v1 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__rr_ptr__v1 
                    = (0x7fU & (vlSelf->mem_addr >> 4U));
            }
        }
        if (vlSelf->mmu__DOT__l3_fill_en) {
            if (vlSelf->mmu__DOT__l3_fill_mark_valid) {
                __Vdlyvset__mmu__DOT__u_l3__DOT__valid_array__v0 = 1U;
                __Vdlyvdim1__mmu__DOT__u_l3__DOT__valid_array__v0 
                    = vlSelf->mmu__DOT__u_l3__DOT__repl_way;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__valid_array__v0 
                    = (0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                                 >> 4U));
                __Vdlyvval__mmu__DOT__u_l3__DOT__tag_array__v0 
                    = (vlSelf->mmu__DOT__l3_fill_addr 
                       >> 0xdU);
                __Vdlyvset__mmu__DOT__u_l3__DOT__tag_array__v0 = 1U;
                __Vdlyvdim1__mmu__DOT__u_l3__DOT__tag_array__v0 
                    = vlSelf->mmu__DOT__u_l3__DOT__repl_way;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__tag_array__v0 
                    = (0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                                 >> 4U));
                __Vdlyvval__mmu__DOT__u_l3__DOT__rr_ptr__v8 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->mmu__DOT__u_l3__DOT__repl_way)));
                __Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v8 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v8 
                    = (0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                                 >> 4U));
            }
        }
        if (vlSelf->mmu__DOT__l2_fill_en) {
            if (vlSelf->mmu__DOT__l2_fill_mark_valid) {
                __Vdlyvset__mmu__DOT__u_l2__DOT__valid_array__v0 = 1U;
                __Vdlyvdim1__mmu__DOT__u_l2__DOT__valid_array__v0 
                    = vlSelf->mmu__DOT__u_l2__DOT__repl_way;
                __Vdlyvdim0__mmu__DOT__u_l2__DOT__valid_array__v0 
                    = (0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                                >> 4U));
                __Vdlyvval__mmu__DOT__u_l2__DOT__tag_array__v0 
                    = (vlSelf->mmu__DOT__l2_fill_addr 
                       >> 0xcU);
                __Vdlyvset__mmu__DOT__u_l2__DOT__tag_array__v0 = 1U;
                __Vdlyvdim1__mmu__DOT__u_l2__DOT__tag_array__v0 
                    = vlSelf->mmu__DOT__u_l2__DOT__repl_way;
                __Vdlyvdim0__mmu__DOT__u_l2__DOT__tag_array__v0 
                    = (0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                                >> 4U));
                __Vdlyvval__mmu__DOT__u_l2__DOT__rr_ptr__v4 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->mmu__DOT__u_l2__DOT__repl_way)));
                __Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v4 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v4 
                    = (0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                                >> 4U));
            }
        }
        if (vlSelf->mmu__DOT__l1_fill_en) {
            if (vlSelf->mmu__DOT__l1_fill_mark_valid) {
                __Vdlyvset__mmu__DOT__u_l1__DOT__valid_array__v0 = 1U;
                __Vdlyvdim1__mmu__DOT__u_l1__DOT__valid_array__v0 
                    = vlSelf->mmu__DOT__u_l1__DOT__repl_way;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__valid_array__v0 
                    = (0x7fU & (vlSelf->mmu__DOT__l1_fill_addr 
                                >> 4U));
                __Vdlyvval__mmu__DOT__u_l1__DOT__tag_array__v0 
                    = (vlSelf->mmu__DOT__l1_fill_addr 
                       >> 0xbU);
                __Vdlyvset__mmu__DOT__u_l1__DOT__tag_array__v0 = 1U;
                __Vdlyvdim1__mmu__DOT__u_l1__DOT__tag_array__v0 
                    = vlSelf->mmu__DOT__u_l1__DOT__repl_way;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__tag_array__v0 
                    = (0x7fU & (vlSelf->mmu__DOT__l1_fill_addr 
                                >> 4U));
                __Vdlyvval__mmu__DOT__u_l1__DOT__rr_ptr__v2 
                    = (1U & ((IData)(1U) + (IData)(vlSelf->mmu__DOT__u_l1__DOT__repl_way)));
                __Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v2 = 1U;
                __Vdlyvdim0__mmu__DOT__u_l1__DOT__rr_ptr__v2 
                    = (0x7fU & (vlSelf->mmu__DOT__l1_fill_addr 
                                >> 4U));
            }
        }
    }
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v1 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v2 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v3 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v4 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v5 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v6 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v7 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v8 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v9 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v10 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v11 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v12 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v13 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v14 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v15 = 0U;
    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v16 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v0 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v1 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v2 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v3 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v4 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v5 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v6 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v7 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v8 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v9 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v10 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v11 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v12 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v13 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v14 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v15 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v16 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v17 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v18 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v19 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v20 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v21 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v22 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v23 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v24 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v25 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v26 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v27 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v28 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v29 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v30 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v31 = 0U;
    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->mmu__DOT__u_l1__DOT__s = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->mmu__DOT__u_l1__DOT__s)) {
            vlSelf->mmu__DOT__u_l1__DOT__valid_array[(0x7fU 
                                                      & vlSelf->mmu__DOT__u_l1__DOT__s)][0U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__tag_array[(0x7fU 
                                                    & vlSelf->mmu__DOT__u_l1__DOT__s)][0U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__s)][0U][0U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__s)][0U][1U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__s)][0U][2U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__s)][0U][3U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__valid_array[(0x7fU 
                                                      & vlSelf->mmu__DOT__u_l1__DOT__s)][1U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__tag_array[(0x7fU 
                                                    & vlSelf->mmu__DOT__u_l1__DOT__s)][1U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__s)][1U][0U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__s)][1U][1U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__s)][1U][2U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                     & vlSelf->mmu__DOT__u_l1__DOT__s)][1U][3U] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__w = 2U;
            vlSelf->mmu__DOT__u_l1__DOT__rr_ptr[(0x7fU 
                                                 & vlSelf->mmu__DOT__u_l1__DOT__s)] = 0U;
            vlSelf->mmu__DOT__u_l1__DOT__s = ((IData)(1U) 
                                              + vlSelf->mmu__DOT__u_l1__DOT__s);
        }
        vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)) {
            vlSelf->mmu__DOT__u_l2__DOT__valid_array[(0xffU 
                                                      & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][0U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__tag_array[(0xffU 
                                                    & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][0U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][0U][0U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][0U][1U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][0U][2U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][0U][3U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__valid_array[(0xffU 
                                                      & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][1U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__tag_array[(0xffU 
                                                    & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][1U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][1U][0U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][1U][1U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][1U][2U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][1U][3U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__valid_array[(0xffU 
                                                      & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][2U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__tag_array[(0xffU 
                                                    & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][2U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][2U][0U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][2U][1U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][2U][2U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][2U][3U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__valid_array[(0xffU 
                                                      & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][3U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__tag_array[(0xffU 
                                                    & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][3U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][3U][0U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][3U][1U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][3U][2U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                     & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)][3U][3U] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w = 4U;
            vlSelf->mmu__DOT__u_l2__DOT__rr_ptr[(0xffU 
                                                 & vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s)] = 0U;
            vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s 
                = ((IData)(1U) + vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s);
        }
        vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)) {
            vlSelf->mmu__DOT__u_l3__DOT__valid_array[(0x1ffU 
                                                      & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][0U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__tag_array[(0x1ffU 
                                                    & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][0U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][0U][0U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][0U][1U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][0U][2U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][0U][3U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__valid_array[(0x1ffU 
                                                      & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][1U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__tag_array[(0x1ffU 
                                                    & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][1U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][1U][0U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][1U][1U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][1U][2U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][1U][3U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__valid_array[(0x1ffU 
                                                      & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][2U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__tag_array[(0x1ffU 
                                                    & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][2U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][2U][0U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][2U][1U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][2U][2U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][2U][3U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__valid_array[(0x1ffU 
                                                      & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][3U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__tag_array[(0x1ffU 
                                                    & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][3U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][3U][0U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][3U][1U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][3U][2U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][3U][3U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__valid_array[(0x1ffU 
                                                      & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][4U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__tag_array[(0x1ffU 
                                                    & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][4U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][4U][0U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][4U][1U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][4U][2U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][4U][3U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__valid_array[(0x1ffU 
                                                      & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][5U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__tag_array[(0x1ffU 
                                                    & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][5U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][5U][0U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][5U][1U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][5U][2U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][5U][3U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__valid_array[(0x1ffU 
                                                      & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][6U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__tag_array[(0x1ffU 
                                                    & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][6U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][6U][0U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][6U][1U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][6U][2U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][6U][3U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__valid_array[(0x1ffU 
                                                      & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][7U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__tag_array[(0x1ffU 
                                                    & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][7U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][7U][0U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][7U][1U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][7U][2U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                     & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)][7U][3U] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w = 8U;
            vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[(0x1ffU 
                                                 & vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s)] = 0U;
            vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s 
                = ((IData)(1U) + vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s);
        }
        __Vdly__mmu__DOT__state = 0U;
        __Vdly__mmu__DOT__saved_addr = 0U;
        __Vdly__mmu__DOT__saved_word_index = 0U;
        __Vdly__mmu__DOT__fill_count = 0U;
        __Vdly__mmu__DOT__block_buf[0U] = 0U;
        __Vdly__mmu__DOT__block_buf[1U] = 0U;
        __Vdly__mmu__DOT__block_buf[2U] = 0U;
        __Vdly__mmu__DOT__block_buf[3U] = 0U;
        vlSelf->mmu__DOT__resp_valid = 0U;
        vlSelf->mmu__DOT__resp_word_index = 0U;
        vlSelf->mmu__DOT__l1_fill_en = 0U;
        vlSelf->mmu__DOT__l1_fill_addr = 0U;
        vlSelf->mmu__DOT__l1_fill_data[0U] = 0U;
        vlSelf->mmu__DOT__l1_fill_data[1U] = 0U;
        vlSelf->mmu__DOT__l1_fill_data[2U] = 0U;
        vlSelf->mmu__DOT__l1_fill_data[3U] = 0U;
        vlSelf->mmu__DOT__l1_fill_mark_valid = 0U;
        vlSelf->mmu__DOT__l2_fill_en = 0U;
        vlSelf->mmu__DOT__l2_fill_addr = 0U;
        vlSelf->mmu__DOT__l2_fill_data[0U] = 0U;
        vlSelf->mmu__DOT__l2_fill_data[1U] = 0U;
        vlSelf->mmu__DOT__l2_fill_data[2U] = 0U;
        vlSelf->mmu__DOT__l2_fill_data[3U] = 0U;
        vlSelf->mmu__DOT__l2_fill_mark_valid = 0U;
        vlSelf->mmu__DOT__l3_fill_en = 0U;
        vlSelf->mmu__DOT__l3_fill_addr = 0U;
        vlSelf->mmu__DOT__l3_fill_data[0U] = 0U;
        vlSelf->mmu__DOT__l3_fill_data[1U] = 0U;
        vlSelf->mmu__DOT__l3_fill_data[2U] = 0U;
        vlSelf->mmu__DOT__l3_fill_data[3U] = 0U;
        vlSelf->mmu__DOT__l3_fill_mark_valid = 0U;
        vlSelf->mmu__DOT__last_read_hit = 0U;
    } else {
        if ((((IData)(vlSelf->mem_valid) & (IData)(vlSelf->mem_we)) 
             & (0U != (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit)))) {
            if ((1U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [(0x7fU & (vlSelf->mem_addr 
                                   >> 4U))][0U][0U];
                    __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v0 
                        = ((vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l1__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l1__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v0 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v0 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v0 
                        = (0x7fU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [(0x7fU & (vlSelf->mem_addr 
                                   >> 4U))][0U][1U];
                    __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v1 
                        = ((vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l1__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l1__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v1 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v1 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v1 
                        = (0x7fU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [(0x7fU & (vlSelf->mem_addr 
                                   >> 4U))][0U][2U];
                    __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v2 
                        = ((vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l1__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l1__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v2 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v2 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v2 
                        = (0x7fU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [(0x7fU & (vlSelf->mem_addr 
                                   >> 4U))][0U][3U];
                    __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v3 
                        = ((vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l1__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l1__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v3 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v3 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v3 
                        = (0x7fU & (vlSelf->mem_addr 
                                    >> 4U));
                }
            }
            if ((2U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [(0x7fU & (vlSelf->mem_addr 
                                   >> 4U))][1U][0U];
                    __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v4 
                        = ((vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l1__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l1__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v4 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v4 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v4 
                        = (0x7fU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [(0x7fU & (vlSelf->mem_addr 
                                   >> 4U))][1U][1U];
                    __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v5 
                        = ((vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l1__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l1__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v5 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v5 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v5 
                        = (0x7fU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [(0x7fU & (vlSelf->mem_addr 
                                   >> 4U))][1U][2U];
                    __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v6 
                        = ((vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l1__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l1__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v6 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v6 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v6 
                        = (0x7fU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [(0x7fU & (vlSelf->mem_addr 
                                   >> 4U))][1U][3U];
                    __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v7 
                        = ((vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l1__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l1__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v7 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v7 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v7 
                        = (0x7fU & (vlSelf->mem_addr 
                                    >> 4U));
                }
            }
        }
        if (vlSelf->mmu__DOT__l1_fill_en) {
            __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v8[0U] 
                = vlSelf->mmu__DOT__l1_fill_data[0U];
            __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v8[1U] 
                = vlSelf->mmu__DOT__l1_fill_data[1U];
            __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v8[2U] 
                = vlSelf->mmu__DOT__l1_fill_data[2U];
            __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v8[3U] 
                = vlSelf->mmu__DOT__l1_fill_data[3U];
            __Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v8 = 1U;
            __Vdlyvdim1__mmu__DOT__u_l1__DOT__data_array__v8 
                = vlSelf->mmu__DOT__u_l1__DOT__repl_way;
            __Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v8 
                = (0x7fU & (vlSelf->mmu__DOT__l1_fill_addr 
                            >> 4U));
        }
        if ((((IData)(vlSelf->mem_valid) & (IData)(vlSelf->mem_we)) 
             & (0U != (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)))) {
            if ((1U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][0U][0U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v0 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v0 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v0 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v0 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][0U][1U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v1 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v1 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v1 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v1 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][0U][2U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v2 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v2 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v2 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v2 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][0U][3U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v3 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v3 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v3 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v3 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                }
            }
            if ((2U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][1U][0U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v4 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v4 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v4 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v4 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][1U][1U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v5 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v5 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v5 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v5 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][1U][2U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v6 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v6 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v6 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v6 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][1U][3U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v7 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v7 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v7 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v7 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                }
            }
            if ((4U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][2U][0U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v8 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v8 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v8 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v8 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][2U][1U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v9 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v9 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v9 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v9 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][2U][2U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v10 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v10 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v10 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v10 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][2U][3U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v11 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v11 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v11 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v11 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                }
            }
            if ((8U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][3U][0U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v12 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v12 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v12 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v12 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][3U][1U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v13 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v13 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v13 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v13 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][3U][2U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v14 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v14 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v14 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v14 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [(0xffU & (vlSelf->mem_addr 
                                   >> 4U))][3U][3U];
                    __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v15 
                        = ((vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l2__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l2__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v15 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v15 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v15 
                        = (0xffU & (vlSelf->mem_addr 
                                    >> 4U));
                }
            }
        }
        if (vlSelf->mmu__DOT__l2_fill_en) {
            __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v16[0U] 
                = vlSelf->mmu__DOT__l2_fill_data[0U];
            __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v16[1U] 
                = vlSelf->mmu__DOT__l2_fill_data[1U];
            __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v16[2U] 
                = vlSelf->mmu__DOT__l2_fill_data[2U];
            __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v16[3U] 
                = vlSelf->mmu__DOT__l2_fill_data[3U];
            __Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v16 = 1U;
            __Vdlyvdim1__mmu__DOT__u_l2__DOT__data_array__v16 
                = vlSelf->mmu__DOT__u_l2__DOT__repl_way;
            __Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v16 
                = (0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                            >> 4U));
        }
        if ((((IData)(vlSelf->mem_valid) & (IData)(vlSelf->mem_we)) 
             & (0U != (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)))) {
            if ((1U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][0U][0U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v0 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v0 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v0 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v0 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][0U][1U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v1 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v1 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v1 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v1 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][0U][2U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v2 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v2 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v2 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v2 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][0U][3U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v3 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v3 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v3 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v3 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                }
            }
            if ((2U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][1U][0U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v4 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v4 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v4 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v4 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][1U][1U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v5 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v5 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v5 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v5 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][1U][2U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v6 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v6 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v6 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v6 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][1U][3U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v7 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v7 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v7 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v7 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                }
            }
            if ((4U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][2U][0U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v8 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v8 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v8 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v8 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][2U][1U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v9 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v9 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v9 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v9 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][2U][2U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v10 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v10 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v10 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v10 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][2U][3U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v11 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v11 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v11 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v11 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                }
            }
            if ((8U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][3U][0U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v12 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v12 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v12 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v12 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][3U][1U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v13 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v13 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v13 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v13 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][3U][2U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v14 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v14 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v14 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v14 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][3U][3U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v15 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v15 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v15 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v15 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                }
            }
            if ((0x10U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][4U][0U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v16 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v16 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v16 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v16 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][4U][1U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v17 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v17 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v17 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v17 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][4U][2U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v18 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v18 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v18 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v18 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][4U][3U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v19 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v19 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v19 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v19 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                }
            }
            if ((0x20U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][5U][0U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v20 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v20 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v20 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v20 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][5U][1U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v21 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v21 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v21 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v21 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][5U][2U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v22 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v22 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v22 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v22 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][5U][3U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v23 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v23 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v23 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v23 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                }
            }
            if ((0x40U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][6U][0U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v24 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v24 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v24 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v24 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][6U][1U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v25 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v25 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v25 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v25 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][6U][2U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v26 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v26 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v26 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v26 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][6U][3U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v27 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v27 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v27 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v27 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                }
            }
            if ((0x80U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
                if ((0U == (3U & (vlSelf->mem_addr 
                                  >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][7U][0U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v28 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v28 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v28 = 0U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v28 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][7U][1U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v29 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v29 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v29 = 0x20U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v29 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((2U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][7U][2U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v30 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v30 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v30 = 0x40U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v30 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                } else if ((3U == (3U & (vlSelf->mem_addr 
                                         >> 2U)))) {
                    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                        = vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [(0x1ffU & (vlSelf->mem_addr 
                                    >> 4U))][7U][3U];
                    __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v31 
                        = ((vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word 
                            & (~ vlSelf->mmu__DOT__u_l3__DOT__byte_mask)) 
                           | vlSelf->mmu__DOT__u_l3__DOT__masked_write);
                    __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v31 = 1U;
                    __Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v31 = 0x60U;
                    __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v31 
                        = (0x1ffU & (vlSelf->mem_addr 
                                     >> 4U));
                }
            }
        }
        if (vlSelf->mmu__DOT__l3_fill_en) {
            __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v32[0U] 
                = vlSelf->mmu__DOT__l3_fill_data[0U];
            __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v32[1U] 
                = vlSelf->mmu__DOT__l3_fill_data[1U];
            __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v32[2U] 
                = vlSelf->mmu__DOT__l3_fill_data[2U];
            __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v32[3U] 
                = vlSelf->mmu__DOT__l3_fill_data[3U];
            __Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v32 = 1U;
            __Vdlyvdim1__mmu__DOT__u_l3__DOT__data_array__v32 
                = vlSelf->mmu__DOT__u_l3__DOT__repl_way;
            __Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v32 
                = (0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                             >> 4U));
        }
        vlSelf->mmu__DOT__l1_fill_en = 0U;
        vlSelf->mmu__DOT__l1_fill_mark_valid = 0U;
        vlSelf->mmu__DOT__l2_fill_en = 0U;
        vlSelf->mmu__DOT__l2_fill_mark_valid = 0U;
        vlSelf->mmu__DOT__l3_fill_en = 0U;
        vlSelf->mmu__DOT__l3_fill_mark_valid = 0U;
        if ((1U & (~ (IData)(vlSelf->mmu__DOT__state)))) {
            vlSelf->mmu__DOT__resp_valid = 0U;
        }
        if (vlSelf->mmu__DOT__state) {
            if (vlSelf->mmu__DOT__state) {
                vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[0U] 
                    = vlSelf->mmu__DOT__block_buf[0U];
                vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[1U] 
                    = vlSelf->mmu__DOT__block_buf[1U];
                vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[2U] 
                    = vlSelf->mmu__DOT__block_buf[2U];
                vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[3U] 
                    = vlSelf->mmu__DOT__block_buf[3U];
                if ((2U & (IData)(vlSelf->mmu__DOT__fill_count))) {
                    if ((1U & (IData)(vlSelf->mmu__DOT__fill_count))) {
                        vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[3U] 
                            = vlSelf->mmu__DOT__ram_r_data;
                    } else {
                        vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[2U] 
                            = vlSelf->mmu__DOT__ram_r_data;
                    }
                } else if ((1U & (IData)(vlSelf->mmu__DOT__fill_count))) {
                    vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[1U] 
                        = vlSelf->mmu__DOT__ram_r_data;
                } else {
                    vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[0U] 
                        = vlSelf->mmu__DOT__ram_r_data;
                }
                __Vdly__mmu__DOT__block_buf[0U] = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[0U];
                __Vdly__mmu__DOT__block_buf[1U] = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[1U];
                __Vdly__mmu__DOT__block_buf[2U] = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[2U];
                __Vdly__mmu__DOT__block_buf[3U] = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[3U];
                if ((3U == (IData)(vlSelf->mmu__DOT__fill_count))) {
                    vlSelf->mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base 
                        = (0xfffffff0U & vlSelf->mmu__DOT__saved_addr);
                    vlSelf->mmu__DOT__l3_fill_en = 1U;
                    vlSelf->mmu__DOT__l3_fill_addr 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base;
                    vlSelf->mmu__DOT__l3_fill_data[0U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[0U];
                    vlSelf->mmu__DOT__l3_fill_data[1U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[1U];
                    vlSelf->mmu__DOT__l3_fill_data[2U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[2U];
                    vlSelf->mmu__DOT__l3_fill_data[3U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[3U];
                    vlSelf->mmu__DOT__l3_fill_mark_valid = 1U;
                    vlSelf->mmu__DOT__l2_fill_en = 1U;
                    vlSelf->mmu__DOT__l2_fill_mark_valid = 1U;
                    vlSelf->mmu__DOT__l1_fill_en = 1U;
                    vlSelf->mmu__DOT__l1_fill_mark_valid = 1U;
                    vlSelf->mmu__DOT__resp_valid = 1U;
                    vlSelf->mmu__DOT__resp_word_index 
                        = vlSelf->mmu__DOT__saved_word_index;
                    __Vdly__mmu__DOT__state = 0U;
                    vlSelf->mmu__DOT__l2_fill_addr 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base;
                    vlSelf->mmu__DOT__l2_fill_data[0U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[0U];
                    vlSelf->mmu__DOT__l2_fill_data[1U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[1U];
                    vlSelf->mmu__DOT__l2_fill_data[2U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[2U];
                    vlSelf->mmu__DOT__l2_fill_data[3U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[3U];
                    vlSelf->mmu__DOT__l1_fill_addr 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base;
                    vlSelf->mmu__DOT__l1_fill_data[0U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[0U];
                    vlSelf->mmu__DOT__l1_fill_data[1U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[1U];
                    vlSelf->mmu__DOT__l1_fill_data[2U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[2U];
                    vlSelf->mmu__DOT__l1_fill_data[3U] 
                        = vlSelf->mmu__DOT__unnamedblk2__DOT__block_next[3U];
                } else {
                    __Vdly__mmu__DOT__fill_count = 
                        (3U & ((IData)(1U) + (IData)(vlSelf->mmu__DOT__fill_count)));
                }
            } else {
                __Vdly__mmu__DOT__state = 0U;
            }
        } else if (vlSelf->mem_valid) {
            if ((1U & (~ (IData)(vlSelf->mem_we)))) {
                vlSelf->mmu__DOT__unnamedblk1__DOT__any_hit 
                    = (((0U != (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit)) 
                        | (0U != (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) 
                       | (0U != (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)));
                if (vlSelf->mmu__DOT__unnamedblk1__DOT__any_hit) {
                    vlSelf->mmu__DOT__last_read_hit = 1U;
                    if (((0U != (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)) 
                         & (~ (IData)((0U != (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit)))))) {
                        vlSelf->mmu__DOT__l1_fill_en = 1U;
                        vlSelf->mmu__DOT__l1_fill_addr 
                            = (0xfffffff0U & vlSelf->mem_addr);
                        vlSelf->mmu__DOT__l1_fill_data[0U] 
                            = vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U];
                        vlSelf->mmu__DOT__l1_fill_data[1U] 
                            = vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U];
                        vlSelf->mmu__DOT__l1_fill_data[2U] 
                            = vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U];
                        vlSelf->mmu__DOT__l1_fill_data[3U] 
                            = vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U];
                        vlSelf->mmu__DOT__l1_fill_mark_valid = 1U;
                    } else if (((0U != (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                & (~ (IData)((0U != (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)))))) {
                        vlSelf->mmu__DOT__l2_fill_en = 1U;
                        vlSelf->mmu__DOT__l2_fill_addr 
                            = (0xfffffff0U & vlSelf->mem_addr);
                        vlSelf->mmu__DOT__l2_fill_data[0U] 
                            = vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U];
                        vlSelf->mmu__DOT__l2_fill_data[1U] 
                            = vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U];
                        vlSelf->mmu__DOT__l2_fill_data[2U] 
                            = vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U];
                        vlSelf->mmu__DOT__l2_fill_data[3U] 
                            = vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U];
                        vlSelf->mmu__DOT__l2_fill_mark_valid = 1U;
                        vlSelf->mmu__DOT__l1_fill_en = 1U;
                        vlSelf->mmu__DOT__l1_fill_addr 
                            = (0xfffffff0U & vlSelf->mem_addr);
                        vlSelf->mmu__DOT__l1_fill_data[0U] 
                            = vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U];
                        vlSelf->mmu__DOT__l1_fill_data[1U] 
                            = vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U];
                        vlSelf->mmu__DOT__l1_fill_data[2U] 
                            = vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U];
                        vlSelf->mmu__DOT__l1_fill_data[3U] 
                            = vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U];
                        vlSelf->mmu__DOT__l1_fill_mark_valid = 1U;
                    }
                } else {
                    vlSelf->mmu__DOT__last_read_hit = 0U;
                    __Vdly__mmu__DOT__saved_addr = vlSelf->mem_addr;
                    __Vdly__mmu__DOT__saved_word_index 
                        = (3U & (vlSelf->mem_addr >> 2U));
                    __Vdly__mmu__DOT__fill_count = 0U;
                    __Vdly__mmu__DOT__block_buf[0U] = 0U;
                    __Vdly__mmu__DOT__block_buf[1U] = 0U;
                    __Vdly__mmu__DOT__block_buf[2U] = 0U;
                    __Vdly__mmu__DOT__block_buf[3U] = 0U;
                    __Vdly__mmu__DOT__state = 1U;
                    vlSelf->mmu__DOT__resp_valid = 0U;
                }
            }
        }
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__valid_array__v0) {
        vlSelf->mmu__DOT__u_l3__DOT__valid_array[__Vdlyvdim0__mmu__DOT__u_l3__DOT__valid_array__v0][__Vdlyvdim1__mmu__DOT__u_l3__DOT__valid_array__v0] = 1U;
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__valid_array__v0) {
        vlSelf->mmu__DOT__u_l2__DOT__valid_array[__Vdlyvdim0__mmu__DOT__u_l2__DOT__valid_array__v0][__Vdlyvdim1__mmu__DOT__u_l2__DOT__valid_array__v0] = 1U;
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__valid_array__v0) {
        vlSelf->mmu__DOT__u_l1__DOT__valid_array[__Vdlyvdim0__mmu__DOT__u_l1__DOT__valid_array__v0][__Vdlyvdim1__mmu__DOT__u_l1__DOT__valid_array__v0] = 1U;
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__tag_array__v0) {
        vlSelf->mmu__DOT__u_l3__DOT__tag_array[__Vdlyvdim0__mmu__DOT__u_l3__DOT__tag_array__v0][__Vdlyvdim1__mmu__DOT__u_l3__DOT__tag_array__v0] 
            = __Vdlyvval__mmu__DOT__u_l3__DOT__tag_array__v0;
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__tag_array__v0) {
        vlSelf->mmu__DOT__u_l2__DOT__tag_array[__Vdlyvdim0__mmu__DOT__u_l2__DOT__tag_array__v0][__Vdlyvdim1__mmu__DOT__u_l2__DOT__tag_array__v0] 
            = __Vdlyvval__mmu__DOT__u_l2__DOT__tag_array__v0;
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__tag_array__v0) {
        vlSelf->mmu__DOT__u_l1__DOT__tag_array[__Vdlyvdim0__mmu__DOT__u_l1__DOT__tag_array__v0][__Vdlyvdim1__mmu__DOT__u_l1__DOT__tag_array__v0] 
            = __Vdlyvval__mmu__DOT__u_l1__DOT__tag_array__v0;
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v0) {
        vlSelf->mmu__DOT__u_l1__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l1__DOT__rr_ptr__v0] = 1U;
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v1) {
        vlSelf->mmu__DOT__u_l1__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l1__DOT__rr_ptr__v1] = 0U;
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__rr_ptr__v2) {
        vlSelf->mmu__DOT__u_l1__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l1__DOT__rr_ptr__v2] 
            = __Vdlyvval__mmu__DOT__u_l1__DOT__rr_ptr__v2;
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v0) {
        vlSelf->mmu__DOT__u_l2__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v0] = 1U;
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v1) {
        vlSelf->mmu__DOT__u_l2__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v1] = 2U;
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v2) {
        vlSelf->mmu__DOT__u_l2__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v2] = 3U;
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v3) {
        vlSelf->mmu__DOT__u_l2__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v3] = 0U;
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__rr_ptr__v4) {
        vlSelf->mmu__DOT__u_l2__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l2__DOT__rr_ptr__v4] 
            = __Vdlyvval__mmu__DOT__u_l2__DOT__rr_ptr__v4;
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v0) {
        vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v0] = 1U;
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v1) {
        vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v1] = 2U;
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v2) {
        vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v2] = 3U;
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v3) {
        vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v3] = 4U;
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v4) {
        vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v4] = 5U;
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v5) {
        vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v5] = 6U;
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v6) {
        vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v6] = 7U;
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v7) {
        vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v7] = 0U;
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__rr_ptr__v8) {
        vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[__Vdlyvdim0__mmu__DOT__u_l3__DOT__rr_ptr__v8] 
            = __Vdlyvval__mmu__DOT__u_l3__DOT__rr_ptr__v8;
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v0) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v0), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v0]
                        [0U], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v0);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v1) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v1), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v1]
                        [0U], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v1);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v2) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v2), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v2]
                        [0U], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v2);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v3) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v3), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v3]
                        [0U], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v3);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v4) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v4), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v4]
                        [1U], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v4);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v5) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v5), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v5]
                        [1U], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v5);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v6) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v6), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v6]
                        [1U], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v6);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v7) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l1__DOT__data_array__v7), 
                        vlSelf->mmu__DOT__u_l1__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v7]
                        [1U], __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v7);
    }
    if (__Vdlyvset__mmu__DOT__u_l1__DOT__data_array__v8) {
        vlSelf->mmu__DOT__u_l1__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v8][__Vdlyvdim1__mmu__DOT__u_l1__DOT__data_array__v8][0U] 
            = __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v8[0U];
        vlSelf->mmu__DOT__u_l1__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v8][__Vdlyvdim1__mmu__DOT__u_l1__DOT__data_array__v8][1U] 
            = __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v8[1U];
        vlSelf->mmu__DOT__u_l1__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v8][__Vdlyvdim1__mmu__DOT__u_l1__DOT__data_array__v8][2U] 
            = __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v8[2U];
        vlSelf->mmu__DOT__u_l1__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l1__DOT__data_array__v8][__Vdlyvdim1__mmu__DOT__u_l1__DOT__data_array__v8][3U] 
            = __Vdlyvval__mmu__DOT__u_l1__DOT__data_array__v8[3U];
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v0) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v0), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v0]
                        [0U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v0);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v1) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v1), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v1]
                        [0U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v1);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v2) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v2), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v2]
                        [0U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v2);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v3) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v3), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v3]
                        [0U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v3);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v4) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v4), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v4]
                        [1U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v4);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v5) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v5), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v5]
                        [1U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v5);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v6) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v6), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v6]
                        [1U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v6);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v7) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v7), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v7]
                        [1U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v7);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v8) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v8), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v8]
                        [2U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v8);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v9) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v9), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v9]
                        [2U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v9);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v10) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v10), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v10]
                        [2U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v10);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v11) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v11), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v11]
                        [2U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v11);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v12) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v12), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v12]
                        [3U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v12);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v13) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v13), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v13]
                        [3U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v13);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v14) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v14), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v14]
                        [3U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v14);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v15) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l2__DOT__data_array__v15), 
                        vlSelf->mmu__DOT__u_l2__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v15]
                        [3U], __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v15);
    }
    if (__Vdlyvset__mmu__DOT__u_l2__DOT__data_array__v16) {
        vlSelf->mmu__DOT__u_l2__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v16][__Vdlyvdim1__mmu__DOT__u_l2__DOT__data_array__v16][0U] 
            = __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v16[0U];
        vlSelf->mmu__DOT__u_l2__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v16][__Vdlyvdim1__mmu__DOT__u_l2__DOT__data_array__v16][1U] 
            = __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v16[1U];
        vlSelf->mmu__DOT__u_l2__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v16][__Vdlyvdim1__mmu__DOT__u_l2__DOT__data_array__v16][2U] 
            = __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v16[2U];
        vlSelf->mmu__DOT__u_l2__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l2__DOT__data_array__v16][__Vdlyvdim1__mmu__DOT__u_l2__DOT__data_array__v16][3U] 
            = __Vdlyvval__mmu__DOT__u_l2__DOT__data_array__v16[3U];
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v0) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v0), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v0]
                        [0U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v0);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v1) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v1), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v1]
                        [0U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v1);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v2) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v2), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v2]
                        [0U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v2);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v3) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v3), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v3]
                        [0U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v3);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v4) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v4), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v4]
                        [1U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v4);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v5) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v5), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v5]
                        [1U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v5);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v6) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v6), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v6]
                        [1U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v6);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v7) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v7), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v7]
                        [1U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v7);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v8) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v8), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v8]
                        [2U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v8);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v9) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v9), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v9]
                        [2U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v9);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v10) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v10), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v10]
                        [2U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v10);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v11) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v11), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v11]
                        [2U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v11);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v12) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v12), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v12]
                        [3U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v12);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v13) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v13), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v13]
                        [3U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v13);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v14) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v14), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v14]
                        [3U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v14);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v15) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v15), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v15]
                        [3U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v15);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v16) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v16), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v16]
                        [4U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v16);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v17) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v17), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v17]
                        [4U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v17);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v18) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v18), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v18]
                        [4U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v18);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v19) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v19), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v19]
                        [4U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v19);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v20) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v20), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v20]
                        [5U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v20);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v21) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v21), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v21]
                        [5U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v21);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v22) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v22), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v22]
                        [5U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v22);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v23) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v23), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v23]
                        [5U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v23);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v24) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v24), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v24]
                        [6U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v24);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v25) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v25), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v25]
                        [6U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v25);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v26) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v26), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v26]
                        [6U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v26);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v27) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v27), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v27]
                        [6U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v27);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v28) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v28), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v28]
                        [7U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v28);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v29) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v29), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v29]
                        [7U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v29);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v30) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v30), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v30]
                        [7U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v30);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v31) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__mmu__DOT__u_l3__DOT__data_array__v31), 
                        vlSelf->mmu__DOT__u_l3__DOT__data_array
                        [__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v31]
                        [7U], __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v31);
    }
    if (__Vdlyvset__mmu__DOT__u_l3__DOT__data_array__v32) {
        vlSelf->mmu__DOT__u_l3__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v32][__Vdlyvdim1__mmu__DOT__u_l3__DOT__data_array__v32][0U] 
            = __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v32[0U];
        vlSelf->mmu__DOT__u_l3__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v32][__Vdlyvdim1__mmu__DOT__u_l3__DOT__data_array__v32][1U] 
            = __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v32[1U];
        vlSelf->mmu__DOT__u_l3__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v32][__Vdlyvdim1__mmu__DOT__u_l3__DOT__data_array__v32][2U] 
            = __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v32[2U];
        vlSelf->mmu__DOT__u_l3__DOT__data_array[__Vdlyvdim0__mmu__DOT__u_l3__DOT__data_array__v32][__Vdlyvdim1__mmu__DOT__u_l3__DOT__data_array__v32][3U] 
            = __Vdlyvval__mmu__DOT__u_l3__DOT__data_array__v32[3U];
    }
    vlSelf->mmu__DOT__saved_word_index = __Vdly__mmu__DOT__saved_word_index;
    vlSelf->mmu__DOT__saved_addr = __Vdly__mmu__DOT__saved_addr;
    vlSelf->mmu__DOT__fill_count = __Vdly__mmu__DOT__fill_count;
    vlSelf->mmu__DOT__block_buf[0U] = __Vdly__mmu__DOT__block_buf[0U];
    vlSelf->mmu__DOT__block_buf[1U] = __Vdly__mmu__DOT__block_buf[1U];
    vlSelf->mmu__DOT__block_buf[2U] = __Vdly__mmu__DOT__block_buf[2U];
    vlSelf->mmu__DOT__block_buf[3U] = __Vdly__mmu__DOT__block_buf[3U];
    vlSelf->mmu__DOT__state = __Vdly__mmu__DOT__state;
    vlSelf->cache_hit = vlSelf->mmu__DOT__last_read_hit;
    vlSelf->mmu__DOT__u_l1__DOT__repl_way = vlSelf->mmu__DOT__u_l1__DOT__rr_ptr
        [(0x7fU & (vlSelf->mmu__DOT__l1_fill_addr >> 4U))];
    if ((1U & (~ vlSelf->mmu__DOT__u_l1__DOT__valid_array
               [(0x7fU & (vlSelf->mmu__DOT__l1_fill_addr 
                          >> 4U))][0U]))) {
        vlSelf->mmu__DOT__u_l1__DOT__repl_way = 0U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l1__DOT__valid_array
               [(0x7fU & (vlSelf->mmu__DOT__l1_fill_addr 
                          >> 4U))][1U]))) {
        vlSelf->mmu__DOT__u_l1__DOT__repl_way = 1U;
    }
    vlSelf->mmu__DOT__u_l2__DOT__repl_way = vlSelf->mmu__DOT__u_l2__DOT__rr_ptr
        [(0xffU & (vlSelf->mmu__DOT__l2_fill_addr >> 4U))];
    if ((1U & (~ vlSelf->mmu__DOT__u_l2__DOT__valid_array
               [(0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                          >> 4U))][0U]))) {
        vlSelf->mmu__DOT__u_l2__DOT__repl_way = 0U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l2__DOT__valid_array
               [(0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                          >> 4U))][1U]))) {
        vlSelf->mmu__DOT__u_l2__DOT__repl_way = 1U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l2__DOT__valid_array
               [(0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                          >> 4U))][2U]))) {
        vlSelf->mmu__DOT__u_l2__DOT__repl_way = 2U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l2__DOT__valid_array
               [(0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                          >> 4U))][3U]))) {
        vlSelf->mmu__DOT__u_l2__DOT__repl_way = 3U;
    }
    vlSelf->mmu__DOT__u_l3__DOT__repl_way = vlSelf->mmu__DOT__u_l3__DOT__rr_ptr
        [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                    >> 4U))];
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][0U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 0U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][1U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 1U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][2U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 2U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][3U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 3U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][4U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 4U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][5U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 5U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][6U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 6U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][7U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 7U;
    }
    vlSelf->mem_ready = (1U & (~ (IData)(vlSelf->mmu__DOT__state)));
}

VL_INLINE_OPT void Vmmu___024root___combo__TOP__0(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->mmu__DOT__u_l1__DOT__byte_mask = ((0xffff0000U 
                                               & vlSelf->mmu__DOT__u_l1__DOT__byte_mask) 
                                              | ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->mem_byte_en) 
                                                                    >> 1U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->mem_byte_en)))))));
    vlSelf->mmu__DOT__u_l1__DOT__byte_mask = ((0xffffU 
                                               & vlSelf->mmu__DOT__u_l1__DOT__byte_mask) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mem_byte_en) 
                                                                 >> 3U)))) 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->mem_byte_en) 
                                                                      >> 2U)))) 
                                                       << 0x10U))));
    vlSelf->mmu__DOT__u_l2__DOT__byte_mask = ((0xffff0000U 
                                               & vlSelf->mmu__DOT__u_l2__DOT__byte_mask) 
                                              | ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->mem_byte_en) 
                                                                    >> 1U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->mem_byte_en)))))));
    vlSelf->mmu__DOT__u_l2__DOT__byte_mask = ((0xffffU 
                                               & vlSelf->mmu__DOT__u_l2__DOT__byte_mask) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mem_byte_en) 
                                                                 >> 3U)))) 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->mem_byte_en) 
                                                                      >> 2U)))) 
                                                       << 0x10U))));
    vlSelf->mmu__DOT__u_l3__DOT__byte_mask = ((0xffff0000U 
                                               & vlSelf->mmu__DOT__u_l3__DOT__byte_mask) 
                                              | ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->mem_byte_en) 
                                                                    >> 1U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->mem_byte_en)))))));
    vlSelf->mmu__DOT__u_l3__DOT__byte_mask = ((0xffffU 
                                               & vlSelf->mmu__DOT__u_l3__DOT__byte_mask) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mem_byte_en) 
                                                                 >> 3U)))) 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->mem_byte_en) 
                                                                      >> 2U)))) 
                                                       << 0x10U))));
    vlSelf->mmu__DOT__u_l1__DOT__way_data[0U][0U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][0U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[0U][1U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][1U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[0U][2U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][2U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[0U][3U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][3U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[1U][0U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][0U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[1U][1U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][1U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[1U][2U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][2U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[1U][3U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][3U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[0U][0U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][0U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[0U][1U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][1U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[0U][2U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][2U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[0U][3U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][3U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[1U][0U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][0U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[1U][1U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][1U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[1U][2U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][2U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[1U][3U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][3U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[2U][0U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][0U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[2U][1U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][1U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[2U][2U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][2U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[2U][3U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][3U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[3U][0U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][0U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[3U][1U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][1U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[3U][2U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][2U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[3U][3U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[0U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[0U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[0U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[0U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[1U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[1U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[1U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[1U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[2U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[2U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[2U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[2U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[3U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[3U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[3U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[3U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[4U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [4U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[4U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [4U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[4U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [4U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[4U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [4U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[5U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [5U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[5U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [5U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[5U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [5U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[5U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [5U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[6U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [6U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[6U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [6U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[6U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [6U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[6U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [6U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[7U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [7U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[7U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [7U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[7U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [7U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[7U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [7U][3U];
    vlSelf->mmu__DOT__u_l2__DOT__way_hit = ((0xeU & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)) 
                                            | (vlSelf->mmu__DOT__u_l2__DOT__valid_array
                                               [(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
                                               [0U] 
                                               & (vlSelf->mmu__DOT__u_l2__DOT__tag_array
                                                  [
                                                  (0xffU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
                                                  [0U] 
                                                  == 
                                                  (vlSelf->mem_addr 
                                                   >> 0xcU))));
    vlSelf->mmu__DOT__u_l2__DOT__way_hit = ((0xdU & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l2__DOT__valid_array
                                                [(0xffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [1U] 
                                                & (vlSelf->mmu__DOT__u_l2__DOT__tag_array
                                                   [
                                                   (0xffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [1U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xcU))) 
                                               << 1U));
    vlSelf->mmu__DOT__u_l2__DOT__way_hit = ((0xbU & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l2__DOT__valid_array
                                                [(0xffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [2U] 
                                                & (vlSelf->mmu__DOT__u_l2__DOT__tag_array
                                                   [
                                                   (0xffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [2U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xcU))) 
                                               << 2U));
    vlSelf->mmu__DOT__u_l2__DOT__way_hit = ((7U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l2__DOT__valid_array
                                                [(0xffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [3U] 
                                                & (vlSelf->mmu__DOT__u_l2__DOT__tag_array
                                                   [
                                                   (0xffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [3U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xcU))) 
                                               << 3U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xfeU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | (vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                               [(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
                                               [0U] 
                                               & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                  [
                                                  (0x1ffU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
                                                  [0U] 
                                                  == 
                                                  (vlSelf->mem_addr 
                                                   >> 0xdU))));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xfdU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [1U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [1U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 1U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xfbU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [2U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [2U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 2U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xf7U 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [3U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [3U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 3U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xefU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [4U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [4U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 4U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xdfU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [5U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [5U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 5U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xbfU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [6U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [6U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 6U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0x7fU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [7U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [7U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 7U));
    vlSelf->mmu__DOT__u_l1__DOT__way_hit = ((2U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit)) 
                                            | (vlSelf->mmu__DOT__u_l1__DOT__valid_array
                                               [(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
                                               [0U] 
                                               & (vlSelf->mmu__DOT__u_l1__DOT__tag_array
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
                                                  [0U] 
                                                  == 
                                                  (vlSelf->mem_addr 
                                                   >> 0xbU))));
    vlSelf->mmu__DOT__u_l1__DOT__way_hit = ((1U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l1__DOT__valid_array
                                                [(0x7fU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [1U] 
                                                & (vlSelf->mmu__DOT__u_l1__DOT__tag_array
                                                   [
                                                   (0x7fU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [1U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xbU))) 
                                               << 1U));
    vlSelf->mmu__DOT__ram_addr = ((IData)(vlSelf->mmu__DOT__state)
                                   ? ((0xfffffff0U 
                                       & vlSelf->mmu__DOT__saved_addr) 
                                      + ((IData)(vlSelf->mmu__DOT__fill_count) 
                                         << 2U)) : vlSelf->mem_addr);
    vlSelf->mmu__DOT__u_l1__DOT__masked_write = (vlSelf->mem_w_data 
                                                 & vlSelf->mmu__DOT__u_l1__DOT__byte_mask);
    vlSelf->mmu__DOT__u_l2__DOT__masked_write = (vlSelf->mem_w_data 
                                                 & vlSelf->mmu__DOT__u_l2__DOT__byte_mask);
    vlSelf->mmu__DOT__u_l3__DOT__masked_write = (vlSelf->mem_w_data 
                                                 & vlSelf->mmu__DOT__u_l3__DOT__byte_mask);
    vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U] = 0U;
    vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U] = 0U;
    vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U] = 0U;
    vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U] = 0U;
    if ((1U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [0U][0U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [0U][1U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [0U][2U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [0U][3U];
    }
    if ((2U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [1U][0U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [1U][1U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [1U][2U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [1U][3U];
    }
    if ((4U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [2U][0U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [2U][1U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [2U][2U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [2U][3U];
    }
    if ((8U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [3U][0U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [3U][1U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [3U][2U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [3U][3U];
    }
    vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] = 0U;
    vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] = 0U;
    vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] = 0U;
    vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] = 0U;
    if ((1U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [0U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [0U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [0U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [0U][3U];
    }
    if ((2U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [1U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [1U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [1U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [1U][3U];
    }
    if ((4U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [2U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [2U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [2U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [2U][3U];
    }
    if ((8U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [3U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [3U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [3U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [3U][3U];
    }
    if ((0x10U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [4U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [4U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [4U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [4U][3U];
    }
    if ((0x20U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [5U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [5U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [5U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [5U][3U];
    }
    if ((0x40U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [6U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [6U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [6U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [6U][3U];
    }
    if ((0x80U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [7U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [7U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [7U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [7U][3U];
    }
    vlSelf->mmu__DOT__u_l1__DOT__selected_word = 0U;
    if ((1U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l1__DOT__selected_word 
            = ((0U == (3U & (vlSelf->mem_addr >> 2U)))
                ? vlSelf->mmu__DOT__u_l1__DOT__way_data
               [0U][0U] : ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U))) ? 
                           vlSelf->mmu__DOT__u_l1__DOT__way_data
                           [0U][1U] : ((2U == (3U & 
                                               (vlSelf->mem_addr 
                                                >> 2U)))
                                        ? vlSelf->mmu__DOT__u_l1__DOT__way_data
                                       [0U][2U] : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->mem_addr 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->mmu__DOT__u_l1__DOT__way_data
                                                   [0U][3U]
                                                    : 0U))));
    }
    if ((2U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l1__DOT__selected_word 
            = ((0U == (3U & (vlSelf->mem_addr >> 2U)))
                ? vlSelf->mmu__DOT__u_l1__DOT__way_data
               [1U][0U] : ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U))) ? 
                           vlSelf->mmu__DOT__u_l1__DOT__way_data
                           [1U][1U] : ((2U == (3U & 
                                               (vlSelf->mem_addr 
                                                >> 2U)))
                                        ? vlSelf->mmu__DOT__u_l1__DOT__way_data
                                       [1U][2U] : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->mem_addr 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->mmu__DOT__u_l1__DOT__way_data
                                                   [1U][3U]
                                                    : 0U))));
    }
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
    vlSelf->mmu__DOT__resp_data_comb = 0U;
    if ((1U & (~ (IData)(vlSelf->mem_we)))) {
        if (vlSelf->mmu__DOT__resp_valid) {
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__widx 
                = vlSelf->mmu__DOT__resp_word_index;
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[0U] 
                = vlSelf->mmu__DOT__block_buf[0U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[1U] 
                = vlSelf->mmu__DOT__block_buf[1U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[2U] 
                = vlSelf->mmu__DOT__block_buf[2U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[3U] 
                = vlSelf->mmu__DOT__block_buf[3U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__Vfuncout 
                = ((2U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__0__widx))
                    ? ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__0__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[3U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[2U])
                    : ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__0__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[1U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[0U]));
            vlSelf->mmu__DOT__resp_data_comb = vlSelf->__Vfunc_mmu__DOT__word_from_block__0__Vfuncout;
        } else if (vlSelf->mmu__DOT__state) {
            vlSelf->mmu__DOT__resp_data_comb = 0U;
        } else {
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__widx 
                = (3U & (vlSelf->mem_addr >> 2U));
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[0U] 
                = vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[1U] 
                = vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[2U] 
                = vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[3U] 
                = vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__Vfuncout 
                = ((2U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__2__widx))
                    ? ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__2__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[3U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[2U])
                    : ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__2__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[1U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[0U]));
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__widx 
                = (3U & (vlSelf->mem_addr >> 2U));
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[0U] 
                = vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[1U] 
                = vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[2U] 
                = vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[3U] 
                = vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__Vfuncout 
                = ((2U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__1__widx))
                    ? ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__1__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[3U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[2U])
                    : ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__1__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[1U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[0U]));
            vlSelf->mmu__DOT__resp_data_comb = ((0U 
                                                 != (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))
                                                 ? vlSelf->mmu__DOT__u_l1__DOT__selected_word
                                                 : 
                                                ((0U 
                                                  != (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))
                                                  ? vlSelf->__Vfunc_mmu__DOT__word_from_block__1__Vfuncout
                                                  : 
                                                 ((0U 
                                                   != (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))
                                                   ? vlSelf->__Vfunc_mmu__DOT__word_from_block__2__Vfuncout
                                                   : 0U)));
        }
    }
    vlSelf->mem_r_data = vlSelf->mmu__DOT__resp_data_comb;
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
    if (VL_UNLIKELY((vlSelf->mem_byte_en & 0xf0U))) {
        Verilated::overWidthError("mem_byte_en");}
}
#endif  // VL_DEBUG
