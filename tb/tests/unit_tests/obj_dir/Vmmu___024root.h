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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(mem_valid,0,0);
    VL_IN8(mem_we,0,0);
    VL_OUT8(mem_ready,0,0);
    VL_OUT8(cache_hit,0,0);
    CData/*0:0*/ mmu__DOT__cache_hit_int;
    CData/*0:0*/ mmu__DOT__fill_en;
    CData/*0:0*/ mmu__DOT__fill_mark_valid;
    CData/*0:0*/ mmu__DOT__ram_we;
    CData/*1:0*/ mmu__DOT__state;
    CData/*1:0*/ mmu__DOT__fill_count;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_IN(mem_addr,31,0);
    VL_IN(mem_w_data,31,0);
    VL_OUT(mem_r_data,31,0);
    IData/*31:0*/ mmu__DOT__fill_addr;
    IData/*31:0*/ mmu__DOT__fill_data;
    IData/*31:0*/ mmu__DOT__ram_addr;
    IData/*31:0*/ mmu__DOT__ram_r_data;
    IData/*31:0*/ mmu__DOT__miss_addr_base;
    IData/*31:0*/ mmu__DOT__saved_mem_addr;
    VlWide<4>/*127:0*/ mmu__DOT__u_l1__DOT__line_data;
    IData/*31:0*/ mmu__DOT__u_l1__DOT__i;
    VlUnpacked<IData/*19:0*/, 256> mmu__DOT__u_l1__DOT__tag_array;
    VlUnpacked<CData/*0:0*/, 256> mmu__DOT__u_l1__DOT__valid_array;
    VlUnpacked<VlWide<4>/*127:0*/, 256> mmu__DOT__u_l1__DOT__data_array;
    VlUnpacked<CData/*7:0*/, 131072> mmu__DOT__u_ram__DOT__data_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
