// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


void Vdut___024root__trace_chg_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_top_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdut___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdut___024root__trace_chg_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__pc_d),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__pc_plus4_d),32);
        bufp->chgCData(oldp+4,(vlSelf->cpu__DOT__result_src_e),2);
        bufp->chgBit(oldp+5,(vlSelf->cpu__DOT__jump_e));
        bufp->chgBit(oldp+6,(vlSelf->cpu__DOT__branch_e));
        bufp->chgCData(oldp+7,(vlSelf->cpu__DOT__alu_ctrl_e),4);
        bufp->chgBit(oldp+8,(vlSelf->cpu__DOT__alu_src_e));
        bufp->chgCData(oldp+9,(vlSelf->cpu__DOT__funct3_e),3);
        bufp->chgBit(oldp+10,(vlSelf->cpu__DOT__jalr_e));
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__rd1_e),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__rd2_e),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__pc_e),32);
        bufp->chgCData(oldp+14,(vlSelf->cpu__DOT__rs1_e),5);
        bufp->chgCData(oldp+15,(vlSelf->cpu__DOT__rs2_e),5);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__imm_ext_e),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__pc_plus4_e),32);
        bufp->chgBit(oldp+18,(vlSelf->cpu__DOT__rs1_used_e));
        bufp->chgBit(oldp+19,(vlSelf->cpu__DOT__rs2_used_e));
        bufp->chgCData(oldp+20,(vlSelf->cpu__DOT__result_src_m),2);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__pc_plus4_m),32);
        bufp->chgCData(oldp+22,(vlSelf->cpu__DOT__funct3_m),3);
        bufp->chgCData(oldp+23,(vlSelf->cpu__DOT__result_src_w),2);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__alu_result_w),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__read_data_w),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__pc_plus4_w),32);
        bufp->chgBit(oldp+27,((1U == (IData)(vlSelf->cpu__DOT__result_src_e))));
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__u_execute__DOT__src_b_e),32);
        bufp->chgIData(oldp+29,((vlSelf->cpu__DOT__pc_e 
                                 + vlSelf->cpu__DOT__imm_ext_e)),32);
        bufp->chgCData(oldp+30,(((0U == (IData)(vlSelf->cpu__DOT__funct3_m))
                                  ? 1U : ((1U == (IData)(vlSelf->cpu__DOT__funct3_m))
                                           ? 3U : (
                                                   (2U 
                                                    == (IData)(vlSelf->cpu__DOT__funct3_m))
                                                    ? 0xfU
                                                    : 0U)))),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+31,(((IData)(vlSelf->cpu__DOT__jalr_e)
                                  ? ((8U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                      ? ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                          ? 0U : ((2U 
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
                                      : ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                          ? ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                              ? ((1U 
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
                                              : ((1U 
                                                  & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                  ? 
                                                 VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                  : 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                          : ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                              ? ((1U 
                                                  & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                  ? 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  | vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                  : 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  & vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                              : ((1U 
                                                  & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                  ? 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  - vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                  : 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  + vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))))
                                  : (vlSelf->cpu__DOT__pc_e 
                                     + vlSelf->cpu__DOT__imm_ext_e))),32);
        bufp->chgIData(oldp+32,(((4U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                  ? ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                      ? vlSelf->cpu__DOT__u_memory__DOT__mem_word
                                      : ((1U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                          ? (0xffffU 
                                             & vlSelf->cpu__DOT__u_memory__DOT__mem_word)
                                          : (0xffU 
                                             & vlSelf->cpu__DOT__u_memory__DOT__mem_word)))
                                  : ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                      ? vlSelf->cpu__DOT__u_memory__DOT__mem_word
                                      : ((1U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT__u_memory__DOT__mem_word 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->cpu__DOT__u_memory__DOT__mem_word))
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT__u_memory__DOT__mem_word 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->cpu__DOT__u_memory__DOT__mem_word)))))),32);
        bufp->chgBit(oldp+33,(((4U & (IData)(vlSelf->cpu__DOT__funct3_e))
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
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__funct3_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   != vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   : 
                                                  (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   == vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))));
        bufp->chgIData(oldp+34,(((8U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                  ? ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                      ? 0U : ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? 0U
                                               : ((1U 
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
                                  : ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                      ? ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                              ? ((0x1fU 
                                                  >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                  ? 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  << vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                  : 0U)
                                              : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                              ? VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                              : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                      : ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                              ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 | vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                              : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 & vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                              ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 - vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                              : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 + vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))))),32);
        bufp->chgBit(oldp+35,((1U & ((8U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                      ? ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                          ? 0U : ((2U 
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
                                      : ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                          ? ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                              ? ((1U 
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
                                              : ((1U 
                                                  & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                  ? 
                                                 VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                  : 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                          : ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                              ? ((1U 
                                                  & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                  ? 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  | vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                  : 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  & vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                              : ((1U 
                                                  & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                  ? 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  - vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                  : 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  + vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))))));
        bufp->chgBit(oldp+36,((1U & ((2U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                      ? ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                          ? 0U : vlSelf->cpu__DOT__alu_result_m)
                                      : ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                          ? vlSelf->cpu__DOT__result_w
                                          : vlSelf->cpu__DOT__rd2_e)))));
        bufp->chgIData(oldp+37,(((2U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                  ? ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                      ? 0U : vlSelf->cpu__DOT__alu_result_m)
                                  : ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                      ? vlSelf->cpu__DOT__result_w
                                      : vlSelf->cpu__DOT__rd2_e))),32);
        bufp->chgIData(oldp+38,(((IData)(vlSelf->cpu__DOT__pc_src_e)
                                  ? ((IData)(vlSelf->cpu__DOT__jalr_e)
                                      ? ((8U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                          ? ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? 0U
                                               : ((1U 
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
                                          : ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                              ? ((2U 
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
                                              : ((2U 
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
                                      : (vlSelf->cpu__DOT__pc_e 
                                         + vlSelf->cpu__DOT__imm_ext_e))
                                  : ((IData)(4U) + vlSelf->cpu__DOT__pc_f))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+39,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0]),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[1]),32);
        bufp->chgIData(oldp+41,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[2]),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[3]),32);
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[4]),32);
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[5]),32);
        bufp->chgIData(oldp+45,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[6]),32);
        bufp->chgIData(oldp+46,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[7]),32);
        bufp->chgIData(oldp+47,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[8]),32);
        bufp->chgIData(oldp+48,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[9]),32);
        bufp->chgIData(oldp+49,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[10]),32);
        bufp->chgIData(oldp+50,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[11]),32);
        bufp->chgIData(oldp+51,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[12]),32);
        bufp->chgIData(oldp+52,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[13]),32);
        bufp->chgIData(oldp+53,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[14]),32);
        bufp->chgIData(oldp+54,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[15]),32);
        bufp->chgIData(oldp+55,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[16]),32);
        bufp->chgIData(oldp+56,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[17]),32);
        bufp->chgIData(oldp+57,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[18]),32);
        bufp->chgIData(oldp+58,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[19]),32);
        bufp->chgIData(oldp+59,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[20]),32);
        bufp->chgIData(oldp+60,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[21]),32);
        bufp->chgIData(oldp+61,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[22]),32);
        bufp->chgIData(oldp+62,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[23]),32);
        bufp->chgIData(oldp+63,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[24]),32);
        bufp->chgIData(oldp+64,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[25]),32);
        bufp->chgIData(oldp+65,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[26]),32);
        bufp->chgIData(oldp+66,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[27]),32);
        bufp->chgIData(oldp+67,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[28]),32);
        bufp->chgIData(oldp+68,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[29]),32);
        bufp->chgIData(oldp+69,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[30]),32);
        bufp->chgIData(oldp+70,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+71,(vlSelf->cpu__DOT__pc_src_e));
        bufp->chgIData(oldp+72,(((IData)(4U) + vlSelf->cpu__DOT__pc_f)),32);
        bufp->chgIData(oldp+73,(vlSelf->cpu__DOT__pc_f),32);
        bufp->chgIData(oldp+74,(((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                  [(0x3fffU & ((IData)(3U) 
                                               + vlSelf->cpu__DOT__pc_f))] 
                                  << 0x18U) | ((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
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
                                                   & vlSelf->cpu__DOT__pc_f)])))),32);
        bufp->chgIData(oldp+75,(vlSelf->cpu__DOT__instr_d),32);
        bufp->chgBit(oldp+76,(vlSelf->cpu__DOT__reg_write_w));
        bufp->chgIData(oldp+77,(vlSelf->cpu__DOT__result_w),32);
        bufp->chgCData(oldp+78,(vlSelf->cpu__DOT__rd_w),5);
        bufp->chgBit(oldp+79,(vlSelf->cpu__DOT__reg_write_d));
        bufp->chgCData(oldp+80,(vlSelf->cpu__DOT__result_src_d),2);
        bufp->chgBit(oldp+81,(vlSelf->cpu__DOT__mem_write_d));
        bufp->chgCData(oldp+82,(vlSelf->cpu__DOT__alu_ctrl_d),4);
        bufp->chgBit(oldp+83,(vlSelf->cpu__DOT__alu_src_d));
        bufp->chgCData(oldp+84,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                          >> 7U))),5);
        bufp->chgCData(oldp+85,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+86,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+87,(vlSelf->cpu__DOT__imm_ext_d),32);
        bufp->chgCData(oldp+88,((7U & (vlSelf->cpu__DOT__instr_d 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+89,(vlSelf->cpu__DOT__jalr_d));
        bufp->chgBit(oldp+90,(vlSelf->cpu__DOT__rs1_used_d));
        bufp->chgBit(oldp+91,(vlSelf->cpu__DOT__rs2_used_d));
        bufp->chgBit(oldp+92,(vlSelf->cpu__DOT__reg_write_e));
        bufp->chgBit(oldp+93,(vlSelf->cpu__DOT__mem_write_e));
        bufp->chgCData(oldp+94,(vlSelf->cpu__DOT__rd_e),5);
        bufp->chgIData(oldp+95,(vlSelf->cpu__DOT__alu_result_m),32);
        bufp->chgCData(oldp+96,(vlSelf->cpu__DOT__fwd_rs1),2);
        bufp->chgCData(oldp+97,(vlSelf->cpu__DOT__fwd_rs2),2);
        bufp->chgBit(oldp+98,(vlSelf->cpu__DOT__reg_write_m));
        bufp->chgBit(oldp+99,(vlSelf->cpu__DOT__mem_write_m));
        bufp->chgIData(oldp+100,(vlSelf->cpu__DOT__write_data_m),32);
        bufp->chgCData(oldp+101,(vlSelf->cpu__DOT__rd_m),5);
        bufp->chgBit(oldp+102,(vlSelf->cpu__DOT__stall));
        bufp->chgBit(oldp+103,(vlSelf->cpu__DOT__flush));
        bufp->chgCData(oldp+104,(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d),3);
        bufp->chgCData(oldp+105,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl),2);
        bufp->chgBit(oldp+106,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_en));
        bufp->chgBit(oldp+107,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__div_en));
        bufp->chgCData(oldp+108,((0x7fU & vlSelf->cpu__DOT__instr_d)),7);
        bufp->chgCData(oldp+109,((vlSelf->cpu__DOT__instr_d 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+110,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic),3);
        bufp->chgBit(oldp+111,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d));
        bufp->chgBit(oldp+112,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d));
        bufp->chgBit(oldp+113,((1U & (vlSelf->cpu__DOT__instr_d 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+114,(vlSelf->cpu__DOT__u_execute__DOT__src_a_e),32);
        bufp->chgSData(oldp+115,((0x3fffU & vlSelf->cpu__DOT__pc_f)),14);
        bufp->chgIData(oldp+116,(vlSelf->cpu__DOT__u_memory__DOT__mem_word),32);
        bufp->chgCData(oldp+117,((0xffU & vlSelf->cpu__DOT__u_memory__DOT__mem_word)),8);
        bufp->chgSData(oldp+118,((0xffffU & vlSelf->cpu__DOT__u_memory__DOT__mem_word)),16);
        bufp->chgCData(oldp+119,(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en),4);
        bufp->chgIData(oldp+120,((0x1ffffU & vlSelf->cpu__DOT__alu_result_m)),17);
    }
    bufp->chgBit(oldp+121,(vlSelf->clk));
    bufp->chgBit(oldp+122,(vlSelf->rst));
    bufp->chgBit(oldp+123,(vlSelf->trigger));
    bufp->chgIData(oldp+124,(vlSelf->a0),32);
    bufp->chgIData(oldp+125,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                             [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+126,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                             [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                        >> 0x14U))]),32);
}

void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_cleanup\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
