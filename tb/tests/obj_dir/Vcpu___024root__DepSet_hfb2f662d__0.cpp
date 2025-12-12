// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024root.h"

extern const VlUnpacked<CData/*1:0*/, 512> Vcpu__ConstPool__TABLE_h8586ea3a_0;

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__3(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__3\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    // Body
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr 
        = ((IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__state)
            ? ((0xfffffff0U & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__saved_addr) 
               + ((IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__fill_count) 
                  << 2U)) : (0xfffffffcU & vlSelf->cpu__DOT__ex_out_m));
    vlSelf->cpu__DOT__u_memory__DOT__store_data = (vlSelf->cpu__DOT__write_data_m 
                                                   << 
                                                   (0x18U 
                                                    & (vlSelf->cpu__DOT__ex_out_m 
                                                       << 3U)));
    vlSelf->cpu__DOT__result_w = ((2U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                   ? ((1U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                       ? 0U : vlSelf->cpu__DOT__pc_plus4_w)
                                   : ((1U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                       ? vlSelf->cpu__DOT__read_data_w
                                       : vlSelf->cpu__DOT__ex_out_w));
    if (vlSelf->rst) {
        vlSelf->cpu__DOT__div_ctrl_e = 0U;
        vlSelf->cpu__DOT__mem_write_m = 0U;
        vlSelf->__Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter = 0U;
        vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_q = 0U;
        vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__busy_q = 1U;
        vlSelf->cpu__DOT__reg_write_w = 0U;
        vlSelf->cpu__DOT__rd_w = 0U;
        vlSelf->cpu__DOT__mem_write_e = 0U;
        vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state = 0U;
        vlSelf->cpu__DOT__reg_write_m = 0U;
        vlSelf->cpu__DOT__rd_m = 0U;
        vlSelf->cpu__DOT__reg_write_e = 0U;
        vlSelf->cpu__DOT__rd_e = 0U;
        vlSelf->cpu__DOT__instr_d = 0U;
        vlSelf->cpu__DOT__pc_f = 0U;
    } else {
        if (vlSelf->cpu__DOT__div_stall) {
            vlSelf->cpu__DOT__mem_write_m = 0U;
        } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__cache_stall)))) {
            vlSelf->cpu__DOT__mem_write_m = vlSelf->cpu__DOT__mem_write_e;
        }
        if (((0U == (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state)) 
             | (3U == (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state)))) {
            vlSelf->__Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter = 0U;
        } else if ((2U == (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state))) {
            vlSelf->__Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter)));
        }
        if (((0U == (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state)) 
             & (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_pulse))) {
            vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__n_reg 
                = vlSelf->cpu__DOT__u_execute__DOT__src_a_e;
            vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__d_reg 
                = vlSelf->cpu__DOT__u_execute__DOT__src_b_e;
        }
        vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_q 
            = (0U != (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state));
        vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__busy_q 
            = (3U != (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state));
        if ((1U & (~ (IData)(vlSelf->cpu__DOT__cache_stall)))) {
            vlSelf->cpu__DOT__reg_write_w = vlSelf->cpu__DOT__reg_write_m;
            vlSelf->cpu__DOT__rd_w = vlSelf->cpu__DOT__rd_m;
        }
        if (vlSelf->cpu__DOT__div_stall) {
            vlSelf->cpu__DOT__reg_write_m = 0U;
            vlSelf->cpu__DOT__rd_m = 0U;
        } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__cache_stall)))) {
            vlSelf->cpu__DOT__reg_write_m = vlSelf->cpu__DOT__reg_write_e;
            vlSelf->cpu__DOT__rd_m = vlSelf->cpu__DOT__rd_e;
        }
        if (vlSelf->cpu__DOT__flush) {
            vlSelf->cpu__DOT__div_ctrl_e = 0U;
            vlSelf->cpu__DOT__mem_write_e = 0U;
            vlSelf->cpu__DOT__reg_write_e = 0U;
            vlSelf->cpu__DOT__rd_e = 0U;
            vlSelf->cpu__DOT__instr_d = 0U;
        } else {
            if (((IData)(vlSelf->cpu__DOT__stall) & 
                 (~ (IData)(vlSelf->cpu__DOT__cache_stall)))) {
                vlSelf->cpu__DOT__div_ctrl_e = 0U;
                vlSelf->cpu__DOT__mem_write_e = 0U;
                vlSelf->cpu__DOT__reg_write_e = 0U;
                vlSelf->cpu__DOT__rd_e = 0U;
            } else if ((1U & ((~ (IData)(vlSelf->cpu__DOT__div_stall)) 
                              & (~ (IData)(vlSelf->cpu__DOT__cache_stall))))) {
                vlSelf->cpu__DOT__div_ctrl_e = vlSelf->cpu__DOT__div_ctrl_d;
                vlSelf->cpu__DOT__mem_write_e = vlSelf->cpu__DOT__mem_write_d;
                vlSelf->cpu__DOT__reg_write_e = vlSelf->cpu__DOT__reg_write_d;
                vlSelf->cpu__DOT__rd_e = (0x1fU & (vlSelf->cpu__DOT__instr_d 
                                                   >> 7U));
            }
            if ((1U & (((~ (IData)(vlSelf->cpu__DOT__stall)) 
                        & (~ (IData)(vlSelf->cpu__DOT__div_stall))) 
                       & (~ (IData)(vlSelf->cpu__DOT__cache_stall))))) {
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
        vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state 
            = vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__next_state;
        if ((1U & (((~ (IData)(vlSelf->cpu__DOT__stall)) 
                    & (~ (IData)(vlSelf->cpu__DOT__div_stall))) 
                   & (~ (IData)(vlSelf->cpu__DOT__cache_stall))))) {
            vlSelf->cpu__DOT__pc_f = vlSelf->cpu__DOT__u_fetch__DOT__next_pc;
        }
    }
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_r_data 
        = ((vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__data_array
            [(0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr))] 
            << 0x18U) | ((vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__data_array
                          [(0x1ffffU & ((IData)(2U) 
                                        + vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr))] 
                          << 0x10U) | ((vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__data_array
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr))] 
                                        << 8U) | vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__data_array
                                       [(0x1ffffU & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr)])));
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter 
        = vlSelf->__Vdly__cpu__DOT__u_execute__DOT__divider__DOT__counter;
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__is_signed 
        = ((0U == (IData)(vlSelf->cpu__DOT__div_ctrl_e)) 
           | (2U == (IData)(vlSelf->cpu__DOT__div_ctrl_e)));
    vlSelf->cpu__DOT__mem_valid_m = ((IData)(vlSelf->cpu__DOT__mem_write_m) 
                                     | (1U == (IData)(vlSelf->cpu__DOT__result_src_m)));
    vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en 
        = ((IData)(vlSelf->cpu__DOT__mem_write_m) ? 
           (0xfU & ((0U == (IData)(vlSelf->cpu__DOT__funct3_m))
                     ? ((IData)(1U) << (3U & vlSelf->cpu__DOT__ex_out_m))
                     : ((1U == (IData)(vlSelf->cpu__DOT__funct3_m))
                         ? ((IData)(3U) << (3U & vlSelf->cpu__DOT__ex_out_m))
                         : ((2U == (IData)(vlSelf->cpu__DOT__funct3_m))
                             ? 0xfU : 0U)))) : 0U);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb = 0U;
    if ((1U & (~ (IData)(vlSelf->cpu__DOT__mem_write_m)))) {
        if (vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_valid) {
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__widx 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_word_index;
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__blk[0U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__block_buf[0U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__blk[1U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__block_buf[1U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__blk[2U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__block_buf[2U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__blk[3U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__block_buf[3U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__Vfuncout 
                = ((2U & (IData)(vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__widx))
                    ? ((1U & (IData)(vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__widx))
                        ? vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__blk[3U]
                        : vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__blk[2U])
                    : ((1U & (IData)(vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__widx))
                        ? vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__blk[1U]
                        : vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__blk[0U]));
            vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb 
                = vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__0__Vfuncout;
        } else if (vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__state) {
            vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb = 0U;
        } else {
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__widx 
                = (3U & (vlSelf->cpu__DOT__ex_out_m 
                         >> 2U));
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__blk[0U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__selected_line[0U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__blk[1U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__selected_line[1U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__blk[2U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__selected_line[2U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__blk[3U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__selected_line[3U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__Vfuncout 
                = ((2U & (IData)(vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__widx))
                    ? ((1U & (IData)(vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__widx))
                        ? vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__blk[3U]
                        : vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__blk[2U])
                    : ((1U & (IData)(vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__widx))
                        ? vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__blk[1U]
                        : vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__blk[0U]));
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__widx 
                = (3U & (vlSelf->cpu__DOT__ex_out_m 
                         >> 2U));
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__blk[0U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__selected_line[0U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__blk[1U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__selected_line[1U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__blk[2U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__selected_line[2U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__blk[3U] 
                = vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__selected_line[3U];
            vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__Vfuncout 
                = ((2U & (IData)(vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__widx))
                    ? ((1U & (IData)(vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__widx))
                        ? vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__blk[3U]
                        : vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__blk[2U])
                    : ((1U & (IData)(vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__widx))
                        ? vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__blk[1U]
                        : vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__blk[0U]));
            vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb 
                = ((0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_hit))
                    ? vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__selected_word
                    : ((0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_hit))
                        ? vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__1__Vfuncout
                        : ((0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_hit))
                            ? vlSelf->__Vfunc_cpu__DOT__u_memory__DOT__u_mmu__DOT__word_from_block__2__Vfuncout
                            : 0U)));
        }
    }
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_pulse 
        = (((IData)(vlSelf->cpu__DOT__div_en_e) & (~ (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_q))) 
           & (~ (IData)(vlSelf->cpu__DOT__u_execute__DOT__cache_stall)));
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__byte_mask 
        = ((0xffff0000U & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__byte_mask) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en) 
                                            >> 1U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en)))))));
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__byte_mask 
        = ((0xffffU & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__byte_mask) 
           | (((- (IData)((1U & ((IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en) 
                                 >> 3U)))) << 0x18U) 
              | (0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en) 
                                                >> 2U)))) 
                              << 0x10U))));
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__byte_mask 
        = ((0xffff0000U & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__byte_mask) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en) 
                                            >> 1U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en)))))));
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__byte_mask 
        = ((0xffffU & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__byte_mask) 
           | (((- (IData)((1U & ((IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en) 
                                 >> 3U)))) << 0x18U) 
              | (0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en) 
                                                >> 2U)))) 
                              << 0x10U))));
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__byte_mask 
        = ((0xffff0000U & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__byte_mask) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en) 
                                            >> 1U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en)))))));
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__byte_mask 
        = ((0xffffU & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__byte_mask) 
           | (((- (IData)((1U & ((IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en) 
                                 >> 3U)))) << 0x18U) 
              | (0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en) 
                                                >> 2U)))) 
                              << 0x10U))));
    vlSelf->cpu__DOT__u_memory__DOT__selected_byte 
        = (0xffU & (vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb 
                    >> (0x18U & (vlSelf->cpu__DOT__ex_out_m 
                                 << 3U))));
    vlSelf->cpu__DOT__u_memory__DOT__selected_half 
        = (0xffffU & (vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb 
                      >> (0x18U & (vlSelf->cpu__DOT__ex_out_m 
                                   << 3U))));
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__masked_write 
        = (vlSelf->cpu__DOT__u_memory__DOT__store_data 
           & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__byte_mask);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__masked_write 
        = (vlSelf->cpu__DOT__u_memory__DOT__store_data 
           & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__byte_mask);
    vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__masked_write 
        = (vlSelf->cpu__DOT__u_memory__DOT__store_data 
           & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__byte_mask);
    __Vtableidx1 = (((IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_pulse) 
                     << 8U) | (((IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter) 
                                << 2U) | (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state)));
    vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__next_state 
        = Vcpu__ConstPool__TABLE_h8586ea3a_0[__Vtableidx1];
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
    vlSelf->cpu__DOT__u_execute__DOT__src_a_e = ((IData)(vlSelf->cpu__DOT__op1_pc_e)
                                                  ? vlSelf->cpu__DOT__pc_e
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                                    ? 0U
                                                    : vlSelf->cpu__DOT__ex_out_m)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                                    ? vlSelf->cpu__DOT__result_w
                                                    : vlSelf->cpu__DOT__rd1_e)));
    vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out 
        = ((2U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
            ? ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                ? 0U : vlSelf->cpu__DOT__ex_out_m) : 
           ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
             ? vlSelf->cpu__DOT__result_w : vlSelf->cpu__DOT__rd2_e));
    vlSelf->cpu__DOT__u_execute__DOT__src_b_e = ((IData)(vlSelf->cpu__DOT__alu_src_e)
                                                  ? vlSelf->cpu__DOT__imm_ext_e
                                                  : vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out);
    if ((2U & (IData)(vlSelf->cpu__DOT__mul_ctrl_e))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__mul_ctrl_e))) {
            vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
                = ((QData)((IData)(vlSelf->cpu__DOT__u_execute__DOT__src_a_e)) 
                   * (QData)((IData)(vlSelf->cpu__DOT__u_execute__DOT__src_b_e)));
            vlSelf->cpu__DOT__u_execute__DOT__mul_out_e 
                = (IData)((vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
                           >> 0x20U));
        } else {
            vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
                = ((((QData)((IData)((- (IData)((vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->cpu__DOT__u_execute__DOT__src_a_e))) 
                   * (QData)((IData)(vlSelf->cpu__DOT__u_execute__DOT__src_b_e)));
            vlSelf->cpu__DOT__u_execute__DOT__mul_out_e 
                = (IData)((vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
                           >> 0x20U));
        }
    } else if ((1U & (IData)(vlSelf->cpu__DOT__mul_ctrl_e))) {
        vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e), 
                          VL_EXTENDS_QI(64,32, vlSelf->cpu__DOT__u_execute__DOT__src_b_e));
        vlSelf->cpu__DOT__u_execute__DOT__mul_out_e 
            = (IData)((vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
                       >> 0x20U));
    } else {
        vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result 
            = ((QData)((IData)(vlSelf->cpu__DOT__u_execute__DOT__src_a_e)) 
               * (QData)((IData)(vlSelf->cpu__DOT__u_execute__DOT__src_b_e)));
        vlSelf->cpu__DOT__u_execute__DOT__mul_out_e 
            = (IData)(vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result);
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
                                                     + vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))));
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
    vlSelf->cpu__DOT__div_en_d = 0U;
    vlSelf->cpu__DOT__mul_en_d = 0U;
    vlSelf->cpu__DOT__alu_src_d = 0U;
    vlSelf->cpu__DOT__jump_d = 0U;
    vlSelf->cpu__DOT__branch_d = 0U;
    vlSelf->cpu__DOT__result_src_d = 0U;
    vlSelf->cpu__DOT__mem_write_d = 0U;
    vlSelf->cpu__DOT__reg_write_d = 0U;
    vlSelf->cpu__DOT__jalr_d = 0U;
    vlSelf->cpu__DOT__op1_pc_d = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
    vlSelf->cpu__DOT__rs1_used_d = 0U;
    vlSelf->cpu__DOT__rs2_used_d = 0U;
    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
    if ((0x40U & vlSelf->cpu__DOT__instr_d)) {
        if ((0x20U & vlSelf->cpu__DOT__instr_d)) {
            if ((1U & (~ (vlSelf->cpu__DOT__instr_d 
                          >> 4U)))) {
                if ((8U & vlSelf->cpu__DOT__instr_d)) {
                    if ((4U & vlSelf->cpu__DOT__instr_d)) {
                        if ((2U & vlSelf->cpu__DOT__instr_d)) {
                            if ((1U & vlSelf->cpu__DOT__instr_d)) {
                                vlSelf->cpu__DOT__div_en_d = 0U;
                                vlSelf->cpu__DOT__mul_en_d = 0U;
                                vlSelf->cpu__DOT__alu_src_d = 1U;
                                vlSelf->cpu__DOT__jump_d = 1U;
                                vlSelf->cpu__DOT__branch_d = 0U;
                                vlSelf->cpu__DOT__result_src_d = 2U;
                                vlSelf->cpu__DOT__mem_write_d = 0U;
                                vlSelf->cpu__DOT__reg_write_d = 1U;
                                vlSelf->cpu__DOT__jalr_d = 0U;
                                vlSelf->cpu__DOT__op1_pc_d = 0U;
                                vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 3U;
                                vlSelf->cpu__DOT__rs1_used_d = 0U;
                                vlSelf->cpu__DOT__rs2_used_d = 0U;
                                vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->cpu__DOT__instr_d)) {
                    if ((2U & vlSelf->cpu__DOT__instr_d)) {
                        if ((1U & vlSelf->cpu__DOT__instr_d)) {
                            vlSelf->cpu__DOT__div_en_d = 0U;
                            vlSelf->cpu__DOT__mul_en_d = 0U;
                            vlSelf->cpu__DOT__alu_src_d = 1U;
                            vlSelf->cpu__DOT__jump_d = 1U;
                            vlSelf->cpu__DOT__branch_d = 0U;
                            vlSelf->cpu__DOT__result_src_d = 0U;
                            vlSelf->cpu__DOT__mem_write_d = 0U;
                            vlSelf->cpu__DOT__reg_write_d = 1U;
                            vlSelf->cpu__DOT__jalr_d = 1U;
                            vlSelf->cpu__DOT__op1_pc_d = 0U;
                            vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
                            vlSelf->cpu__DOT__rs1_used_d = 1U;
                            vlSelf->cpu__DOT__rs2_used_d = 0U;
                            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
                        }
                    }
                } else if ((2U & vlSelf->cpu__DOT__instr_d)) {
                    if ((1U & vlSelf->cpu__DOT__instr_d)) {
                        vlSelf->cpu__DOT__div_en_d = 0U;
                        vlSelf->cpu__DOT__mul_en_d = 0U;
                        vlSelf->cpu__DOT__alu_src_d = 0U;
                        vlSelf->cpu__DOT__jump_d = 0U;
                        vlSelf->cpu__DOT__branch_d = 1U;
                        vlSelf->cpu__DOT__result_src_d = 0U;
                        vlSelf->cpu__DOT__mem_write_d = 0U;
                        vlSelf->cpu__DOT__reg_write_d = 0U;
                        vlSelf->cpu__DOT__jalr_d = 0U;
                        vlSelf->cpu__DOT__op1_pc_d = 0U;
                        vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 2U;
                        vlSelf->cpu__DOT__rs1_used_d = 1U;
                        vlSelf->cpu__DOT__rs2_used_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 1U;
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->cpu__DOT__instr_d)) {
        if ((0x10U & vlSelf->cpu__DOT__instr_d)) {
            if ((1U & (~ (vlSelf->cpu__DOT__instr_d 
                          >> 3U)))) {
                if ((4U & vlSelf->cpu__DOT__instr_d)) {
                    if ((2U & vlSelf->cpu__DOT__instr_d)) {
                        if ((1U & vlSelf->cpu__DOT__instr_d)) {
                            vlSelf->cpu__DOT__div_en_d = 0U;
                            vlSelf->cpu__DOT__mul_en_d = 0U;
                            vlSelf->cpu__DOT__alu_src_d = 1U;
                            vlSelf->cpu__DOT__jump_d = 0U;
                            vlSelf->cpu__DOT__branch_d = 0U;
                            vlSelf->cpu__DOT__result_src_d = 0U;
                            vlSelf->cpu__DOT__mem_write_d = 0U;
                            vlSelf->cpu__DOT__reg_write_d = 1U;
                            vlSelf->cpu__DOT__jalr_d = 0U;
                            vlSelf->cpu__DOT__op1_pc_d = 0U;
                            vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 4U;
                            vlSelf->cpu__DOT__rs1_used_d = 0U;
                            vlSelf->cpu__DOT__rs2_used_d = 0U;
                            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 3U;
                        }
                    }
                } else if ((2U & vlSelf->cpu__DOT__instr_d)) {
                    if ((1U & vlSelf->cpu__DOT__instr_d)) {
                        vlSelf->cpu__DOT__div_en_d = 0U;
                        vlSelf->cpu__DOT__mul_en_d = 0U;
                        vlSelf->cpu__DOT__alu_src_d = 0U;
                        vlSelf->cpu__DOT__jump_d = 0U;
                        vlSelf->cpu__DOT__branch_d = 0U;
                        vlSelf->cpu__DOT__result_src_d = 0U;
                        vlSelf->cpu__DOT__mem_write_d = 0U;
                        vlSelf->cpu__DOT__reg_write_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
                        vlSelf->cpu__DOT__rs1_used_d = 1U;
                        vlSelf->cpu__DOT__rs2_used_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 2U;
                        if ((1U == (vlSelf->cpu__DOT__instr_d 
                                    >> 0x19U))) {
                            vlSelf->cpu__DOT__div_en_d 
                                = (1U & (vlSelf->cpu__DOT__instr_d 
                                         >> 0xeU));
                            vlSelf->cpu__DOT__mul_en_d 
                                = (1U & (~ (vlSelf->cpu__DOT__instr_d 
                                            >> 0xeU)));
                            vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic 
                                = ((0x4000U & vlSelf->cpu__DOT__instr_d)
                                    ? 5U : 4U);
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->cpu__DOT__instr_d 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->cpu__DOT__instr_d 
                          >> 2U)))) {
                if ((2U & vlSelf->cpu__DOT__instr_d)) {
                    if ((1U & vlSelf->cpu__DOT__instr_d)) {
                        vlSelf->cpu__DOT__div_en_d = 0U;
                        vlSelf->cpu__DOT__mul_en_d = 0U;
                        vlSelf->cpu__DOT__alu_src_d = 1U;
                        vlSelf->cpu__DOT__jump_d = 0U;
                        vlSelf->cpu__DOT__branch_d = 0U;
                        vlSelf->cpu__DOT__result_src_d = 0U;
                        vlSelf->cpu__DOT__mem_write_d = 1U;
                        vlSelf->cpu__DOT__reg_write_d = 0U;
                        vlSelf->cpu__DOT__jalr_d = 0U;
                        vlSelf->cpu__DOT__op1_pc_d = 0U;
                        vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 1U;
                        vlSelf->cpu__DOT__rs1_used_d = 1U;
                        vlSelf->cpu__DOT__rs2_used_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->cpu__DOT__instr_d)) {
        if ((1U & (~ (vlSelf->cpu__DOT__instr_d >> 3U)))) {
            if ((4U & vlSelf->cpu__DOT__instr_d)) {
                if ((2U & vlSelf->cpu__DOT__instr_d)) {
                    if ((1U & vlSelf->cpu__DOT__instr_d)) {
                        vlSelf->cpu__DOT__div_en_d = 0U;
                        vlSelf->cpu__DOT__mul_en_d = 0U;
                        vlSelf->cpu__DOT__alu_src_d = 1U;
                        vlSelf->cpu__DOT__jump_d = 0U;
                        vlSelf->cpu__DOT__branch_d = 0U;
                        vlSelf->cpu__DOT__result_src_d = 0U;
                        vlSelf->cpu__DOT__mem_write_d = 0U;
                        vlSelf->cpu__DOT__reg_write_d = 1U;
                        vlSelf->cpu__DOT__jalr_d = 0U;
                        vlSelf->cpu__DOT__op1_pc_d = 1U;
                        vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 4U;
                        vlSelf->cpu__DOT__rs1_used_d = 0U;
                        vlSelf->cpu__DOT__rs2_used_d = 0U;
                        vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
                    }
                }
            } else if ((2U & vlSelf->cpu__DOT__instr_d)) {
                if ((1U & vlSelf->cpu__DOT__instr_d)) {
                    vlSelf->cpu__DOT__div_en_d = 0U;
                    vlSelf->cpu__DOT__mul_en_d = 0U;
                    vlSelf->cpu__DOT__alu_src_d = 1U;
                    vlSelf->cpu__DOT__jump_d = 0U;
                    vlSelf->cpu__DOT__branch_d = 0U;
                    vlSelf->cpu__DOT__result_src_d = 0U;
                    vlSelf->cpu__DOT__mem_write_d = 0U;
                    vlSelf->cpu__DOT__reg_write_d = 1U;
                    vlSelf->cpu__DOT__jalr_d = 0U;
                    vlSelf->cpu__DOT__op1_pc_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
                    vlSelf->cpu__DOT__rs1_used_d = 1U;
                    vlSelf->cpu__DOT__rs2_used_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 2U;
                }
            }
        }
    } else if ((1U & (~ (vlSelf->cpu__DOT__instr_d 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->cpu__DOT__instr_d >> 2U)))) {
            if ((2U & vlSelf->cpu__DOT__instr_d)) {
                if ((1U & vlSelf->cpu__DOT__instr_d)) {
                    vlSelf->cpu__DOT__div_en_d = 0U;
                    vlSelf->cpu__DOT__mul_en_d = 0U;
                    vlSelf->cpu__DOT__alu_src_d = 1U;
                    vlSelf->cpu__DOT__jump_d = 0U;
                    vlSelf->cpu__DOT__branch_d = 0U;
                    vlSelf->cpu__DOT__result_src_d = 1U;
                    vlSelf->cpu__DOT__mem_write_d = 0U;
                    vlSelf->cpu__DOT__reg_write_d = 1U;
                    vlSelf->cpu__DOT__jalr_d = 0U;
                    vlSelf->cpu__DOT__op1_pc_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__imm_src_d = 0U;
                    vlSelf->cpu__DOT__rs1_used_d = 1U;
                    vlSelf->cpu__DOT__rs2_used_d = 0U;
                    vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic = 0U;
                }
            }
        }
    }
    vlSelf->cpu__DOT__imm_ext_d = 0U;
    if (vlSelf->cpu__DOT__pc_src_e) {
        vlSelf->cpu__DOT__flush = 1U;
    }
    if ((4U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d)))) {
            VL_WRITEF("[%0t] %%Error: sign_extend.sv:30: Assertion failed in %Ncpu.u_decode.se: Error: imm_src value outside of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../../rtl/sign_extend/sign_extend.sv", 30, "");
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d)))) {
            VL_WRITEF("[%0t] %%Error: sign_extend.sv:30: Assertion failed in %Ncpu.u_decode.se: Error: imm_src value outside of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../../rtl/sign_extend/sign_extend.sv", 30, "");
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
    vlSelf->cpu__DOT__mul_ctrl_d = 0U;
    vlSelf->cpu__DOT__div_ctrl_d = 0U;
    vlSelf->cpu__DOT__alu_ctrl_d = 0U;
    if ((4U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic)))) {
            VL_WRITEF("[%0t] %%Error: alu_decoder.sv:73: Assertion failed in %Ncpu.u_decode.cu.decoder_2: Error (alu_decoder): alu_op out of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../../rtl/cu/alu_decoder.sv", 73, "");
        } else if ((1U & (IData)(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic))) {
            vlSelf->cpu__DOT__div_ctrl_d = (3U & (vlSelf->cpu__DOT__instr_d 
                                                  >> 0xcU));
        } else {
            vlSelf->cpu__DOT__mul_ctrl_d = (3U & (vlSelf->cpu__DOT__instr_d 
                                                  >> 0xcU));
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
    vlSelf->cpu__DOT__div_stall = 0U;
    if (((IData)(vlSelf->cpu__DOT__div_en_e) & (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__busy_q))) {
        vlSelf->cpu__DOT__div_stall = 1U;
    }
    vlSelf->cpu__DOT__cache_stall = 0U;
    if ((1U & (~ ((~ (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__state)) 
                  & (~ (((IData)(vlSelf->cpu__DOT__mem_valid_m) 
                         & (~ (IData)(vlSelf->cpu__DOT__mem_write_m))) 
                        & (~ (((0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_hit)) 
                               | (0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_hit))) 
                              | (0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_hit)))))))))) {
        vlSelf->cpu__DOT__cache_stall = 1U;
    }
    if (VL_UNLIKELY((0x4000U <= ((IData)(3U) + (0x3fffU 
                                                & vlSelf->cpu__DOT__pc_f))))) {
        VL_WRITEF("ERROR: PC out of range! PC=%x\n",
                  32,vlSelf->cpu__DOT__pc_f);
    }
    vlSelf->cpu__DOT__u_fetch__DOT__next_pc = ((IData)(vlSelf->cpu__DOT__pc_src_e)
                                                ? ((IData)(vlSelf->cpu__DOT__jalr_e)
                                                    ? vlSelf->cpu__DOT__u_execute__DOT__alu_res
                                                    : 
                                                   (vlSelf->cpu__DOT__pc_e 
                                                    + vlSelf->cpu__DOT__imm_ext_e))
                                                : ((IData)(4U) 
                                                   + vlSelf->cpu__DOT__pc_f));
}
