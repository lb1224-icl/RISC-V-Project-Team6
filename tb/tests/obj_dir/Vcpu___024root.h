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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(trigger,0,0);
        CData/*0:0*/ cpu__DOT__pc_src_e;
        CData/*0:0*/ cpu__DOT__reg_write_w;
        CData/*4:0*/ cpu__DOT__rd_w;
        CData/*0:0*/ cpu__DOT__reg_write_d;
        CData/*1:0*/ cpu__DOT__result_src_d;
        CData/*0:0*/ cpu__DOT__mem_write_d;
        CData/*0:0*/ cpu__DOT__jump_d;
        CData/*0:0*/ cpu__DOT__branch_d;
        CData/*3:0*/ cpu__DOT__alu_ctrl_d;
        CData/*0:0*/ cpu__DOT__alu_src_d;
        CData/*0:0*/ cpu__DOT__jalr_d;
        CData/*0:0*/ cpu__DOT__op1_pc_d;
        CData/*0:0*/ cpu__DOT__rs1_used_d;
        CData/*0:0*/ cpu__DOT__rs2_used_d;
        CData/*1:0*/ cpu__DOT__mul_ctrl_d;
        CData/*1:0*/ cpu__DOT__div_ctrl_d;
        CData/*0:0*/ cpu__DOT__mul_en_d;
        CData/*0:0*/ cpu__DOT__div_en_d;
        CData/*0:0*/ cpu__DOT__reg_write_e;
        CData/*1:0*/ cpu__DOT__result_src_e;
        CData/*0:0*/ cpu__DOT__mem_write_e;
        CData/*0:0*/ cpu__DOT__jump_e;
        CData/*0:0*/ cpu__DOT__branch_e;
        CData/*3:0*/ cpu__DOT__alu_ctrl_e;
        CData/*0:0*/ cpu__DOT__alu_src_e;
        CData/*2:0*/ cpu__DOT__funct3_e;
        CData/*0:0*/ cpu__DOT__jalr_e;
        CData/*4:0*/ cpu__DOT__rd_e;
        CData/*4:0*/ cpu__DOT__rs1_e;
        CData/*4:0*/ cpu__DOT__rs2_e;
        CData/*0:0*/ cpu__DOT__rs1_used_e;
        CData/*0:0*/ cpu__DOT__rs2_used_e;
        CData/*1:0*/ cpu__DOT__mul_ctrl_e;
        CData/*1:0*/ cpu__DOT__div_ctrl_e;
        CData/*0:0*/ cpu__DOT__mul_en_e;
        CData/*0:0*/ cpu__DOT__div_en_e;
        CData/*1:0*/ cpu__DOT__fwd_rs1;
        CData/*1:0*/ cpu__DOT__fwd_rs2;
        CData/*0:0*/ cpu__DOT__div_done_e;
        CData/*0:0*/ cpu__DOT__reg_write_m;
        CData/*1:0*/ cpu__DOT__result_src_m;
        CData/*0:0*/ cpu__DOT__mem_write_m;
        CData/*4:0*/ cpu__DOT__rd_m;
        CData/*2:0*/ cpu__DOT__funct3_m;
        CData/*1:0*/ cpu__DOT__result_src_w;
        CData/*0:0*/ cpu__DOT__stall;
        CData/*0:0*/ cpu__DOT__flush;
        CData/*0:0*/ cpu__DOT__div_stall;
        CData/*3:0*/ cpu__DOT__u_fetch__DOT__dbg_count;
        CData/*2:0*/ cpu__DOT__u_decode__DOT__imm_src_d;
        CData/*2:0*/ cpu__DOT__u_decode__DOT__cu__DOT__alu_logic;
        CData/*1:0*/ cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel;
        CData/*5:0*/ cpu__DOT__u_execute__DOT__divider__DOT__counter;
        CData/*1:0*/ cpu__DOT__u_execute__DOT__divider__DOT__state;
        CData/*1:0*/ cpu__DOT__u_execute__DOT__divider__DOT__next_state;
        CData/*0:0*/ cpu__DOT__u_execute__DOT__divider__DOT__sign_q;
        CData/*0:0*/ cpu__DOT__u_execute__DOT__divider__DOT__sign_r;
        CData/*0:0*/ cpu__DOT__u_execute__DOT__divider__DOT__is_signed;
        CData/*3:0*/ cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en;
        CData/*4:0*/ __Vdlyvdim0__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
        CData/*0:0*/ __Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
    };
    struct {
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rst;
        VL_OUT(a0,31,0);
        VL_OUT(debug_pc_f,31,0);
        VL_OUT(debug_instr_f,31,0);
        IData/*31:0*/ cpu__DOT__pc_f;
        IData/*31:0*/ cpu__DOT__instr_f;
        IData/*31:0*/ cpu__DOT__pc_d;
        IData/*31:0*/ cpu__DOT__pc_plus4_d;
        IData/*31:0*/ cpu__DOT__instr_d;
        IData/*31:0*/ cpu__DOT__result_w;
        IData/*31:0*/ cpu__DOT__imm_ext_d;
        IData/*31:0*/ cpu__DOT__rd1_e;
        IData/*31:0*/ cpu__DOT__rd2_e;
        IData/*31:0*/ cpu__DOT__pc_e;
        IData/*31:0*/ cpu__DOT__imm_ext_e;
        IData/*31:0*/ cpu__DOT__pc_plus4_e;
        IData/*31:0*/ cpu__DOT__alu_result_m;
        IData/*31:0*/ cpu__DOT__write_data_m;
        IData/*31:0*/ cpu__DOT__pc_plus4_m;
        IData/*31:0*/ cpu__DOT__alu_result_w;
        IData/*31:0*/ cpu__DOT__read_data_w;
        IData/*31:0*/ cpu__DOT__pc_plus4_w;
        IData/*31:0*/ cpu__DOT__u_fetch__DOT__next_pc;
        IData/*31:0*/ cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__src_b_e;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__alu_res;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__fwd_aluop1_raw;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__fwd_aluop2_out;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__mul_out_e;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__div_out_e;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__divider__DOT__quo;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__divider__DOT__div_shift;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__mem_word;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__data_mem__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vdlyvval__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
        IData/*31:0*/ __Vdly__cpu__DOT__u_execute__DOT__divider__DOT__quo;
        QData/*63:0*/ cpu__DOT__u_execute__DOT__multiplier__DOT__full_result;
        QData/*32:0*/ cpu__DOT__u_execute__DOT__divider__DOT__rem;
        QData/*32:0*/ cpu__DOT__u_execute__DOT__divider__DOT__den;
        QData/*32:0*/ cpu__DOT__u_execute__DOT__divider__DOT__unnamedblk1__DOT__rem_next;
        VlUnpacked<CData/*7:0*/, 16384> cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array;
        VlUnpacked<IData/*31:0*/, 32> cpu__DOT__u_decode__DOT__rf__DOT__ram_array;
        VlUnpacked<CData/*7:0*/, 131072> cpu__DOT__u_memory__DOT__data_mem__DOT__data_array;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };

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
