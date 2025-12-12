// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtuu.h for the primary calling header

#ifndef VERILATED_VTUU___024ROOT_H_
#define VERILATED_VTUU___024ROOT_H_  // guard

#include "verilated.h"

class Vtuu__Syms;

class Vtuu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(eq,0,0);
    VL_IN8(jump,0,0);
    VL_IN8(branch,0,0);
    VL_IN8(branch_predicted_e,0,0);
    VL_OUT8(branch_en,0,0);
    VL_OUT8(flush,0,0);
    CData/*1:0*/ tuu__DOT__next_state;
    CData/*0:0*/ tuu__DOT__hit1;
    CData/*0:0*/ tuu__DOT__hit2;
    CData/*0:0*/ tuu__DOT__write_en;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_IN(ins,31,0);
    VL_IN(pc,31,0);
    VL_IN(pc_tu_i,31,0);
    VL_IN(pcplusimm_tu,31,0);
    VL_OUT(pc_tu_o,31,0);
    VL_OUT(pc_target,31,0);
    IData/*31:0*/ tuu__DOT__bp_cache__DOT__unnamedblk1__DOT__i;
    VlUnpacked<IData/*31:0*/, 16> tuu__DOT__bp_cache__DOT__cache_data0;
    VlUnpacked<IData/*31:0*/, 16> tuu__DOT__bp_cache__DOT__cache_data1;
    VlUnpacked<CData/*1:0*/, 16> tuu__DOT__bp_cache__DOT__state;
    VlUnpacked<CData/*0:0*/, 16> tuu__DOT__bp_cache__DOT__valid;
    VlUnpacked<IData/*27:0*/, 16> tuu__DOT__bp_cache__DOT__tag;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtuu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtuu___024root(Vtuu__Syms* symsp, const char* name);
    ~Vtuu___024root();
    VL_UNCOPYABLE(Vtuu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
