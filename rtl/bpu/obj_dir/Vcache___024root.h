// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcache.h for the primary calling header

#ifndef VERILATED_VCACHE___024ROOT_H_
#define VERILATED_VCACHE___024ROOT_H_  // guard

#include "verilated.h"

class Vcache__Syms;

class Vcache___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(data_in2,1,0);
    VL_IN8(write_en,0,0);
    VL_OUT8(data_out2,1,0);
    VL_OUT8(data_out3,1,0);
    VL_OUT8(hit1,0,0);
    VL_OUT8(hit2,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_IN(wr_addr,31,0);
    VL_IN(rd_addr,31,0);
    VL_IN(data_in0,31,0);
    VL_IN(data_in1,31,0);
    VL_OUT(data_out1,31,0);
    IData/*31:0*/ cache__DOT__unnamedblk1__DOT__i;
    VlUnpacked<IData/*31:0*/, 16> cache__DOT__cache_data0;
    VlUnpacked<IData/*31:0*/, 16> cache__DOT__cache_data1;
    VlUnpacked<CData/*1:0*/, 16> cache__DOT__state;
    VlUnpacked<CData/*0:0*/, 16> cache__DOT__valid;
    VlUnpacked<IData/*27:0*/, 16> cache__DOT__tag;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcache__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcache___024root(Vcache__Syms* symsp, const char* name);
    ~Vcache___024root();
    VL_UNCOPYABLE(Vcache___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
