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
    VlWide<3>/*95:0*/ __Vtemp_h5d3392b8__0;
    // Body
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
    VL_WRITEF("Loading Instruction Memory.\n");
    __Vtemp_h5d3392b8__0[0U] = 0x2e6d656dU;
    __Vtemp_h5d3392b8__0[1U] = 0x6e737472U;
    __Vtemp_h5d3392b8__0[2U] = 0x69U;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h5d3392b8__0)
                 ,  &(vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array)
                 , 0, ~0ULL);
    VL_WRITEF("Loaded Instruction Memory!\n");
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0(vlSelf);
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
    vlSelf->cpu__DOT__pc_f = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ins = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__reg_write_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__result_src_d = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__mem_write_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc_src = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_control_d = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__alu_src_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rd_1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rd_2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__imm_ext_d = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_result_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_fetch__DOT__next_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__u_execute__DOT__src_b_e = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vchglast__TOP__cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = VL_RAND_RESET_I(3);
    vlSelf->__Vchglast__TOP__cpu__DOT__u_execute__DOT__src_b_e = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
