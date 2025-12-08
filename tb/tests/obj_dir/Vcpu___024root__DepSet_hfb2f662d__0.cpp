// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024root.h"

extern const VlUnpacked<CData/*1:0*/, 512> Vcpu__ConstPool__TABLE_h8586ea3a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h40cdecfe_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h974edfa5_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_h7cb9807b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h29afd16c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h02ce41a5_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_hde739471_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_hc9d8290d_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_h7b3a9595_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h105add6f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_hcdf91a98_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_ha080a04b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h897fe1f4_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h7799c656_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h2c08dd0a_0;

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__5(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__5\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    SData/*8:0*/ __Vtableidx2;
    // Body
    if (vlSelf->rst) {
        vlSelf->cpu__DOT__div_ctrl_e = 0U;
        vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state = 0U;
        vlSelf->cpu__DOT__rd1_e = 0U;
        vlSelf->cpu__DOT__rd2_e = 0U;
        vlSelf->cpu__DOT__instr_d = 0U;
    } else {
        if (vlSelf->cpu__DOT__flush) {
            vlSelf->cpu__DOT__div_ctrl_e = 0U;
            vlSelf->cpu__DOT__rd1_e = 0U;
            vlSelf->cpu__DOT__rd2_e = 0U;
            vlSelf->cpu__DOT__instr_d = 0U;
        } else {
            if (vlSelf->cpu__DOT__stall) {
                vlSelf->cpu__DOT__div_ctrl_e = 0U;
                vlSelf->cpu__DOT__rd1_e = 0U;
                vlSelf->cpu__DOT__rd2_e = 0U;
            } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__div_stall)))) {
                vlSelf->cpu__DOT__div_ctrl_e = vlSelf->cpu__DOT__div_ctrl_d;
                vlSelf->cpu__DOT__rd1_e = vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                    [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                               >> 0xfU))];
                vlSelf->cpu__DOT__rd2_e = vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                    [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                               >> 0x14U))];
            }
            if ((1U & ((~ (IData)(vlSelf->cpu__DOT__stall)) 
                       & (~ (IData)(vlSelf->cpu__DOT__div_stall))))) {
                vlSelf->cpu__DOT__instr_d = vlSelf->cpu__DOT__instr_f;
            }
        }
        vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state 
            = vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__next_state;
    }
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__is_signed 
        = ((0U == (IData)(vlSelf->cpu__DOT__div_ctrl_e)) 
           | (2U == (IData)(vlSelf->cpu__DOT__div_ctrl_e)));
    __Vtableidx2 = (((IData)(vlSelf->cpu__DOT__div_en_e) 
                     << 8U) | (((IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter) 
                                << 2U) | (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state)));
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__next_state 
        = Vcpu__ConstPool__TABLE_h8586ea3a_0[__Vtableidx2];
    vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
        = ((2U & (IData)(vlSelf->cpu__DOT__fwd_rs1))
            ? ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                ? 0U : vlSelf->cpu__DOT__alu_result_m)
            : ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                ? vlSelf->cpu__DOT__result_w : vlSelf->cpu__DOT__rd1_e));
    if ((2U & (IData)(vlSelf->cpu__DOT__mul_ctrl_e))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__mul_ctrl_e))) {
            vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
                = ((QData)((IData)(vlSelf->cpu__DOT__rd1_e)) 
                   * (QData)((IData)(vlSelf->cpu__DOT__rd2_e)));
            vlSelf->cpu__DOT__u_execute__DOT__mul_out_e 
                = (IData)((vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
                           >> 0x20U));
        } else {
            vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
                = ((((QData)((IData)((- (IData)((vlSelf->cpu__DOT__rd1_e 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->cpu__DOT__rd1_e))) 
                   * (QData)((IData)(vlSelf->cpu__DOT__rd2_e)));
            vlSelf->cpu__DOT__u_execute__DOT__mul_out_e 
                = (IData)((vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
                           >> 0x20U));
        }
    } else if ((1U & (IData)(vlSelf->cpu__DOT__mul_ctrl_e))) {
        vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->cpu__DOT__rd1_e), 
                          VL_EXTENDS_QI(64,32, vlSelf->cpu__DOT__rd2_e));
        vlSelf->cpu__DOT__u_execute__DOT__mul_out_e 
            = (IData)((vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
                       >> 0x20U));
    } else {
        vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
            = ((QData)((IData)(vlSelf->cpu__DOT__rd1_e)) 
               * (QData)((IData)(vlSelf->cpu__DOT__rd2_e)));
        vlSelf->cpu__DOT__u_execute__DOT__mul_out_e 
            = (IData)(vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result);
    }
    vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out 
        = ((2U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
            ? ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                ? 0U : vlSelf->cpu__DOT__alu_result_m)
            : ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                ? vlSelf->cpu__DOT__result_w : vlSelf->cpu__DOT__rd2_e));
    vlSelf->cpu__DOT__u_execute__DOT__src_b_e = ((IData)(vlSelf->cpu__DOT__alu_src_e)
                                                  ? vlSelf->cpu__DOT__imm_ext_e
                                                  : vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out);
    vlSelf->cpu__DOT__instr_f = ((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
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
                                                   & vlSelf->cpu__DOT__pc_f)])));
    vlSelf->cpu__DOT__div_stall = 0U;
    if (((IData)(vlSelf->cpu__DOT__div_en_e) & (~ (IData)(vlSelf->cpu__DOT__div_done_e)))) {
        vlSelf->cpu__DOT__div_stall = 1U;
    }
    vlSelf->cpu__DOT__u_execute__DOT__alu_res = ((8U 
                                                  & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                     ? vlSelf->cpu__DOT__u_execute__DOT__src_b_e
                                                     : 0U)
                                                    : 0U)
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
                                                     VL_SHIFTRS_III(32,32,32, vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      : 
                                                     (- 
                                                      (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((0x1fU 
                                                      >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      ? 
                                                     (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
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
                                                     (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                      << vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      : 0U)
                                                     : 
                                                    (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                     < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                     ? 
                                                    VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 
                                                    (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                     ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                     ? 
                                                    (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                     | vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 
                                                    (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                     & vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                     ? 
                                                    (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                     - vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 
                                                    (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                     + vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))));
    vlSelf->cpu__DOT__pc_src_e = ((IData)(vlSelf->cpu__DOT__jump_e) 
                                  | (((4U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                       ? ((2U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                           ? ((1U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                               ? (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                  >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                  < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                           : ((1U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                               ? VL_GTES_III(32, vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                       : ((~ ((IData)(vlSelf->cpu__DOT__funct3_e) 
                                              >> 1U)) 
                                          & ((1U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                              ? (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                 != vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                              : (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                 == vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))) 
                                     & (IData)(vlSelf->cpu__DOT__branch_e)));
    vlSelf->debug_instr_f = vlSelf->cpu__DOT__instr_f;
    __Vtableidx1 = (0x7fU & vlSelf->cpu__DOT__instr_d);
    vlSelf->cpu__DOT__jump_d = Vcpu__ConstPool__TABLE_h40cdecfe_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__branch_d = Vcpu__ConstPool__TABLE_h974edfa5_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__result_src_d = Vcpu__ConstPool__TABLE_h7cb9807b_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__mem_write_d = Vcpu__ConstPool__TABLE_h29afd16c_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__alu_src_d = Vcpu__ConstPool__TABLE_h02ce41a5_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = Vcpu__ConstPool__TABLE_hde739471_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__reg_write_d = Vcpu__ConstPool__TABLE_hc9d8290d_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic 
        = Vcpu__ConstPool__TABLE_h7b3a9595_0[__Vtableidx1];
    vlSelf->cpu__DOT__jalr_d = Vcpu__ConstPool__TABLE_h105add6f_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__op1_pc_d = Vcpu__ConstPool__TABLE_hcdf91a98_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__rs1_used_d = Vcpu__ConstPool__TABLE_ha080a04b_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__rs2_used_d = Vcpu__ConstPool__TABLE_h897fe1f4_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__mul_en_d = Vcpu__ConstPool__TABLE_h7799c656_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__div_en_d = Vcpu__ConstPool__TABLE_h2c08dd0a_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__flush = 0U;
    if (vlSelf->cpu__DOT__pc_src_e) {
        vlSelf->cpu__DOT__flush = 1U;
        vlSelf->cpu__DOT__u_fetch__DOT__next_pc = ((IData)(vlSelf->cpu__DOT__jalr_e)
                                                    ? vlSelf->cpu__DOT__u_execute__DOT__alu_res
                                                    : 
                                                   (vlSelf->cpu__DOT__pc_e 
                                                    + vlSelf->cpu__DOT__imm_ext_e));
    } else {
        vlSelf->cpu__DOT__u_fetch__DOT__next_pc = ((IData)(4U) 
                                                   + vlSelf->cpu__DOT__pc_f);
    }
    vlSelf->cpu__DOT__imm_ext_d = 0U;
    if ((4U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d)))) {
            VL_WRITEF("[%0t] %%Error: sign_extend.sv:34: Assertion failed in %Ncpu.u_decode.se: Error: imm_src value outside of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../../rtl/sign_extend/sign_extend.sv", 34, "");
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d)))) {
            VL_WRITEF("[%0t] %%Error: sign_extend.sv:34: Assertion failed in %Ncpu.u_decode.se: Error: imm_src value outside of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../../rtl/sign_extend/sign_extend.sv", 34, "");
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
    vlSelf->cpu__DOT__mul_ctrl_d = 0U;
    vlSelf->cpu__DOT__div_ctrl_d = 0U;
    vlSelf->cpu__DOT__alu_ctrl_d = 0U;
    if ((4U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic)))) {
            VL_WRITEF("[%0t] %%Error: alu_decoder.sv:101: Assertion failed in %Ncpu.u_decode.cu.decoder_2: ALU_Decoder Error: alu_op out of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../../rtl/cu/alu_decoder.sv", 101, "");
        } else if ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
            vlSelf->cpu__DOT__div_ctrl_d = 0U;
            if ((0U == (7U & (vlSelf->cpu__DOT__instr_d 
                              >> 0xcU)))) {
                vlSelf->cpu__DOT__div_ctrl_d = 0U;
            } else if ((1U == (7U & (vlSelf->cpu__DOT__instr_d 
                                     >> 0xcU)))) {
                vlSelf->cpu__DOT__div_ctrl_d = 1U;
            } else if ((2U == (7U & (vlSelf->cpu__DOT__instr_d 
                                     >> 0xcU)))) {
                vlSelf->cpu__DOT__div_ctrl_d = 2U;
            } else if (VL_LIKELY((3U == (7U & (vlSelf->cpu__DOT__instr_d 
                                               >> 0xcU))))) {
                vlSelf->cpu__DOT__div_ctrl_d = 3U;
            } else {
                VL_WRITEF("[%0t] %%Error: alu_decoder.sv:98: Assertion failed in %Ncpu.u_decode.cu.decoder_2: ALU_Decoder Error: funct3 out of range!\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../../rtl/cu/alu_decoder.sv", 98, "");
            }
        } else {
            vlSelf->cpu__DOT__mul_ctrl_d = 0U;
            if ((0U == (7U & (vlSelf->cpu__DOT__instr_d 
                              >> 0xcU)))) {
                vlSelf->cpu__DOT__mul_ctrl_d = 0U;
            } else if ((1U == (7U & (vlSelf->cpu__DOT__instr_d 
                                     >> 0xcU)))) {
                vlSelf->cpu__DOT__mul_ctrl_d = 1U;
            } else if ((2U == (7U & (vlSelf->cpu__DOT__instr_d 
                                     >> 0xcU)))) {
                vlSelf->cpu__DOT__mul_ctrl_d = 2U;
            } else if (VL_LIKELY((3U == (7U & (vlSelf->cpu__DOT__instr_d 
                                               >> 0xcU))))) {
                vlSelf->cpu__DOT__mul_ctrl_d = 3U;
            } else {
                VL_WRITEF("[%0t] %%Error: alu_decoder.sv:79: Assertion failed in %Ncpu.u_decode.cu.decoder_2: ALU_Decoder Error: funct3 out of range!\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../../rtl/cu/alu_decoder.sv", 79, "");
            }
        }
    } else if ((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
            vlSelf->cpu__DOT__alu_ctrl_d = 0xfU;
        } else {
            vlSelf->cpu__DOT__alu_ctrl_d = 0U;
            if ((0U == (7U & (vlSelf->cpu__DOT__instr_d 
                              >> 0xcU)))) {
                vlSelf->cpu__DOT__alu_ctrl_d = ((IData)(
                                                        (0x40000020U 
                                                         == 
                                                         (0x40000020U 
                                                          & vlSelf->cpu__DOT__instr_d)))
                                                 ? 1U
                                                 : 0U);
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
                                                 ? 9U
                                                 : 8U);
            } else if ((6U == (7U & (vlSelf->cpu__DOT__instr_d 
                                     >> 0xcU)))) {
                vlSelf->cpu__DOT__alu_ctrl_d = 3U;
            } else if (VL_LIKELY((7U == (7U & (vlSelf->cpu__DOT__instr_d 
                                               >> 0xcU))))) {
                vlSelf->cpu__DOT__alu_ctrl_d = 2U;
            } else {
                VL_WRITEF("[%0t] %%Error: alu_decoder.sv:58: Assertion failed in %Ncpu.u_decode.cu.decoder_2: ALU_Decoder Error: funct3 out of range!\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("../../rtl/cu/alu_decoder.sv", 58, "");
            }
        }
    } else {
        vlSelf->cpu__DOT__alu_ctrl_d = ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))
                                         ? 1U : 0U);
    }
}
