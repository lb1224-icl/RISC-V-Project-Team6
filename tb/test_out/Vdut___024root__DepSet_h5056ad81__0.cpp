// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

VL_INLINE_OPT void Vdut___024root___sequent__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->cpu__DOT__alu_ctrl_e = 0U;
        vlSelf->cpu__DOT__pc_e = 0U;
        vlSelf->cpu__DOT__imm_ext_e = 0U;
        vlSelf->cpu__DOT__rd2_e = 0U;
        vlSelf->cpu__DOT__rs2_e = 0U;
        vlSelf->cpu__DOT__result_src_w = 0U;
        vlSelf->cpu__DOT__rd1_e = 0U;
        vlSelf->cpu__DOT__alu_result_w = 0U;
        vlSelf->cpu__DOT__pc_plus4_w = 0U;
        vlSelf->cpu__DOT__rs1_e = 0U;
        vlSelf->cpu__DOT__read_data_w = 0U;
        vlSelf->cpu__DOT__pc_d = 0U;
        vlSelf->cpu__DOT__result_src_m = 0U;
        vlSelf->cpu__DOT__pc_plus4_m = 0U;
        vlSelf->cpu__DOT__funct3_m = 0U;
        vlSelf->cpu__DOT__result_src_e = 0U;
        vlSelf->cpu__DOT__pc_plus4_e = 0U;
        vlSelf->cpu__DOT__funct3_e = 0U;
        vlSelf->cpu__DOT__pc_plus4_d = 0U;
    } else {
        vlSelf->cpu__DOT__result_src_w = vlSelf->cpu__DOT__result_src_m;
        vlSelf->cpu__DOT__alu_result_w = vlSelf->cpu__DOT__alu_result_m;
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
        vlSelf->cpu__DOT__result_src_m = vlSelf->cpu__DOT__result_src_e;
        vlSelf->cpu__DOT__pc_plus4_m = vlSelf->cpu__DOT__pc_plus4_e;
        vlSelf->cpu__DOT__funct3_m = vlSelf->cpu__DOT__funct3_e;
        if (vlSelf->cpu__DOT__flush) {
            vlSelf->cpu__DOT__alu_ctrl_e = 0U;
            vlSelf->cpu__DOT__pc_e = 0U;
            vlSelf->cpu__DOT__imm_ext_e = 0U;
            vlSelf->cpu__DOT__rd2_e = 0U;
            vlSelf->cpu__DOT__rs2_e = 0U;
            vlSelf->cpu__DOT__rd1_e = 0U;
            vlSelf->cpu__DOT__rs1_e = 0U;
            vlSelf->cpu__DOT__pc_d = 0U;
            vlSelf->cpu__DOT__result_src_e = 0U;
            vlSelf->cpu__DOT__pc_plus4_e = 0U;
            vlSelf->cpu__DOT__funct3_e = 0U;
            vlSelf->cpu__DOT__pc_plus4_d = 0U;
        } else {
            if (vlSelf->cpu__DOT__stall) {
                vlSelf->cpu__DOT__alu_ctrl_e = 0U;
                vlSelf->cpu__DOT__pc_e = 0U;
                vlSelf->cpu__DOT__imm_ext_e = 0U;
                vlSelf->cpu__DOT__rd2_e = 0U;
                vlSelf->cpu__DOT__rs2_e = 0U;
                vlSelf->cpu__DOT__rd1_e = 0U;
                vlSelf->cpu__DOT__rs1_e = 0U;
                vlSelf->cpu__DOT__result_src_e = 0U;
                vlSelf->cpu__DOT__pc_plus4_e = 0U;
                vlSelf->cpu__DOT__funct3_e = 0U;
            } else {
                vlSelf->cpu__DOT__alu_ctrl_e = vlSelf->cpu__DOT__alu_ctrl_d;
                vlSelf->cpu__DOT__pc_e = vlSelf->cpu__DOT__pc_d;
                vlSelf->cpu__DOT__imm_ext_e = vlSelf->cpu__DOT__imm_ext_d;
                vlSelf->cpu__DOT__rd2_e = vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                    [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                               >> 0x14U))];
                vlSelf->cpu__DOT__rs2_e = (0x1fU & 
                                           (vlSelf->cpu__DOT__instr_d 
                                            >> 0x14U));
                vlSelf->cpu__DOT__rd1_e = vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                    [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                               >> 0xfU))];
                vlSelf->cpu__DOT__rs1_e = (0x1fU & 
                                           (vlSelf->cpu__DOT__instr_d 
                                            >> 0xfU));
                vlSelf->cpu__DOT__result_src_e = vlSelf->cpu__DOT__result_src_d;
                vlSelf->cpu__DOT__pc_plus4_e = vlSelf->cpu__DOT__pc_plus4_d;
                vlSelf->cpu__DOT__funct3_e = (7U & 
                                              (vlSelf->cpu__DOT__instr_d 
                                               >> 0xcU));
            }
            if ((1U & (~ (IData)(vlSelf->cpu__DOT__stall)))) {
                vlSelf->cpu__DOT__pc_d = vlSelf->cpu__DOT__pc_f;
                vlSelf->cpu__DOT__pc_plus4_d = ((IData)(4U) 
                                                + vlSelf->cpu__DOT__pc_f);
            }
        }
    }
    vlSelf->cpu__DOT__jump_e = ((~ (IData)(vlSelf->rst)) 
                                & ((~ (IData)(vlSelf->cpu__DOT__flush)) 
                                   & ((~ (IData)(vlSelf->cpu__DOT__stall)) 
                                      & (IData)(vlSelf->cpu__DOT__jump_d))));
    vlSelf->cpu__DOT__branch_e = ((~ (IData)(vlSelf->rst)) 
                                  & ((~ (IData)(vlSelf->cpu__DOT__flush)) 
                                     & ((~ (IData)(vlSelf->cpu__DOT__stall)) 
                                        & (IData)(vlSelf->cpu__DOT__branch_d))));
    vlSelf->cpu__DOT__rs2_used_e = ((~ (IData)(vlSelf->rst)) 
                                    & ((~ (IData)(vlSelf->cpu__DOT__flush)) 
                                       & ((~ (IData)(vlSelf->cpu__DOT__stall)) 
                                          & (IData)(vlSelf->cpu__DOT__rs2_used_d))));
    vlSelf->cpu__DOT__jalr_e = ((~ (IData)(vlSelf->rst)) 
                                & ((~ (IData)(vlSelf->cpu__DOT__flush)) 
                                   & ((~ (IData)(vlSelf->cpu__DOT__stall)) 
                                      & (IData)(vlSelf->cpu__DOT__jalr_d))));
    vlSelf->cpu__DOT__alu_src_e = ((~ (IData)(vlSelf->rst)) 
                                   & ((~ (IData)(vlSelf->cpu__DOT__flush)) 
                                      & ((~ (IData)(vlSelf->cpu__DOT__stall)) 
                                         & (IData)(vlSelf->cpu__DOT__alu_src_d))));
    vlSelf->cpu__DOT__rs1_used_e = ((~ (IData)(vlSelf->rst)) 
                                    & ((~ (IData)(vlSelf->cpu__DOT__flush)) 
                                       & ((~ (IData)(vlSelf->cpu__DOT__stall)) 
                                          & (IData)(vlSelf->cpu__DOT__rs1_used_d))));
    vlSelf->cpu__DOT__u_execute__DOT__src_b_e = ((IData)(vlSelf->cpu__DOT__alu_src_e)
                                                  ? vlSelf->cpu__DOT__imm_ext_e
                                                  : vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out);
}

VL_INLINE_OPT void Vdut___024root___sequent__TOP__1(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___sequent__TOP__1\n"); );
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

VL_INLINE_OPT void Vdut___024root___sequent__TOP__2(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
    // Body
    __Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 = 0U;
    if (((IData)(vlSelf->cpu__DOT__reg_write_w) & (0U 
                                                   != (IData)(vlSelf->cpu__DOT__rd_w)))) {
        __Vdlyvval__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 
            = vlSelf->cpu__DOT__result_w;
        __Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 
            = vlSelf->cpu__DOT__rd_w;
    }
    if (__Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0) {
        vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[__Vdlyvdim0__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0] 
            = __Vdlyvval__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
    }
    vlSelf->a0 = vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
        [0xaU];
}

void Vdut___024root___sequent__TOP__3(Vdut___024root* vlSelf);

void Vdut___024root___eval(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vdut___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdut___024root___sequent__TOP__1(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vdut___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vdut___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vdut___024root___eval_debug_assertions(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
