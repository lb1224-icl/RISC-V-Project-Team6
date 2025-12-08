// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut___024root.h"

VL_INLINE_OPT void Vdut___024root___sequent__TOP__3(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->cpu__DOT__result_w = ((2U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                   ? ((1U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                       ? 0U : vlSelf->cpu__DOT__pc_plus4_w)
                                   : ((1U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                       ? vlSelf->cpu__DOT__read_data_w
                                       : vlSelf->cpu__DOT__alu_result_w));
    if (vlSelf->rst) {
        vlSelf->cpu__DOT__write_data_m = 0U;
        vlSelf->cpu__DOT__alu_result_m = 0U;
        vlSelf->cpu__DOT__rd_w = 0U;
        vlSelf->cpu__DOT__rd_m = 0U;
        vlSelf->cpu__DOT__rd_e = 0U;
        vlSelf->cpu__DOT__instr_d = 0U;
        vlSelf->cpu__DOT__pc_f = 0U;
    } else {
        vlSelf->cpu__DOT__write_data_m = vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out;
        vlSelf->cpu__DOT__alu_result_m = vlSelf->cpu__DOT__alu_result_e;
        vlSelf->cpu__DOT__rd_w = vlSelf->cpu__DOT__rd_m;
        vlSelf->cpu__DOT__rd_m = vlSelf->cpu__DOT__rd_e;
        if (vlSelf->cpu__DOT__flush) {
            vlSelf->cpu__DOT__rd_e = 0U;
            vlSelf->cpu__DOT__instr_d = 0U;
        } else {
            vlSelf->cpu__DOT__rd_e = ((IData)(vlSelf->cpu__DOT__stall)
                                       ? 0U : (0x1fU 
                                               & (vlSelf->cpu__DOT__instr_d 
                                                  >> 7U)));
            if ((1U & (~ (IData)(vlSelf->cpu__DOT__stall)))) {
                vlSelf->cpu__DOT__instr_d = ((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                              [(0x3fffU 
                                                & ((IData)(3U) 
                                                   + vlSelf->cpu__DOT__pc_f))] 
                                              << 0x18U) 
                                             | ((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                                 [(0x3fffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->cpu__DOT__pc_f))] 
                                                 << 0x10U) 
                                                | ((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                                    [
                                                    (0x3fffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->cpu__DOT__pc_f))] 
                                                    << 8U) 
                                                   | vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                                   [
                                                   (0x3fffU 
                                                    & vlSelf->cpu__DOT__pc_f)])));
            }
        }
        if ((1U & (~ (IData)(vlSelf->cpu__DOT__stall)))) {
            vlSelf->cpu__DOT__pc_f = vlSelf->cpu__DOT__u_fetch__DOT__next_pc;
        }
    }
    vlSelf->cpu__DOT__mem_write_m = ((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->cpu__DOT__mem_write_e));
    vlSelf->cpu__DOT__reg_write_w = ((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->cpu__DOT__reg_write_m));
    vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en 
        = ((IData)(vlSelf->cpu__DOT__mem_write_m) ? 
           ((0U == (IData)(vlSelf->cpu__DOT__funct3_m))
             ? 1U : ((1U == (IData)(vlSelf->cpu__DOT__funct3_m))
                      ? 3U : ((2U == (IData)(vlSelf->cpu__DOT__funct3_m))
                               ? 0xfU : 0U))) : 0U);
    vlSelf->cpu__DOT__mem_write_e = ((~ (IData)(vlSelf->rst)) 
                                     & ((~ (IData)(vlSelf->cpu__DOT__flush)) 
                                        & ((~ (IData)(vlSelf->cpu__DOT__stall)) 
                                           & (IData)(vlSelf->cpu__DOT__mem_write_d))));
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
                                     & (IData)(vlSelf->cpu__DOT__reg_write_e));
    vlSelf->cpu__DOT__reg_write_e = ((~ (IData)(vlSelf->rst)) 
                                     & ((~ (IData)(vlSelf->cpu__DOT__flush)) 
                                        & ((~ (IData)(vlSelf->cpu__DOT__stall)) 
                                           & (IData)(vlSelf->cpu__DOT__reg_write_d))));
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
    vlSelf->cpu__DOT__u_execute__DOT__src_a_e = ((2U 
                                                  & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                                   ? 0U
                                                   : vlSelf->cpu__DOT__alu_result_m)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                                   ? vlSelf->cpu__DOT__result_w
                                                   : vlSelf->cpu__DOT__rd1_e));
    vlSelf->cpu__DOT__pc_src_e = ((IData)(vlSelf->cpu__DOT__jump_e) 
                                  | (((4U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                       ? ((2U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                           ? ((1U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                               ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                           : ((1U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                               ? VL_GTES_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                       : ((~ ((IData)(vlSelf->cpu__DOT__funct3_e) 
                                              >> 1U)) 
                                          & ((1U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                              ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 != vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                              : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 == vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))) 
                                     & (IData)(vlSelf->cpu__DOT__branch_e)));
    vlSelf->cpu__DOT__flush = 0U;
    vlSelf->cpu__DOT__result_src_d = 0U;
    vlSelf->cpu__DOT__mem_write_d = 0U;
    vlSelf->cpu__DOT__alu_src_d = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
    vlSelf->cpu__DOT__reg_write_d = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
    vlSelf->cpu__DOT__jalr_d = 0U;
    vlSelf->cpu__DOT__rs1_used_d = 0U;
    vlSelf->cpu__DOT__rs2_used_d = 0U;
    if (vlSelf->cpu__DOT__pc_src_e) {
        vlSelf->cpu__DOT__flush = 1U;
    }
    if ((0x40U & vlSelf->cpu__DOT__instr_d)) {
        if ((0x20U & vlSelf->cpu__DOT__instr_d)) {
            if (VL_UNLIKELY((0x10U & vlSelf->cpu__DOT__instr_d))) {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__instr_d));
            } else if ((8U & vlSelf->cpu__DOT__instr_d)) {
                if (VL_LIKELY((4U & vlSelf->cpu__DOT__instr_d))) {
                    if (VL_LIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
                        if (VL_LIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
                            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 1U;
                            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 0U;
                            vlSelf->cpu__DOT__result_src_d = 2U;
                            vlSelf->cpu__DOT__mem_write_d = 0U;
                            vlSelf->cpu__DOT__alu_src_d = 1U;
                            vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 3U;
                            vlSelf->cpu__DOT__reg_write_d = 1U;
                            vlSelf->cpu__DOT__jalr_d = 0U;
                            vlSelf->cpu__DOT__rs1_used_d = 0U;
                            vlSelf->cpu__DOT__rs2_used_d = 0U;
                        } else {
                            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                                      7,(0x7fU & vlSelf->cpu__DOT__instr_d));
                        }
                    } else {
                        VL_WRITEF("ERROR: Invalid opcode %0#\n",
                                  7,(0x7fU & vlSelf->cpu__DOT__instr_d));
                    }
                } else {
                    VL_WRITEF("ERROR: Invalid opcode %0#\n",
                              7,(0x7fU & vlSelf->cpu__DOT__instr_d));
                }
            } else if ((4U & vlSelf->cpu__DOT__instr_d)) {
                if (VL_LIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
                    if (VL_LIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 0U;
                        vlSelf->cpu__DOT__result_src_d = 0U;
                        vlSelf->cpu__DOT__mem_write_d = 0U;
                        vlSelf->cpu__DOT__alu_src_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
                        vlSelf->cpu__DOT__reg_write_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
                        vlSelf->cpu__DOT__jalr_d = 1U;
                        vlSelf->cpu__DOT__rs1_used_d = 1U;
                        vlSelf->cpu__DOT__rs2_used_d = 0U;
                    } else {
                        VL_WRITEF("ERROR: Invalid opcode %0#\n",
                                  7,(0x7fU & vlSelf->cpu__DOT__instr_d));
                    }
                } else {
                    VL_WRITEF("ERROR: Invalid opcode %0#\n",
                              7,(0x7fU & vlSelf->cpu__DOT__instr_d));
                }
            } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
                if (VL_LIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 1U;
                    vlSelf->cpu__DOT__mem_write_d = 0U;
                    vlSelf->cpu__DOT__alu_src_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 2U;
                    vlSelf->cpu__DOT__reg_write_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 1U;
                    vlSelf->cpu__DOT__rs1_used_d = 1U;
                    vlSelf->cpu__DOT__rs2_used_d = 1U;
                } else {
                    VL_WRITEF("ERROR: Invalid opcode %0#\n",
                              7,(0x7fU & vlSelf->cpu__DOT__instr_d));
                }
            } else {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__instr_d));
            }
        } else if (VL_UNLIKELY((0x10U & vlSelf->cpu__DOT__instr_d))) {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__instr_d));
        } else if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__instr_d))) {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__instr_d));
        } else if ((4U & vlSelf->cpu__DOT__instr_d)) {
            if (VL_UNLIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__instr_d));
            } else if (VL_UNLIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__instr_d));
            } else {
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 0U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 0U;
                vlSelf->cpu__DOT__result_src_d = 0U;
                vlSelf->cpu__DOT__mem_write_d = 0U;
                vlSelf->cpu__DOT__alu_src_d = 1U;
                vlSelf->cpu__DOT__reg_write_d = 1U;
                vlSelf->cpu__DOT__jalr_d = 0U;
                vlSelf->cpu__DOT__rs1_used_d = 1U;
                vlSelf->cpu__DOT__rs2_used_d = 1U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__div_en = 1U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 5U;
            }
        } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
            if (VL_LIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 0U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 0U;
                vlSelf->cpu__DOT__result_src_d = 0U;
                vlSelf->cpu__DOT__mem_write_d = 0U;
                vlSelf->cpu__DOT__alu_src_d = 1U;
                vlSelf->cpu__DOT__reg_write_d = 1U;
                vlSelf->cpu__DOT__jalr_d = 0U;
                vlSelf->cpu__DOT__rs1_used_d = 1U;
                vlSelf->cpu__DOT__rs2_used_d = 1U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_en = 1U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 4U;
            } else {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__instr_d));
            }
        } else {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__instr_d));
        }
    } else if ((0x20U & vlSelf->cpu__DOT__instr_d)) {
        if ((0x10U & vlSelf->cpu__DOT__instr_d)) {
            if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__instr_d))) {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__instr_d));
            } else if ((4U & vlSelf->cpu__DOT__instr_d)) {
                if (VL_LIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
                    if (VL_LIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 0U;
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 0U;
                        vlSelf->cpu__DOT__result_src_d = 0U;
                        vlSelf->cpu__DOT__mem_write_d = 0U;
                        vlSelf->cpu__DOT__alu_src_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 3U;
                        vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 4U;
                        vlSelf->cpu__DOT__reg_write_d = 1U;
                        vlSelf->cpu__DOT__jalr_d = 0U;
                        vlSelf->cpu__DOT__rs1_used_d = 0U;
                        vlSelf->cpu__DOT__rs2_used_d = 0U;
                    } else {
                        VL_WRITEF("ERROR: Invalid opcode %0#\n",
                                  7,(0x7fU & vlSelf->cpu__DOT__instr_d));
                    }
                } else {
                    VL_WRITEF("ERROR: Invalid opcode %0#\n",
                              7,(0x7fU & vlSelf->cpu__DOT__instr_d));
                }
            } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
                if (VL_LIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 0U;
                    vlSelf->cpu__DOT__result_src_d = 0U;
                    vlSelf->cpu__DOT__mem_write_d = 0U;
                    vlSelf->cpu__DOT__alu_src_d = 0U;
                    vlSelf->cpu__DOT__reg_write_d = 1U;
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 2U;
                    vlSelf->cpu__DOT__rs1_used_d = 1U;
                    vlSelf->cpu__DOT__rs2_used_d = 1U;
                } else {
                    VL_WRITEF("ERROR: Invalid opcode %0#\n",
                              7,(0x7fU & vlSelf->cpu__DOT__instr_d));
                }
            } else {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__instr_d));
            }
        } else if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__instr_d))) {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__instr_d));
        } else if (VL_UNLIKELY((4U & vlSelf->cpu__DOT__instr_d))) {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__instr_d));
        } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
            if (VL_LIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 0U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 0U;
                vlSelf->cpu__DOT__mem_write_d = 1U;
                vlSelf->cpu__DOT__alu_src_d = 1U;
                vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 1U;
                vlSelf->cpu__DOT__reg_write_d = 0U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
                vlSelf->cpu__DOT__rs1_used_d = 1U;
                vlSelf->cpu__DOT__rs2_used_d = 1U;
            } else {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__instr_d));
            }
        } else {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__instr_d));
        }
    } else if ((0x10U & vlSelf->cpu__DOT__instr_d)) {
        if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__instr_d))) {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__instr_d));
        } else if ((4U & vlSelf->cpu__DOT__instr_d)) {
            if (VL_LIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
                if (VL_LIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 0U;
                    vlSelf->cpu__DOT__mem_write_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 4U;
                    vlSelf->cpu__DOT__reg_write_d = 0U;
                    vlSelf->cpu__DOT__jalr_d = 0U;
                    vlSelf->cpu__DOT__rs1_used_d = 0U;
                    vlSelf->cpu__DOT__rs2_used_d = 0U;
                } else {
                    VL_WRITEF("ERROR: Invalid opcode %0#\n",
                              7,(0x7fU & vlSelf->cpu__DOT__instr_d));
                }
            } else {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__instr_d));
            }
        } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
            if (VL_LIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 0U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 0U;
                vlSelf->cpu__DOT__result_src_d = 0U;
                vlSelf->cpu__DOT__mem_write_d = 0U;
                vlSelf->cpu__DOT__alu_src_d = 1U;
                vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
                vlSelf->cpu__DOT__reg_write_d = 1U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 2U;
                vlSelf->cpu__DOT__rs1_used_d = 1U;
                vlSelf->cpu__DOT__rs2_used_d = 0U;
            } else {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__instr_d));
            }
        } else {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__instr_d));
        }
    } else if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__instr_d))) {
        VL_WRITEF("ERROR: Invalid opcode %0#\n",7,(0x7fU 
                                                   & vlSelf->cpu__DOT__instr_d));
    } else if (VL_UNLIKELY((4U & vlSelf->cpu__DOT__instr_d))) {
        VL_WRITEF("ERROR: Invalid opcode %0#\n",7,(0x7fU 
                                                   & vlSelf->cpu__DOT__instr_d));
    } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__instr_d))) {
        if (VL_LIKELY((1U & vlSelf->cpu__DOT__instr_d))) {
            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d = 0U;
            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d = 0U;
            vlSelf->cpu__DOT__result_src_d = 1U;
            vlSelf->cpu__DOT__mem_write_d = 0U;
            vlSelf->cpu__DOT__alu_src_d = 1U;
            vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
            vlSelf->cpu__DOT__reg_write_d = 1U;
            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
            vlSelf->cpu__DOT__rs1_used_d = 1U;
            vlSelf->cpu__DOT__rs2_used_d = 0U;
        } else {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__instr_d));
        }
    } else {
        VL_WRITEF("ERROR: Invalid opcode %0#\n",7,(0x7fU 
                                                   & vlSelf->cpu__DOT__instr_d));
    }
    vlSelf->cpu__DOT__imm_ext_d = 0U;
    if ((4U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d)))) {
            VL_WRITEF("[%0t] %%Error: sign_extend.sv:28: Assertion failed in %Ncpu.u_decode.se: Immediate Module Error: imm_src value outside of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("tests/../../rtl/sign_extend/sign_extend.sv", 28, "");
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d)))) {
            VL_WRITEF("[%0t] %%Error: sign_extend.sv:28: Assertion failed in %Ncpu.u_decode.se: Immediate Module Error: imm_src value outside of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("tests/../../rtl/sign_extend/sign_extend.sv", 28, "");
        } else {
            vlSelf->cpu__DOT__imm_ext_d = (0xfffff000U 
                                           & vlSelf->cpu__DOT__instr_d);
        }
    } else {
        vlSelf->cpu__DOT__imm_ext_d = ((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d))
                                        ? ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d))
                                            ? (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & (vlSelf->cpu__DOT__instr_d 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->cpu__DOT__instr_d) 
                                                     | ((0x800U 
                                                         & (vlSelf->cpu__DOT__instr_d 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->cpu__DOT__instr_d 
                                                              >> 0x14U))))))
                                            : (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0xdU) 
                                               | ((0x1000U 
                                                   & (vlSelf->cpu__DOT__instr_d 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->cpu__DOT__instr_d 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->cpu__DOT__instr_d 
                                                              >> 7U)))))))
                                        : ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d))
                                            ? (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->cpu__DOT__instr_d 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->cpu__DOT__instr_d 
                                                        >> 7U))))
                                            : (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->cpu__DOT__instr_d 
                                                  >> 0x14U))));
    }
    if ((4U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic)))) {
            VL_WRITEF("[%0t] %%Error: alu_decoder.sv:92: Assertion failed in %Ncpu.u_decode.cu.decoder_2: ALU_Decoder Error: alu_op out of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("tests/../../rtl/cu/alu_decoder.sv", 92, "");
        } else if ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
            if ((0U == (7U & (vlSelf->cpu__DOT__instr_d 
                              >> 0xcU)))) {
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl = 0U;
            } else if ((1U == (7U & (vlSelf->cpu__DOT__instr_d 
                                     >> 0xcU)))) {
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl = 1U;
            } else if ((2U == (7U & (vlSelf->cpu__DOT__instr_d 
                                     >> 0xcU)))) {
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl = 2U;
            } else if (VL_LIKELY((3U == (7U & (vlSelf->cpu__DOT__instr_d 
                                               >> 0xcU))))) {
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl = 3U;
            } else {
                VL_WRITEF("[%0t] %%Error: alu_decoder.sv:89: Assertion failed in %Ncpu.u_decode.cu.decoder_2: ALU_Decoder Divide Logic Error: funct3 out of range!\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("tests/../../rtl/cu/alu_decoder.sv", 89, "");
            }
        } else if ((0U == (7U & (vlSelf->cpu__DOT__instr_d 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl = 0U;
        } else if ((1U == (7U & (vlSelf->cpu__DOT__instr_d 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl = 1U;
        } else if ((2U == (7U & (vlSelf->cpu__DOT__instr_d 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl = 2U;
        } else if (VL_LIKELY((3U == (7U & (vlSelf->cpu__DOT__instr_d 
                                           >> 0xcU))))) {
            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl = 3U;
        } else {
            VL_WRITEF("[%0t] %%Error: alu_decoder.sv:72: Assertion failed in %Ncpu.u_decode.cu.decoder_2: ALU_Decoder Multiply Logic Error: funct3 out of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("tests/../../rtl/cu/alu_decoder.sv", 72, "");
        }
    } else if ((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
            vlSelf->cpu__DOT__alu_ctrl_d = 0xfU;
        } else if ((0U == (7U & (vlSelf->cpu__DOT__instr_d 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_ctrl_d = ((0x40000000U 
                                             & vlSelf->cpu__DOT__instr_d)
                                             ? 1U : 0U);
        } else if ((1U == (7U & (vlSelf->cpu__DOT__instr_d 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_ctrl_d = 7U;
        } else if ((2U == (7U & (vlSelf->cpu__DOT__instr_d 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_ctrl_d = 5U;
        } else if ((3U == (7U & (vlSelf->cpu__DOT__instr_d 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_ctrl_d = 6U;
        } else if ((4U == (7U & (vlSelf->cpu__DOT__instr_d 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_ctrl_d = 4U;
        } else if ((5U == (7U & (vlSelf->cpu__DOT__instr_d 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_ctrl_d = ((0x40000000U 
                                             & vlSelf->cpu__DOT__instr_d)
                                             ? 9U : 8U);
        } else if ((6U == (7U & (vlSelf->cpu__DOT__instr_d 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_ctrl_d = 3U;
        } else if (VL_LIKELY((7U == (7U & (vlSelf->cpu__DOT__instr_d 
                                           >> 0xcU))))) {
            vlSelf->cpu__DOT__alu_ctrl_d = 2U;
        } else {
            VL_WRITEF("[%0t] %%Error: alu_decoder.sv:53: Assertion failed in %Ncpu.u_decode.cu.decoder_2: ALU_Decoder Error: funct3 out of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("tests/../../rtl/cu/alu_decoder.sv", 53, "");
        }
    } else {
        vlSelf->cpu__DOT__alu_ctrl_d = ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))
                                         ? 1U : 0U);
    }
    vlSelf->cpu__DOT__stall = 0U;
    if (((1U == (IData)(vlSelf->cpu__DOT__result_src_e)) 
         & (((IData)(vlSelf->cpu__DOT__rs1_used_d) 
             & ((IData)(vlSelf->cpu__DOT__rd_e) == 
                (0x1fU & (vlSelf->cpu__DOT__instr_d 
                          >> 0xfU)))) | ((IData)(vlSelf->cpu__DOT__rs2_used_d) 
                                         & ((IData)(vlSelf->cpu__DOT__rd_e) 
                                            == (0x1fU 
                                                & (vlSelf->cpu__DOT__instr_d 
                                                   >> 0x14U))))))) {
        vlSelf->cpu__DOT__stall = 1U;
    }
    if (VL_UNLIKELY((0x4000U <= ((IData)(3U) + (0x3fffU 
                                                & vlSelf->cpu__DOT__pc_f))))) {
        VL_WRITEF("ERROR: PC out of range! PC=%x\n",
                  32,vlSelf->cpu__DOT__pc_f);
    }
    vlSelf->cpu__DOT__u_fetch__DOT__next_pc = ((IData)(vlSelf->cpu__DOT__pc_src_e)
                                                ? ((IData)(vlSelf->cpu__DOT__jalr_e)
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                        ? 
                                                       ((0x1fU 
                                                         >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                         ? 
                                                        VL_SHIFTRS_III(32,32,32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                         : 
                                                        (- 
                                                         (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                          >> 0x1fU)))
                                                        : 
                                                       ((0x1fU 
                                                         >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                         ? 
                                                        (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                         >> vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                         : 0U))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                        ? 
                                                       ((0x1fU 
                                                         >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                         ? 
                                                        (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                         << vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                         : 0U)
                                                        : 
                                                       (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                        < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                        ? 
                                                       VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                        : 
                                                       (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                        ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                        ? 
                                                       (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                        | vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                        : 
                                                       (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                        & vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                        ? 
                                                       (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                        - vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                        : 
                                                       (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                        + vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))))
                                                    : 
                                                   (vlSelf->cpu__DOT__pc_e 
                                                    + vlSelf->cpu__DOT__imm_ext_e))
                                                : ((IData)(4U) 
                                                   + vlSelf->cpu__DOT__pc_f));
}
