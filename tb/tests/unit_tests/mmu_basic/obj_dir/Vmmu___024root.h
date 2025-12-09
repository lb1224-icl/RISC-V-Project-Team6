// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmmu.h for the primary calling header

#ifndef VERILATED_VMMU___024ROOT_H_
#define VERILATED_VMMU___024ROOT_H_  // guard

#include "verilated.h"

class Vmmu__Syms;

class Vmmu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(mem_valid,0,0);
        VL_IN8(mem_we,0,0);
        VL_IN8(mem_byte_en,3,0);
        VL_OUT8(mem_ready,0,0);
        VL_OUT8(cache_hit,0,0);
        CData/*0:0*/ mmu__DOT__l1_fill_en;
        CData/*0:0*/ mmu__DOT__l1_fill_mark_valid;
        CData/*0:0*/ mmu__DOT__l2_fill_en;
        CData/*0:0*/ mmu__DOT__l2_fill_mark_valid;
        CData/*0:0*/ mmu__DOT__l3_fill_en;
        CData/*0:0*/ mmu__DOT__l3_fill_mark_valid;
        CData/*0:0*/ mmu__DOT__state;
        CData/*1:0*/ mmu__DOT__saved_word_index;
        CData/*1:0*/ mmu__DOT__fill_count;
        CData/*0:0*/ mmu__DOT__resp_valid;
        CData/*1:0*/ mmu__DOT__resp_word_index;
        CData/*0:0*/ mmu__DOT__last_read_hit;
        CData/*0:0*/ mmu__DOT__unnamedblk1__DOT__any_hit;
        CData/*1:0*/ mmu__DOT__u_l1__DOT__way_hit;
        CData/*0:0*/ mmu__DOT__u_l1__DOT__repl_way;
        CData/*3:0*/ mmu__DOT__u_l2__DOT__way_hit;
        CData/*1:0*/ mmu__DOT__u_l2__DOT__repl_way;
        CData/*7:0*/ mmu__DOT__u_l3__DOT__way_hit;
        CData/*2:0*/ mmu__DOT__u_l3__DOT__repl_way;
        CData/*1:0*/ __Vfunc_mmu__DOT__word_from_block__0__widx;
        CData/*1:0*/ __Vfunc_mmu__DOT__word_from_block__1__widx;
        CData/*1:0*/ __Vfunc_mmu__DOT__word_from_block__2__widx;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rst;
        VL_IN(mem_addr,31,0);
        VL_IN(mem_w_data,31,0);
        VL_OUT(mem_r_data,31,0);
        IData/*31:0*/ mmu__DOT__l1_fill_addr;
        VlWide<4>/*127:0*/ mmu__DOT__l1_fill_data;
        IData/*31:0*/ mmu__DOT__l2_fill_addr;
        VlWide<4>/*127:0*/ mmu__DOT__l2_fill_data;
        IData/*31:0*/ mmu__DOT__l3_fill_addr;
        VlWide<4>/*127:0*/ mmu__DOT__l3_fill_data;
        IData/*31:0*/ mmu__DOT__ram_addr;
        IData/*31:0*/ mmu__DOT__ram_r_data;
        IData/*31:0*/ mmu__DOT__saved_addr;
        VlWide<4>/*127:0*/ mmu__DOT__block_buf;
        IData/*31:0*/ mmu__DOT__resp_data_comb;
        VlWide<4>/*127:0*/ mmu__DOT__unnamedblk2__DOT__block_next;
        IData/*31:0*/ mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base;
        IData/*31:0*/ mmu__DOT__u_l1__DOT__selected_word;
        IData/*31:0*/ mmu__DOT__u_l1__DOT__byte_mask;
        IData/*31:0*/ mmu__DOT__u_l1__DOT__masked_write;
        IData/*31:0*/ mmu__DOT__u_l1__DOT__s;
        IData/*31:0*/ mmu__DOT__u_l1__DOT__w;
        IData/*31:0*/ mmu__DOT__u_l1__DOT__unnamedblk5__DOT__ww;
        IData/*31:0*/ mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word;
        VlWide<4>/*127:0*/ mmu__DOT__u_l2__DOT__selected_line;
        IData/*31:0*/ mmu__DOT__u_l2__DOT__byte_mask;
        IData/*31:0*/ mmu__DOT__u_l2__DOT__masked_write;
        IData/*31:0*/ mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s;
        IData/*31:0*/ mmu__DOT__u_l2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w;
        IData/*31:0*/ mmu__DOT__u_l2__DOT__unnamedblk7__DOT__w;
        IData/*31:0*/ mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word;
        VlWide<4>/*127:0*/ mmu__DOT__u_l3__DOT__selected_line;
        IData/*31:0*/ mmu__DOT__u_l3__DOT__byte_mask;
        IData/*31:0*/ mmu__DOT__u_l3__DOT__masked_write;
    };
    struct {
        IData/*31:0*/ mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s;
        IData/*31:0*/ mmu__DOT__u_l3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w;
        IData/*31:0*/ mmu__DOT__u_l3__DOT__unnamedblk7__DOT__w;
        IData/*31:0*/ mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word;
        IData/*31:0*/ mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vfunc_mmu__DOT__word_from_block__0__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_mmu__DOT__word_from_block__0__blk;
        IData/*31:0*/ __Vfunc_mmu__DOT__word_from_block__1__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_mmu__DOT__word_from_block__1__blk;
        IData/*31:0*/ __Vfunc_mmu__DOT__word_from_block__2__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_mmu__DOT__word_from_block__2__blk;
        VlUnpacked<VlUnpacked<IData/*20:0*/, 2>, 128> mmu__DOT__u_l1__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 128> mmu__DOT__u_l1__DOT__valid_array;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 2>, 128> mmu__DOT__u_l1__DOT__data_array;
        VlUnpacked<CData/*0:0*/, 128> mmu__DOT__u_l1__DOT__rr_ptr;
        VlUnpacked<VlWide<4>/*127:0*/, 2> mmu__DOT__u_l1__DOT__way_data;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 4>, 256> mmu__DOT__u_l2__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 256> mmu__DOT__u_l2__DOT__valid_array;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 4>, 256> mmu__DOT__u_l2__DOT__data_array;
        VlUnpacked<CData/*1:0*/, 256> mmu__DOT__u_l2__DOT__rr_ptr;
        VlUnpacked<VlWide<4>/*127:0*/, 4> mmu__DOT__u_l2__DOT__way_data;
        VlUnpacked<VlUnpacked<IData/*18:0*/, 8>, 512> mmu__DOT__u_l3__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 8>, 512> mmu__DOT__u_l3__DOT__valid_array;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 8>, 512> mmu__DOT__u_l3__DOT__data_array;
        VlUnpacked<CData/*2:0*/, 512> mmu__DOT__u_l3__DOT__rr_ptr;
        VlUnpacked<VlWide<4>/*127:0*/, 8> mmu__DOT__u_l3__DOT__way_data;
        VlUnpacked<CData/*7:0*/, 131072> mmu__DOT__u_ram__DOT__data_array;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vmmu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmmu___024root(Vmmu__Syms* symsp, const char* name);
    ~Vmmu___024root();
    VL_UNCOPYABLE(Vmmu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
