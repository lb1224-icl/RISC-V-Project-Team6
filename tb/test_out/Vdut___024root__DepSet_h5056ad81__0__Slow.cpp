// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

VL_ATTR_COLD void Vdut___024root___initial__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___initial__TOP__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h660b7075__0;
    // Body
    vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x20000U, vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__unnamedblk1__DOT__i)) {
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[(0x1ffffU 
                                                                    & vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF("Loading Data Memory (byte-addressed) from data.hex...\n");
    VL_READMEM_N(true, 8, 131072, 0, std::string{"data.hex"}
                 ,  &(vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array)
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
    VL_WRITEF("Loading Instruction Memory (byte-addressed)...\n");
    __Vtemp_h660b7075__0[0U] = 0x2e6d656dU;
    __Vtemp_h660b7075__0[1U] = 0x6e737472U;
    __Vtemp_h660b7075__0[2U] = 0x72792f69U;
    __Vtemp_h660b7075__0[3U] = 0x6d656d6fU;
    __Vtemp_h660b7075__0[4U] = 0x72746c2fU;
    __Vtemp_h660b7075__0[5U] = 0x2f2e2e2fU;
    __Vtemp_h660b7075__0[6U] = 0x2e2eU;
    VL_READMEM_N(true, 8, 16384, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h660b7075__0)
                 ,  &(vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array)
                 , 0, ~0ULL);
    VL_WRITEF("Loaded Instruction Memory!\n");
}

VL_ATTR_COLD void Vdut___024root___eval_initial(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial\n"); );
    // Body
    Vdut___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vdut___024root___settle__TOP__0(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_settle(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_settle\n"); );
    // Body
    Vdut___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vdut___024root___final(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___final\n"); );
}

VL_ATTR_COLD void Vdut___024root___ctor_var_reset(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
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
    vlSelf->cpu__DOT__rs1_used_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rs2_used_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__reg_write_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__result_src_e = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__mem_write_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__jump_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__branch_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_ctrl_e = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__alu_src_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__funct3_e = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__jalr_e = VL_RAND_RESET_I(1);
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
    vlSelf->cpu__DOT__alu_result_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__fwd_rs1 = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__fwd_rs2 = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__alu_result_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__reg_write_m = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__result_src_m = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__mem_write_m = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__write_data_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rd_m = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__pc_plus4_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__funct3_m = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__result_src_w = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__alu_result_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__read_data_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_plus4_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_fetch__DOT__next_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__div_ctrl = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_en = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__div_en = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__u_execute__DOT__src_a_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__src_b_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT__mem_word = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
