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
        VL_IN8(__pinNumber5,0,0);
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
        CData/*0:0*/ cpu__DOT__op1_pc_e;
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
        CData/*0:0*/ cpu__DOT__mem_valid_m;
        CData/*1:0*/ cpu__DOT__result_src_w;
        CData/*0:0*/ cpu__DOT__stall;
        CData/*0:0*/ cpu__DOT__flush;
        CData/*0:0*/ cpu__DOT__div_stall;
        CData/*0:0*/ cpu__DOT__cache_stall;
        CData/*2:0*/ cpu__DOT__u_decode__DOT__imm_src_d;
        CData/*2:0*/ cpu__DOT__u_decode__DOT__cu__DOT__alu_logic;
        CData/*0:0*/ cpu__DOT__u_execute__DOT__cache_stall;
        CData/*1:0*/ cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel;
        CData/*5:0*/ cpu__DOT__u_execute__DOT__divider__DOT__counter;
        CData/*1:0*/ cpu__DOT__u_execute__DOT__divider__DOT__state;
        CData/*1:0*/ cpu__DOT__u_execute__DOT__divider__DOT__next_state;
        CData/*0:0*/ cpu__DOT__u_execute__DOT__divider__DOT__sign_q;
        CData/*0:0*/ cpu__DOT__u_execute__DOT__divider__DOT__sign_r;
    };
    struct {
        CData/*0:0*/ cpu__DOT__u_execute__DOT__divider__DOT__is_signed;
        CData/*0:0*/ cpu__DOT__u_execute__DOT__divider__DOT__start_q;
        CData/*0:0*/ cpu__DOT__u_execute__DOT__divider__DOT__busy_q;
        CData/*0:0*/ cpu__DOT__u_execute__DOT__divider__DOT__start_pulse;
        CData/*7:0*/ cpu__DOT__u_memory__DOT__selected_byte;
        CData/*3:0*/ cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_en;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_mark_valid;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_en;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_mark_valid;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_en;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_mark_valid;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__state;
        CData/*1:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__saved_word_index;
        CData/*1:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__fill_count;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_valid;
        CData/*1:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_word_index;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__last_read_hit;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk1__DOT__any_hit;
        CData/*1:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_hit;
        CData/*0:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__repl_way;
        CData/*3:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_hit;
        CData/*1:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__repl_way;
        CData/*7:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_hit;
        CData/*2:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__repl_way;
        CData/*1:0*/ __Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__widx;
        CData/*1:0*/ __Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__widx;
        CData/*1:0*/ __Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__widx;
        CData/*5:0*/ __Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rst;
        SData/*15:0*/ cpu__DOT__u_memory__DOT__selected_half;
        VL_OUT(a0,31,0);
        IData/*31:0*/ cpu__DOT__pc_f;
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
        IData/*31:0*/ cpu__DOT__ex_out_m;
        IData/*31:0*/ cpu__DOT__write_data_m;
        IData/*31:0*/ cpu__DOT__pc_plus4_m;
        IData/*31:0*/ cpu__DOT__ex_out_w;
        IData/*31:0*/ cpu__DOT__read_data_w;
        IData/*31:0*/ cpu__DOT__pc_plus4_w;
        IData/*31:0*/ cpu__DOT__u_fetch__DOT__next_pc;
        IData/*31:0*/ cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__src_a_e;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__src_b_e;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__alu_res;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__fwd_aluop2_out;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__mul_out_e;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__div_out_e;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__divider__DOT__div_q;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__divider__DOT__div_shift;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__divider__DOT__n_reg;
        IData/*31:0*/ cpu__DOT__u_execute__DOT__divider__DOT__d_reg;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__store_data;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_addr;
    };
    struct {
        VlWide<4>/*127:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_data;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_addr;
        VlWide<4>/*127:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_data;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_addr;
        VlWide<4>/*127:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_data;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_r_data;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__saved_addr;
        VlWide<4>/*127:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__block_buf;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb;
        VlWide<4>/*127:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk2__DOT__block_next;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__selected_word;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__byte_mask;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__masked_write;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__s;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__w;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__unnamedblk5__DOT__ww;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word;
        VlWide<4>/*127:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__selected_line;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__byte_mask;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__masked_write;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk7__DOT__w;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word;
        VlWide<4>/*127:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__selected_line;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__byte_mask;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__masked_write;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk7__DOT__w;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word;
        IData/*31:0*/ cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__blk;
        IData/*31:0*/ __Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__blk;
        IData/*31:0*/ __Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__blk;
        QData/*63:0*/ cpu__DOT__u_execute__DOT__multiplier__DOT__full_result;
        QData/*32:0*/ cpu__DOT__u_execute__DOT__divider__DOT__div_r;
        QData/*32:0*/ cpu__DOT__u_execute__DOT__divider__DOT__div_d;
        QData/*32:0*/ cpu__DOT__u_execute__DOT__divider__DOT__unnamedblk1__DOT__div_r_next;
        VlUnpacked<CData/*7:0*/, 16384> cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array;
        VlUnpacked<IData/*31:0*/, 32> cpu__DOT__u_decode__DOT__rf__DOT__ram_array;
        VlUnpacked<VlUnpacked<IData/*20:0*/, 2>, 128> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 128> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__valid_array;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 2>, 128> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__data_array;
        VlUnpacked<CData/*0:0*/, 128> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__rr_ptr;
        VlUnpacked<VlWide<4>/*127:0*/, 2> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_data;
        VlUnpacked<VlUnpacked<IData/*19:0*/, 4>, 256> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 256> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__valid_array;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 4>, 256> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__data_array;
        VlUnpacked<CData/*1:0*/, 256> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__rr_ptr;
        VlUnpacked<VlWide<4>/*127:0*/, 4> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_data;
        VlUnpacked<VlUnpacked<IData/*18:0*/, 8>, 512> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 8>, 512> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__valid_array;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 8>, 512> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__data_array;
        VlUnpacked<CData/*2:0*/, 512> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__rr_ptr;
        VlUnpacked<VlWide<4>/*127:0*/, 8> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data;
        VlUnpacked<CData/*7:0*/, 131072> cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__data_array;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
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
