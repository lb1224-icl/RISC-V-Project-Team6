// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__cpu__DOT__u_fetch__DOT__dbg_count;
    CData/*5:0*/ __Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter;
    // Body
    __Vdly__cpu__DOT__u_fetch__DOT__dbg_count = vlSelf->cpu__DOT__u_fetch__DOT__dbg_count;
    __Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter 
        = vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter;
    if (vlSelf->rst) {
        vlSelf->cpu__DOT__mul_ctrl_e = 0U;
        vlSelf->cpu__DOT__alu_ctrl_e = 0U;
    } else if (vlSelf->cpu__DOT__flush) {
        vlSelf->cpu__DOT__mul_ctrl_e = 0U;
        vlSelf->cpu__DOT__alu_ctrl_e = 0U;
    } else if (vlSelf->cpu__DOT__stall) {
        vlSelf->cpu__DOT__mul_ctrl_e = 0U;
        vlSelf->cpu__DOT__alu_ctrl_e = 0U;
    } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__div_stall)))) {
        vlSelf->cpu__DOT__mul_ctrl_e = vlSelf->cpu__DOT__mul_ctrl_d;
        vlSelf->cpu__DOT__alu_ctrl_e = vlSelf->cpu__DOT__alu_ctrl_d;
    }
    if (vlSelf->rst) {
        __Vdly__cpu__DOT__u_fetch__DOT__dbg_count = 0U;
    } else if (VL_UNLIKELY((5U > (IData)(vlSelf->cpu__DOT__u_fetch__DOT__dbg_count)))) {
        __Vdly__cpu__DOT__u_fetch__DOT__dbg_count = 
            (0xfU & ((IData)(1U) + (IData)(vlSelf->cpu__DOT__u_fetch__DOT__dbg_count)));
        VL_WRITEF("FETCH dbg%0#: pc=%x instr=%x\n",
                  4,vlSelf->cpu__DOT__u_fetch__DOT__dbg_count,
                  32,vlSelf->cpu__DOT__pc_f,32,vlSelf->cpu__DOT__instr_f);
    }
    if (vlSelf->rst) {
        vlSelf->cpu__DOT__mul_en_e = 0U;
        vlSelf->cpu__DOT__jalr_e = 0U;
        vlSelf->cpu__DOT__jump_e = 0U;
        vlSelf->cpu__DOT__branch_e = 0U;
        vlSelf->cpu__DOT__pc_e = 0U;
        vlSelf->cpu__DOT__div_done_e = 1U;
        __Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter = 0U;
        vlSelf->cpu__DOT__imm_ext_e = 0U;
        vlSelf->cpu__DOT__alu_src_e = 0U;
        vlSelf->cpu__DOT__rs1_used_e = 0U;
        vlSelf->cpu__DOT__rs1_e = 0U;
        vlSelf->cpu__DOT__rs2_used_e = 0U;
        vlSelf->cpu__DOT__rs2_e = 0U;
        vlSelf->cpu__DOT__result_src_w = 0U;
        vlSelf->cpu__DOT__pc_plus4_w = 0U;
        vlSelf->cpu__DOT__read_data_w = 0U;
        vlSelf->cpu__DOT__alu_result_w = 0U;
        vlSelf->cpu__DOT__pc_d = 0U;
        vlSelf->cpu__DOT__div_en_e = 0U;
        vlSelf->cpu__DOT__result_src_m = 0U;
        vlSelf->cpu__DOT__pc_plus4_m = 0U;
        vlSelf->cpu__DOT__funct3_m = 0U;
        vlSelf->cpu__DOT__result_src_e = 0U;
        vlSelf->cpu__DOT__pc_plus4_e = 0U;
        vlSelf->cpu__DOT__funct3_e = 0U;
        vlSelf->cpu__DOT__pc_plus4_d = 0U;
        vlSelf->cpu__DOT__pc_f = 0U;
    } else {
        if (((0U == (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state)) 
             | (3U == (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state)))) {
            __Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter = 0U;
        } else if ((2U == (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state))) {
            __Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter)));
        }
        if (((0U == (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state)) 
             & (IData)(vlSelf->cpu__DOT__div_en_e))) {
            vlSelf->cpu__DOT__div_done_e = 0U;
        } else if ((3U == (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state))) {
            vlSelf->cpu__DOT__div_done_e = 1U;
        }
        vlSelf->cpu__DOT__result_src_w = vlSelf->cpu__DOT__result_src_m;
        vlSelf->cpu__DOT__pc_plus4_w = vlSelf->cpu__DOT__pc_plus4_m;
        vlSelf->cpu__DOT__read_data_w = ((4U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                          ? ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                              ? vlSelf->cpu__DOT__u_memory__DOT__mem_word
                                              : ((1U 
                                                  & (IData)(vlSelf->cpu__DOT__funct3_m))
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelf->cpu__DOT__u_memory__DOT__mem_word)
                                                  : 
                                                 (0xffU 
                                                  & vlSelf->cpu__DOT__u_memory__DOT__mem_word)))
                                          : ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                              ? vlSelf->cpu__DOT__u_memory__DOT__mem_word
                                              : ((1U 
                                                  & (IData)(vlSelf->cpu__DOT__funct3_m))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->cpu__DOT__u_memory__DOT__mem_word 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->cpu__DOT__u_memory__DOT__mem_word))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->cpu__DOT__u_memory__DOT__mem_word 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->cpu__DOT__u_memory__DOT__mem_word)))));
        vlSelf->cpu__DOT__alu_result_w = vlSelf->cpu__DOT__alu_result_m;
        if (vlSelf->cpu__DOT__div_stall) {
            vlSelf->cpu__DOT__result_src_m = 0U;
            vlSelf->cpu__DOT__pc_plus4_m = 0U;
            vlSelf->cpu__DOT__funct3_m = 0U;
        } else {
            vlSelf->cpu__DOT__result_src_m = vlSelf->cpu__DOT__result_src_e;
            vlSelf->cpu__DOT__pc_plus4_m = vlSelf->cpu__DOT__pc_plus4_e;
            vlSelf->cpu__DOT__funct3_m = vlSelf->cpu__DOT__funct3_e;
        }
        if (vlSelf->cpu__DOT__flush) {
            vlSelf->cpu__DOT__mul_en_e = 0U;
            vlSelf->cpu__DOT__jalr_e = 0U;
            vlSelf->cpu__DOT__jump_e = 0U;
            vlSelf->cpu__DOT__branch_e = 0U;
            vlSelf->cpu__DOT__pc_e = 0U;
            vlSelf->cpu__DOT__imm_ext_e = 0U;
            vlSelf->cpu__DOT__alu_src_e = 0U;
            vlSelf->cpu__DOT__rs1_used_e = 0U;
            vlSelf->cpu__DOT__rs1_e = 0U;
            vlSelf->cpu__DOT__rs2_used_e = 0U;
            vlSelf->cpu__DOT__rs2_e = 0U;
            vlSelf->cpu__DOT__pc_d = 0U;
            vlSelf->cpu__DOT__div_en_e = 0U;
            vlSelf->cpu__DOT__result_src_e = 0U;
            vlSelf->cpu__DOT__pc_plus4_e = 0U;
            vlSelf->cpu__DOT__funct3_e = 0U;
            vlSelf->cpu__DOT__pc_plus4_d = 0U;
        } else {
            if (vlSelf->cpu__DOT__stall) {
                vlSelf->cpu__DOT__mul_en_e = 0U;
                vlSelf->cpu__DOT__jalr_e = 0U;
                vlSelf->cpu__DOT__jump_e = 0U;
                vlSelf->cpu__DOT__branch_e = 0U;
                vlSelf->cpu__DOT__pc_e = 0U;
                vlSelf->cpu__DOT__imm_ext_e = 0U;
                vlSelf->cpu__DOT__alu_src_e = 0U;
                vlSelf->cpu__DOT__rs1_used_e = 0U;
                vlSelf->cpu__DOT__rs1_e = 0U;
                vlSelf->cpu__DOT__rs2_used_e = 0U;
                vlSelf->cpu__DOT__rs2_e = 0U;
                vlSelf->cpu__DOT__div_en_e = 0U;
                vlSelf->cpu__DOT__result_src_e = 0U;
                vlSelf->cpu__DOT__pc_plus4_e = 0U;
                vlSelf->cpu__DOT__funct3_e = 0U;
            } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__div_stall)))) {
                vlSelf->cpu__DOT__mul_en_e = vlSelf->cpu__DOT__mul_en_d;
                vlSelf->cpu__DOT__jalr_e = vlSelf->cpu__DOT__jalr_d;
                vlSelf->cpu__DOT__jump_e = vlSelf->cpu__DOT__jump_d;
                vlSelf->cpu__DOT__branch_e = vlSelf->cpu__DOT__branch_d;
                vlSelf->cpu__DOT__pc_e = vlSelf->cpu__DOT__pc_d;
                vlSelf->cpu__DOT__imm_ext_e = vlSelf->cpu__DOT__imm_ext_d;
                vlSelf->cpu__DOT__alu_src_e = vlSelf->cpu__DOT__alu_src_d;
                vlSelf->cpu__DOT__rs1_used_e = vlSelf->cpu__DOT__rs1_used_d;
                vlSelf->cpu__DOT__rs1_e = (0x1fU & 
                                           (vlSelf->cpu__DOT__instr_d 
                                            >> 0xfU));
                vlSelf->cpu__DOT__rs2_used_e = vlSelf->cpu__DOT__rs2_used_d;
                vlSelf->cpu__DOT__rs2_e = (0x1fU & 
                                           (vlSelf->cpu__DOT__instr_d 
                                            >> 0x14U));
                vlSelf->cpu__DOT__div_en_e = vlSelf->cpu__DOT__div_en_d;
                vlSelf->cpu__DOT__result_src_e = vlSelf->cpu__DOT__result_src_d;
                vlSelf->cpu__DOT__pc_plus4_e = vlSelf->cpu__DOT__pc_plus4_d;
                vlSelf->cpu__DOT__funct3_e = (7U & 
                                              (vlSelf->cpu__DOT__instr_d 
                                               >> 0xcU));
            }
            if ((1U & ((~ (IData)(vlSelf->cpu__DOT__stall)) 
                       & (~ (IData)(vlSelf->cpu__DOT__div_stall))))) {
                vlSelf->cpu__DOT__pc_d = vlSelf->cpu__DOT__pc_f;
                vlSelf->cpu__DOT__pc_plus4_d = ((IData)(4U) 
                                                + vlSelf->cpu__DOT__pc_f);
            }
        }
        if ((1U & (~ (IData)(vlSelf->cpu__DOT__stall)))) {
            vlSelf->cpu__DOT__pc_f = vlSelf->cpu__DOT__u_fetch__DOT__next_pc;
        }
    }
    vlSelf->cpu__DOT__u_fetch__DOT__dbg_count = __Vdly__cpu__DOT__u_fetch__DOT__dbg_count;
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter 
        = __Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter;
    if (VL_UNLIKELY((0x4000U <= ((IData)(3U) + (0x3fffU 
                                                & vlSelf->cpu__DOT__pc_f))))) {
        VL_WRITEF("ERROR: PC out of range! PC=%x\n",
                  32,vlSelf->cpu__DOT__pc_f);
    }
    vlSelf->debug_pc_f = vlSelf->cpu__DOT__pc_f;
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__1\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3;
    // Body
    vlSelf->__Vdly__cpu__DOT__u_execute__DOT__divider__DOT__quo 
        = vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__quo;
    __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0 = 0U;
    __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1 = 0U;
    __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2 = 0U;
    __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3 = 0U;
    if (vlSelf->cpu__DOT__mem_write_m) {
        if ((1U & (IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en))) {
            __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0 
                = (0xffU & vlSelf->cpu__DOT__write_data_m);
            __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0 = 1U;
            __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0 
                = (0x1ffffU & vlSelf->cpu__DOT__alu_result_m);
        }
        if ((2U & (IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en))) {
            __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1 
                = (0xffU & (vlSelf->cpu__DOT__write_data_m 
                            >> 8U));
            __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1 = 1U;
            __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelf->cpu__DOT__alu_result_m));
        }
        if ((4U & (IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en))) {
            __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2 
                = (0xffU & (vlSelf->cpu__DOT__write_data_m 
                            >> 0x10U));
            __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2 = 1U;
            __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelf->cpu__DOT__alu_result_m));
        }
        if ((8U & (IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en))) {
            __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3 
                = (vlSelf->cpu__DOT__write_data_m >> 0x18U);
            __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3 = 1U;
            __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__alu_result_m));
        }
    }
    if (__Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0) {
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[__Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0] 
            = __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0;
    }
    if (__Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1) {
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[__Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1] 
            = __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1;
    }
    if (__Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2) {
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[__Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2] 
            = __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2;
    }
    if (__Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3) {
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[__Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3] 
            = __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3;
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__2(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 = 0U;
    if (((IData)(vlSelf->cpu__DOT__reg_write_w) & (0U 
                                                   != (IData)(vlSelf->cpu__DOT__rd_w)))) {
        vlSelf->__Vdlyvval__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 
            = vlSelf->cpu__DOT__result_w;
        vlSelf->__Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 = 1U;
        vlSelf->__Vdlyvdim0__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 
            = vlSelf->cpu__DOT__rd_w;
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__3(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->cpu__DOT__result_w = ((2U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                   ? ((1U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                       ? 0U : vlSelf->cpu__DOT__pc_plus4_w)
                                   : ((1U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                       ? vlSelf->cpu__DOT__read_data_w
                                       : vlSelf->cpu__DOT__alu_result_w));
    vlSelf->cpu__DOT__mem_write_m = ((~ (IData)(vlSelf->rst)) 
                                     & ((~ (IData)(vlSelf->cpu__DOT__div_stall)) 
                                        & (IData)(vlSelf->cpu__DOT__mem_write_e)));
    vlSelf->cpu__DOT__reg_write_w = ((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->cpu__DOT__reg_write_m));
    if (vlSelf->rst) {
        vlSelf->cpu__DOT__write_data_m = 0U;
        vlSelf->cpu__DOT__alu_result_m = 0U;
    } else if (vlSelf->cpu__DOT__div_stall) {
        vlSelf->cpu__DOT__write_data_m = 0U;
        vlSelf->cpu__DOT__alu_result_m = 0U;
    } else {
        vlSelf->cpu__DOT__write_data_m = vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out;
        vlSelf->cpu__DOT__alu_result_m = ((2U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                           ? ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                               ? 0U
                                               : vlSelf->cpu__DOT__u_execute__DOT__div_out_e)
                                           : ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                               ? vlSelf->cpu__DOT__u_execute__DOT__mul_out_e
                                               : vlSelf->cpu__DOT__u_execute__DOT__alu_res));
    }
    vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel 
        = (((IData)(vlSelf->cpu__DOT__div_en_e) << 1U) 
           | (IData)(vlSelf->cpu__DOT__mul_en_e));
    vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en 
        = ((IData)(vlSelf->cpu__DOT__mem_write_m) ? 
           ((0U == (IData)(vlSelf->cpu__DOT__funct3_m))
             ? 1U : ((1U == (IData)(vlSelf->cpu__DOT__funct3_m))
                      ? 3U : ((2U == (IData)(vlSelf->cpu__DOT__funct3_m))
                               ? 0xfU : 0U))) : 0U);
    vlSelf->cpu__DOT__u_memory__DOT__mem_word = ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->cpu__DOT__alu_result_m))] 
                                                  << 0x18U) 
                                                 | ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->cpu__DOT__alu_result_m))] 
                                                     << 0x10U) 
                                                    | ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelf->cpu__DOT__alu_result_m))] 
                                                        << 8U) 
                                                       | vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                                       [
                                                       (0x1ffffU 
                                                        & vlSelf->cpu__DOT__alu_result_m)])));
    vlSelf->cpu__DOT__reg_write_m = ((~ (IData)(vlSelf->rst)) 
                                     & ((~ (IData)(vlSelf->cpu__DOT__div_stall)) 
                                        & (IData)(vlSelf->cpu__DOT__reg_write_e)));
    if (vlSelf->rst) {
        vlSelf->cpu__DOT__rd_w = 0U;
        vlSelf->cpu__DOT__mem_write_e = 0U;
        vlSelf->cpu__DOT__rd_m = 0U;
        vlSelf->cpu__DOT__reg_write_e = 0U;
        vlSelf->cpu__DOT__rd_e = 0U;
    } else {
        vlSelf->cpu__DOT__rd_w = vlSelf->cpu__DOT__rd_m;
        vlSelf->cpu__DOT__rd_m = ((IData)(vlSelf->cpu__DOT__div_stall)
                                   ? 0U : (IData)(vlSelf->cpu__DOT__rd_e));
        if (vlSelf->cpu__DOT__flush) {
            vlSelf->cpu__DOT__mem_write_e = 0U;
            vlSelf->cpu__DOT__reg_write_e = 0U;
            vlSelf->cpu__DOT__rd_e = 0U;
        } else if (vlSelf->cpu__DOT__stall) {
            vlSelf->cpu__DOT__mem_write_e = 0U;
            vlSelf->cpu__DOT__reg_write_e = 0U;
            vlSelf->cpu__DOT__rd_e = 0U;
        } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__div_stall)))) {
            vlSelf->cpu__DOT__mem_write_e = vlSelf->cpu__DOT__mem_write_d;
            vlSelf->cpu__DOT__reg_write_e = vlSelf->cpu__DOT__reg_write_d;
            vlSelf->cpu__DOT__rd_e = (0x1fU & (vlSelf->cpu__DOT__instr_d 
                                               >> 7U));
        }
    }
    vlSelf->cpu__DOT__fwd_rs1 = 0U;
    if (vlSelf->cpu__DOT__rs1_used_e) {
        if ((((0U != (IData)(vlSelf->cpu__DOT__rd_m)) 
              & (IData)(vlSelf->cpu__DOT__reg_write_m)) 
             & ((IData)(vlSelf->cpu__DOT__rd_m) == (IData)(vlSelf->cpu__DOT__rs1_e)))) {
            vlSelf->cpu__DOT__fwd_rs1 = 2U;
        } else if ((((0U != (IData)(vlSelf->cpu__DOT__rd_w)) 
                     & (IData)(vlSelf->cpu__DOT__reg_write_w)) 
                    & ((IData)(vlSelf->cpu__DOT__rd_w) 
                       == (IData)(vlSelf->cpu__DOT__rs1_e)))) {
            vlSelf->cpu__DOT__fwd_rs1 = 1U;
        }
    }
    vlSelf->cpu__DOT__fwd_rs2 = 0U;
    if (vlSelf->cpu__DOT__rs2_used_e) {
        if ((((0U != (IData)(vlSelf->cpu__DOT__rd_m)) 
              & (IData)(vlSelf->cpu__DOT__reg_write_m)) 
             & ((IData)(vlSelf->cpu__DOT__rd_m) == (IData)(vlSelf->cpu__DOT__rs2_e)))) {
            vlSelf->cpu__DOT__fwd_rs2 = 2U;
        } else if ((((0U != (IData)(vlSelf->cpu__DOT__rd_w)) 
                     & (IData)(vlSelf->cpu__DOT__reg_write_w)) 
                    & ((IData)(vlSelf->cpu__DOT__rd_w) 
                       == (IData)(vlSelf->cpu__DOT__rs2_e)))) {
            vlSelf->cpu__DOT__fwd_rs2 = 1U;
        }
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__4(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__4\n"); );
    // Body
    if ((2U & (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state))) {
            vlSelf->cpu__DOT__u_execute__DOT__div_out_e 
                = ((2U & (IData)(vlSelf->cpu__DOT__div_ctrl_e))
                    ? ((1U & (IData)(vlSelf->cpu__DOT__div_ctrl_e))
                        ? (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__rem)
                        : ((IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_r)
                            ? (- (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__rem))
                            : (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__rem)))
                    : ((1U & (IData)(vlSelf->cpu__DOT__div_ctrl_e))
                        ? vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__quo
                        : ((IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_q)
                            ? (- vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__quo)
                            : vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__quo)));
        } else {
            vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__unnamedblk1__DOT__rem_next 
                = (((QData)((IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__rem)) 
                    << 1U) | (QData)((IData)((vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_shift 
                                              >> 0x1fU))));
            vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_shift 
                = (vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_shift 
                   << 1U);
            if ((vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__unnamedblk1__DOT__rem_next 
                 >= vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__den)) {
                vlSelf->__Vdly__cpu__DOT__u_execute__DOT__divider__DOT__quo 
                    = (1U | (vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__quo 
                             << 1U));
                vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__rem 
                    = (0x1ffffffffULL & (vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__unnamedblk1__DOT__rem_next 
                                         - vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__den));
            } else {
                vlSelf->__Vdly__cpu__DOT__u_execute__DOT__divider__DOT__quo 
                    = (vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__quo 
                       << 1U);
                vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__rem 
                    = vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__unnamedblk1__DOT__rem_next;
            }
        }
    } else if ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state))) {
        vlSelf->__Vdly__cpu__DOT__u_execute__DOT__divider__DOT__quo = 0U;
        vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__rem = 0ULL;
        vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_shift 
            = ((IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__is_signed)
                ? ((vlSelf->cpu__DOT__rd1_e >> 0x1fU)
                    ? (- vlSelf->cpu__DOT__rd1_e) : vlSelf->cpu__DOT__rd1_e)
                : vlSelf->cpu__DOT__rd1_e);
    }
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__quo 
        = vlSelf->__Vdly__cpu__DOT__u_execute__DOT__divider__DOT__quo;
    if ((1U & (~ ((IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state))) {
            if (vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__is_signed) {
                vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_r 
                    = (vlSelf->cpu__DOT__rd1_e >> 0x1fU);
                vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__den 
                    = (QData)((IData)(((vlSelf->cpu__DOT__rd2_e 
                                        >> 0x1fU) ? 
                                       (- vlSelf->cpu__DOT__rd2_e)
                                        : vlSelf->cpu__DOT__rd2_e)));
                vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_q 
                    = ((vlSelf->cpu__DOT__rd1_e ^ vlSelf->cpu__DOT__rd2_e) 
                       >> 0x1fU);
            } else {
                vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_r = 0U;
                vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__den 
                    = (QData)((IData)(vlSelf->cpu__DOT__rd2_e));
                vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_q = 0U;
            }
        }
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__6(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__6\n"); );
    // Body
    if (vlSelf->__Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0) {
        vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[vlSelf->__Vdlyvdim0__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0] 
            = vlSelf->__Vdlyvval__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
    }
    vlSelf->a0 = vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
        [0xaU];
}

void Vcpu___024root___sequent__TOP__5(Vcpu___024root* vlSelf);

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__1(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vcpu___024root___sequent__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vcpu___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
