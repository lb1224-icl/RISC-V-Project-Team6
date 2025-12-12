// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___initial__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3a032bfe__0;
    // Body
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x20000U, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i)) {
        vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__data_array[(0x1ffffU 
                                                                             & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF("Loading Data Memory (byte-addressed) from data.hex...\n");
    VL_READMEM_N(true, 8, 131072, 0, std::string{"data.hex"}
                 ,  &(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__data_array)
                 , 0x10000U, ~0ULL);
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[1U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[2U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[3U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[4U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[5U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[6U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[7U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[8U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[9U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0xaU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0xbU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0xcU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0xdU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0xeU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0xfU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x10U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x11U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x12U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x13U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x14U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x15U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x16U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x17U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x18U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x19U] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x1aU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x1bU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x1cU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x1dU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x1eU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0x1fU] = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i = 0x20U;
    VL_WRITEF("Loading Instruction Memory (byte-addressed) from program.hex...\n");
    __Vtemp_h3a032bfe__0[0U] = 0x2e686578U;
    __Vtemp_h3a032bfe__0[1U] = 0x6772616dU;
    __Vtemp_h3a032bfe__0[2U] = 0x70726fU;
    VL_READMEM_N(true, 8, 16384, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h3a032bfe__0)
                 ,  &(vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array)
                 , 0, ~0ULL);
    VL_WRITEF("Loaded Instruction Memory from program.hex!\n");
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->__pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc_src_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc_f = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_d = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_plus4_d = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__instr_d = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__reg_write_w = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__result_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rd_w = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__reg_write_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__result_src_d = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__mem_write_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__jump_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__branch_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_ctrl_d = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__alu_src_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__imm_ext_d = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__jalr_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__op1_pc_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rs1_used_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rs2_used_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mul_ctrl_d = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__div_ctrl_d = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__mul_en_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__div_en_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__reg_write_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__result_src_e = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__mem_write_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__jump_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__branch_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_ctrl_e = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__alu_src_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__funct3_e = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__jalr_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__op1_pc_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rd1_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rd2_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rd_e = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__rs1_e = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__rs2_e = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__imm_ext_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_plus4_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rs1_used_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rs2_used_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mul_ctrl_e = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__div_ctrl_e = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__mul_en_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__div_en_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ex_out_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__fwd_rs1 = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__fwd_rs2 = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__div_done_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__reg_write_m = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__result_src_m = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__mem_write_m = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__write_data_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rd_m = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__pc_plus4_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__funct3_m = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__mem_valid_m = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__result_src_w = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__ex_out_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__read_data_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_plus4_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__div_stall = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__cache_stall = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_fetch__DOT__next_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__u_execute__DOT__cache_stall = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_execute__DOT__src_a_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__src_b_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__alu_res = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__mul_out_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__div_out_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result = VL_RAND_RESET_Q(64);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter = VL_RAND_RESET_I(6);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_r = VL_RAND_RESET_Q(33);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_q = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_shift = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_d = VL_RAND_RESET_Q(33);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__n_reg = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__d_reg = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_q = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_r = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__is_signed = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_q = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__busy_q = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_pulse = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__unnamedblk1__DOT__div_r_next = VL_RAND_RESET_Q(33);
    vlSelf->cpu__DOT__u_memory__DOT__store_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__selected_byte = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__u_memory__DOT__selected_half = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_en = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_data);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_mark_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_en = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_data);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_mark_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_en = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_data);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_mark_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_r_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__saved_addr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__saved_word_index = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__fill_count = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__block_buf);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_word_index = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__last_read_hit = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk1__DOT__any_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk2__DOT__block_next);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__valid_array[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__data_array[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__rr_ptr[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_hit = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_data[__Vi0]);
    }
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__selected_word = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__repl_way = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__byte_mask = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__masked_write = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__s = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__unnamedblk5__DOT__ww = 0;
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(20);
        }
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__valid_array[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__data_array[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__rr_ptr[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_hit = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_data[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__selected_line);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__repl_way = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__byte_mask = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__masked_write = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s = 0;
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w = 0;
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk7__DOT__w = 0;
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(19);
        }
    }
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__valid_array[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__data_array[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__rr_ptr[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_hit = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__selected_line);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__repl_way = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__byte_mask = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__masked_write = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s = 0;
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w = 0;
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk7__DOT__w = 0;
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__data_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__Vfuncout = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__blk);
    vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__widx = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__Vfuncout = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__blk);
    vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__widx = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__Vfuncout = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__blk);
    vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__widx = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
