// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ cpu__DOT__reg_write_d;
    CData/*1:0*/ cpu__DOT__result_src_d;
    CData/*0:0*/ cpu__DOT__mem_write_d;
    CData/*0:0*/ cpu__DOT__pc_src;
    CData/*3:0*/ cpu__DOT__alu_control_d;
    CData/*0:0*/ cpu__DOT__alu_src_d;
    CData/*0:0*/ cpu__DOT__jalr;
    CData/*2:0*/ cpu__DOT__u_decode__DOT__imm_src_d;
    CData/*2:0*/ cpu__DOT__u_decode__DOT__cu__DOT__alu_logic;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_OUT(a0,31,0);
    IData/*31:0*/ cpu__DOT__pc_f;
    IData/*31:0*/ cpu__DOT__ins;
    IData/*31:0*/ cpu__DOT__rd_1;
    IData/*31:0*/ cpu__DOT__rd_2;
    IData/*31:0*/ cpu__DOT__imm_ext_d;
    IData/*31:0*/ cpu__DOT__u_fetch__DOT__next_pc;
    IData/*31:0*/ cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ cpu__DOT__u_execute__DOT__src_b_e;
    IData/*31:0*/ cpu__DOT__u_execute__DOT__alu_res;
    IData/*31:0*/ __Vchglast__TOP__cpu__DOT__u_execute__DOT__src_b_e;
    VlUnpacked<CData/*7:0*/, 16384> cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__u_decode__DOT__rf__DOT__ram_array;
    VlUnpacked<CData/*7:0*/, 131072> cpu__DOT__u_memory__DOT__data_mem__DOT__data_array;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
