// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___combo__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__pc_src = 0U;
    vlSelf->cpu__DOT__result_src_d = 0U;
    vlSelf->cpu__DOT__mem_write_d = 0U;
    vlSelf->cpu__DOT__alu_src_d = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
    vlSelf->cpu__DOT__reg_write_d = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
    vlSelf->cpu__DOT__jalr = 0U;
    if ((0x40U & vlSelf->cpu__DOT__ins)) {
        if (VL_LIKELY((0x20U & vlSelf->cpu__DOT__ins))) {
            if (VL_UNLIKELY((0x10U & vlSelf->cpu__DOT__ins))) {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__ins));
            } else if ((8U & vlSelf->cpu__DOT__ins)) {
                if (VL_LIKELY((4U & vlSelf->cpu__DOT__ins))) {
                    if (VL_LIKELY((2U & vlSelf->cpu__DOT__ins))) {
                        if (VL_LIKELY((1U & vlSelf->cpu__DOT__ins))) {
                            vlSelf->cpu__DOT__pc_src = 1U;
                            vlSelf->cpu__DOT__result_src_d = 2U;
                            vlSelf->cpu__DOT__mem_write_d = 0U;
                            vlSelf->cpu__DOT__alu_src_d = 1U;
                            vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 3U;
                            vlSelf->cpu__DOT__reg_write_d = 1U;
                            vlSelf->cpu__DOT__jalr = 0U;
                        } else {
                            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                                      7,(0x7fU & vlSelf->cpu__DOT__ins));
                        }
                    } else {
                        VL_WRITEF("ERROR: Invalid opcode %0#\n",
                                  7,(0x7fU & vlSelf->cpu__DOT__ins));
                    }
                } else {
                    VL_WRITEF("ERROR: Invalid opcode %0#\n",
                              7,(0x7fU & vlSelf->cpu__DOT__ins));
                }
            } else if ((4U & vlSelf->cpu__DOT__ins)) {
                if (VL_LIKELY((2U & vlSelf->cpu__DOT__ins))) {
                    if (VL_LIKELY((1U & vlSelf->cpu__DOT__ins))) {
                        vlSelf->cpu__DOT__pc_src = 1U;
                        vlSelf->cpu__DOT__result_src_d = 0U;
                        vlSelf->cpu__DOT__mem_write_d = 0U;
                        vlSelf->cpu__DOT__alu_src_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
                        vlSelf->cpu__DOT__reg_write_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
                        vlSelf->cpu__DOT__jalr = 1U;
                    } else {
                        VL_WRITEF("ERROR: Invalid opcode %0#\n",
                                  7,(0x7fU & vlSelf->cpu__DOT__ins));
                    }
                } else {
                    VL_WRITEF("ERROR: Invalid opcode %0#\n",
                              7,(0x7fU & vlSelf->cpu__DOT__ins));
                }
            } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__ins))) {
                if (VL_LIKELY((1U & vlSelf->cpu__DOT__ins))) {
                    vlSelf->cpu__DOT__pc_src = ((0x4000U 
                                                 & vlSelf->cpu__DOT__ins)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelf->cpu__DOT__ins)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->cpu__DOT__ins)
                                                   ? 
                                                  (vlSelf->cpu__DOT__rd_1 
                                                   >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   : 
                                                  (vlSelf->cpu__DOT__rd_1 
                                                   < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->cpu__DOT__ins)
                                                   ? 
                                                  VL_GTES_III(32, vlSelf->cpu__DOT__rd_1, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   : 
                                                  VL_LTS_III(32, vlSelf->cpu__DOT__rd_1, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                                 : 
                                                ((~ 
                                                  (vlSelf->cpu__DOT__ins 
                                                   >> 0xdU)) 
                                                 & ((0x1000U 
                                                     & vlSelf->cpu__DOT__ins)
                                                     ? 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     != vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     == vlSelf->cpu__DOT__u_execute__DOT__src_b_e))));
                    vlSelf->cpu__DOT__mem_write_d = 0U;
                    vlSelf->cpu__DOT__alu_src_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 2U;
                    vlSelf->cpu__DOT__reg_write_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 1U;
                } else {
                    VL_WRITEF("ERROR: Invalid opcode %0#\n",
                              7,(0x7fU & vlSelf->cpu__DOT__ins));
                }
            } else {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__ins));
            }
        } else {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__ins));
        }
    } else if ((0x20U & vlSelf->cpu__DOT__ins)) {
        if ((0x10U & vlSelf->cpu__DOT__ins)) {
            if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__ins))) {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__ins));
            } else if (VL_UNLIKELY((4U & vlSelf->cpu__DOT__ins))) {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__ins));
            } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__ins))) {
                if (VL_LIKELY((1U & vlSelf->cpu__DOT__ins))) {
                    vlSelf->cpu__DOT__pc_src = 0U;
                    vlSelf->cpu__DOT__result_src_d = 0U;
                    vlSelf->cpu__DOT__mem_write_d = 0U;
                    vlSelf->cpu__DOT__alu_src_d = 0U;
                    vlSelf->cpu__DOT__reg_write_d = 1U;
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 2U;
                } else {
                    VL_WRITEF("ERROR: Invalid opcode %0#\n",
                              7,(0x7fU & vlSelf->cpu__DOT__ins));
                }
            } else {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__ins));
            }
        } else if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__ins))) {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__ins));
        } else if (VL_UNLIKELY((4U & vlSelf->cpu__DOT__ins))) {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__ins));
        } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__ins))) {
            if (VL_LIKELY((1U & vlSelf->cpu__DOT__ins))) {
                vlSelf->cpu__DOT__pc_src = 0U;
                vlSelf->cpu__DOT__mem_write_d = 1U;
                vlSelf->cpu__DOT__alu_src_d = 1U;
                vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 1U;
                vlSelf->cpu__DOT__reg_write_d = 0U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
            } else {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__ins));
            }
        } else {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__ins));
        }
    } else if ((0x10U & vlSelf->cpu__DOT__ins)) {
        if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__ins))) {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__ins));
        } else if (VL_UNLIKELY((4U & vlSelf->cpu__DOT__ins))) {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__ins));
        } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__ins))) {
            if (VL_LIKELY((1U & vlSelf->cpu__DOT__ins))) {
                vlSelf->cpu__DOT__pc_src = 0U;
                vlSelf->cpu__DOT__result_src_d = 0U;
                vlSelf->cpu__DOT__mem_write_d = 0U;
                vlSelf->cpu__DOT__alu_src_d = 1U;
                vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
                vlSelf->cpu__DOT__reg_write_d = 1U;
                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 2U;
            } else {
                VL_WRITEF("ERROR: Invalid opcode %0#\n",
                          7,(0x7fU & vlSelf->cpu__DOT__ins));
            }
        } else {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__ins));
        }
    } else if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__ins))) {
        VL_WRITEF("ERROR: Invalid opcode %0#\n",7,(0x7fU 
                                                   & vlSelf->cpu__DOT__ins));
    } else if (VL_UNLIKELY((4U & vlSelf->cpu__DOT__ins))) {
        VL_WRITEF("ERROR: Invalid opcode %0#\n",7,(0x7fU 
                                                   & vlSelf->cpu__DOT__ins));
    } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__ins))) {
        if (VL_LIKELY((1U & vlSelf->cpu__DOT__ins))) {
            vlSelf->cpu__DOT__pc_src = 0U;
            vlSelf->cpu__DOT__result_src_d = 1U;
            vlSelf->cpu__DOT__mem_write_d = 0U;
            vlSelf->cpu__DOT__alu_src_d = 1U;
            vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
            vlSelf->cpu__DOT__reg_write_d = 1U;
            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
        } else {
            VL_WRITEF("ERROR: Invalid opcode %0#\n",
                      7,(0x7fU & vlSelf->cpu__DOT__ins));
        }
    } else {
        VL_WRITEF("ERROR: Invalid opcode %0#\n",7,(0x7fU 
                                                   & vlSelf->cpu__DOT__ins));
    }
    if ((4U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d)))) {
            VL_WRITEF("[%0t] %%Error: sign_extend.sv:26: Assertion failed in %Ncpu.u_decode.se: Immediate Module Error: imm_src value outside of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../../rtl/sign_extend/sign_extend.sv", 26, "");
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d)))) {
            VL_WRITEF("[%0t] %%Error: sign_extend.sv:26: Assertion failed in %Ncpu.u_decode.se: Immediate Module Error: imm_src value outside of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../../rtl/sign_extend/sign_extend.sv", 26, "");
        } else {
            vlSelf->cpu__DOT__imm_ext_d = (0xfffff000U 
                                           & vlSelf->cpu__DOT__ins);
        }
    } else {
        vlSelf->cpu__DOT__imm_ext_d = ((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d))
                                        ? ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d))
                                            ? (((- (IData)(
                                                           (vlSelf->cpu__DOT__ins 
                                                            >> 0x1fU))) 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & (vlSelf->cpu__DOT__ins 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->cpu__DOT__ins) 
                                                     | ((0x800U 
                                                         & (vlSelf->cpu__DOT__ins 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->cpu__DOT__ins 
                                                              >> 0x14U))))))
                                            : (((- (IData)(
                                                           (vlSelf->cpu__DOT__ins 
                                                            >> 0x1fU))) 
                                                << 0xdU) 
                                               | ((0x1000U 
                                                   & (vlSelf->cpu__DOT__ins 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->cpu__DOT__ins 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->cpu__DOT__ins 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->cpu__DOT__ins 
                                                              >> 7U)))))))
                                        : ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d))
                                            ? (((- (IData)(
                                                           (vlSelf->cpu__DOT__ins 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->cpu__DOT__ins 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->cpu__DOT__ins 
                                                        >> 7U))))
                                            : (((- (IData)(
                                                           (vlSelf->cpu__DOT__ins 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->cpu__DOT__ins 
                                                  >> 0x14U))));
    }
    if ((0U == (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
        vlSelf->cpu__DOT__alu_control_d = 0U;
    } else if ((1U == (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
        vlSelf->cpu__DOT__alu_control_d = 1U;
    } else if (VL_LIKELY((2U == (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic)))) {
        if ((0U == (7U & (vlSelf->cpu__DOT__ins >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_control_d = ((0x40000000U 
                                                & vlSelf->cpu__DOT__ins)
                                                ? 1U
                                                : 0U);
        } else if ((1U == (7U & (vlSelf->cpu__DOT__ins 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_control_d = 7U;
        } else if ((2U == (7U & (vlSelf->cpu__DOT__ins 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_control_d = 5U;
        } else if ((3U == (7U & (vlSelf->cpu__DOT__ins 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_control_d = 6U;
        } else if ((4U == (7U & (vlSelf->cpu__DOT__ins 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_control_d = 4U;
        } else if ((5U == (7U & (vlSelf->cpu__DOT__ins 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_control_d = ((0x40000000U 
                                                & vlSelf->cpu__DOT__ins)
                                                ? 9U
                                                : 8U);
        } else if ((6U == (7U & (vlSelf->cpu__DOT__ins 
                                 >> 0xcU)))) {
            vlSelf->cpu__DOT__alu_control_d = 3U;
        } else if (VL_LIKELY((7U == (7U & (vlSelf->cpu__DOT__ins 
                                           >> 0xcU))))) {
            vlSelf->cpu__DOT__alu_control_d = 2U;
        } else {
            VL_WRITEF("[%0t] %%Error: alu_decoder.sv:51: Assertion failed in %Ncpu.u_decode.cu.decoder_2: ALU_Decoder Error: funct3 out of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../../rtl/cu/alu_decoder.sv", 51, "");
        }
    } else {
        VL_WRITEF("[%0t] %%Error: alu_decoder.sv:54: Assertion failed in %Ncpu.u_decode.cu.decoder_2: ALU_Decoder Error: alu_op out of range!\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("../../rtl/cu/alu_decoder.sv", 54, "");
    }
    vlSelf->cpu__DOT__u_execute__DOT__src_b_e = ((IData)(vlSelf->cpu__DOT__alu_src_d)
                                                  ? vlSelf->cpu__DOT__imm_ext_d
                                                  : vlSelf->cpu__DOT__rd_2);
    vlSelf->cpu__DOT__u_execute__DOT__alu_res = ((8U 
                                                  & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,32, vlSelf->cpu__DOT__rd_1, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      : 
                                                     (- 
                                                      (vlSelf->cpu__DOT__rd_1 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((0x1fU 
                                                      >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      ? 
                                                     (vlSelf->cpu__DOT__rd_1 
                                                      >> vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      : 0U))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      ? 
                                                     (vlSelf->cpu__DOT__rd_1 
                                                      << vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      : 0U)
                                                     : 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                     ? 
                                                    VL_LTS_III(32, vlSelf->cpu__DOT__rd_1, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                     ? 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     | vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     & vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                     ? 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     - vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     + vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))));
    vlSelf->cpu__DOT__u_fetch__DOT__next_pc = ((IData)(vlSelf->cpu__DOT__pc_src)
                                                ? ((IData)(vlSelf->cpu__DOT__jalr)
                                                    ? vlSelf->cpu__DOT__u_execute__DOT__alu_res
                                                    : 
                                                   (vlSelf->cpu__DOT__pc_f 
                                                    + vlSelf->cpu__DOT__imm_ext_d))
                                                : ((IData)(4U) 
                                                   + vlSelf->cpu__DOT__pc_f));
}
