// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i),32);
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
        bufp->chgBit(oldp+11,(vlSelf->cpu__DOT__op1_pc_e));
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__rd1_e),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__rd2_e),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__pc_e),32);
        bufp->chgCData(oldp+15,(vlSelf->cpu__DOT__rs1_e),5);
        bufp->chgCData(oldp+16,(vlSelf->cpu__DOT__rs2_e),5);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__imm_ext_e),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__pc_plus4_e),32);
        bufp->chgBit(oldp+19,(vlSelf->cpu__DOT__rs1_used_e));
        bufp->chgBit(oldp+20,(vlSelf->cpu__DOT__rs2_used_e));
        bufp->chgCData(oldp+21,(vlSelf->cpu__DOT__mul_ctrl_e),2);
        bufp->chgBit(oldp+22,(vlSelf->cpu__DOT__mul_en_e));
        bufp->chgBit(oldp+23,(vlSelf->cpu__DOT__div_en_e));
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__ex_out_m),32);
        bufp->chgCData(oldp+25,(vlSelf->cpu__DOT__result_src_m),2);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__write_data_m),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__pc_plus4_m),32);
        bufp->chgCData(oldp+28,(vlSelf->cpu__DOT__funct3_m),3);
        bufp->chgCData(oldp+29,(vlSelf->cpu__DOT__result_src_w),2);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__ex_out_w),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__read_data_w),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__pc_plus4_w),32);
        bufp->chgBit(oldp+33,((1U == (IData)(vlSelf->cpu__DOT__result_src_e))));
        bufp->chgIData(oldp+34,((vlSelf->cpu__DOT__pc_e 
                                 + vlSelf->cpu__DOT__imm_ext_e)),32);
        bufp->chgCData(oldp+35,(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel),2);
        bufp->chgCData(oldp+36,((0xfU & ((0U == (IData)(vlSelf->cpu__DOT__funct3_m))
                                          ? ((IData)(1U) 
                                             << (3U 
                                                 & vlSelf->cpu__DOT__ex_out_m))
                                          : ((1U == (IData)(vlSelf->cpu__DOT__funct3_m))
                                              ? ((IData)(3U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->cpu__DOT__ex_out_m))
                                              : ((2U 
                                                  == (IData)(vlSelf->cpu__DOT__funct3_m))
                                                  ? 0xfU
                                                  : 0U))))),4);
        bufp->chgCData(oldp+37,((3U & vlSelf->cpu__DOT__ex_out_m)),2);
        bufp->chgCData(oldp+38,((0x18U & (vlSelf->cpu__DOT__ex_out_m 
                                          << 3U))),5);
        bufp->chgBit(oldp+39,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__last_read_hit));
        bufp->chgCData(oldp+40,((3U & (vlSelf->cpu__DOT__ex_out_m 
                                       >> 2U))),2);
        bufp->chgIData(oldp+41,((0xfffffff0U & vlSelf->cpu__DOT__ex_out_m)),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__selected_word),32);
        bufp->chgBit(oldp+43,((0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_hit))));
        bufp->chgBit(oldp+44,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_en));
        bufp->chgIData(oldp+45,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_addr),32);
        bufp->chgWData(oldp+46,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_data),128);
        bufp->chgBit(oldp+50,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_mark_valid));
        bufp->chgWData(oldp+51,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__selected_line),128);
        bufp->chgBit(oldp+55,((0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_hit))));
        bufp->chgBit(oldp+56,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_en));
        bufp->chgIData(oldp+57,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_addr),32);
        bufp->chgWData(oldp+58,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_data),128);
        bufp->chgBit(oldp+62,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_mark_valid));
        bufp->chgWData(oldp+63,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__selected_line),128);
        bufp->chgBit(oldp+67,((0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_hit))));
        bufp->chgBit(oldp+68,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_en));
        bufp->chgIData(oldp+69,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_addr),32);
        bufp->chgWData(oldp+70,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_data),128);
        bufp->chgBit(oldp+74,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_mark_valid));
        bufp->chgBit(oldp+75,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__state));
        bufp->chgIData(oldp+76,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__saved_addr),32);
        bufp->chgCData(oldp+77,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__saved_word_index),2);
        bufp->chgCData(oldp+78,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__fill_count),2);
        bufp->chgWData(oldp+79,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__block_buf),128);
        bufp->chgBit(oldp+83,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_valid));
        bufp->chgCData(oldp+84,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_word_index),2);
        bufp->chgIData(oldp+85,((vlSelf->cpu__DOT__ex_out_m 
                                 >> 0xbU)),21);
        bufp->chgCData(oldp+86,((0x7fU & (vlSelf->cpu__DOT__ex_out_m 
                                          >> 4U))),7);
        bufp->chgCData(oldp+87,((0xfU & vlSelf->cpu__DOT__ex_out_m)),4);
        bufp->chgCData(oldp+88,((3U & (vlSelf->cpu__DOT__ex_out_m 
                                       >> 2U))),2);
        bufp->chgCData(oldp+89,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_hit),2);
        bufp->chgWData(oldp+90,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_data[0]),128);
        bufp->chgWData(oldp+94,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_data[1]),128);
        bufp->chgIData(oldp+98,((vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_addr 
                                 >> 0xbU)),21);
        bufp->chgCData(oldp+99,((0x7fU & (vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_addr 
                                          >> 4U))),7);
        bufp->chgBit(oldp+100,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__repl_way));
        bufp->chgIData(oldp+101,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__s),32);
        bufp->chgIData(oldp+102,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__w),32);
        bufp->chgIData(oldp+103,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__unnamedblk5__DOT__ww),32);
        bufp->chgIData(oldp+104,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word),32);
        bufp->chgIData(oldp+105,((vlSelf->cpu__DOT__ex_out_m 
                                  >> 0xcU)),20);
        bufp->chgCData(oldp+106,((0xffU & (vlSelf->cpu__DOT__ex_out_m 
                                           >> 4U))),8);
        bufp->chgCData(oldp+107,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_hit),4);
        bufp->chgWData(oldp+108,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_data[0]),128);
        bufp->chgWData(oldp+112,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_data[1]),128);
        bufp->chgWData(oldp+116,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_data[2]),128);
        bufp->chgWData(oldp+120,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_data[3]),128);
        bufp->chgIData(oldp+124,((vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_addr 
                                  >> 0xcU)),20);
        bufp->chgCData(oldp+125,((0xffU & (vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_addr 
                                           >> 4U))),8);
        bufp->chgCData(oldp+126,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__repl_way),2);
        bufp->chgIData(oldp+127,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s),32);
        bufp->chgIData(oldp+128,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w),32);
        bufp->chgIData(oldp+129,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk7__DOT__w),32);
        bufp->chgIData(oldp+130,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word),32);
        bufp->chgIData(oldp+131,((vlSelf->cpu__DOT__ex_out_m 
                                  >> 0xdU)),19);
        bufp->chgSData(oldp+132,((0x1ffU & (vlSelf->cpu__DOT__ex_out_m 
                                            >> 4U))),9);
        bufp->chgCData(oldp+133,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_hit),8);
        bufp->chgWData(oldp+134,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[0]),128);
        bufp->chgWData(oldp+138,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[1]),128);
        bufp->chgWData(oldp+142,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[2]),128);
        bufp->chgWData(oldp+146,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[3]),128);
        bufp->chgWData(oldp+150,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[4]),128);
        bufp->chgWData(oldp+154,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[5]),128);
        bufp->chgWData(oldp+158,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[6]),128);
        bufp->chgWData(oldp+162,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[7]),128);
        bufp->chgIData(oldp+166,((vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_addr 
                                  >> 0xdU)),19);
        bufp->chgSData(oldp+167,((0x1ffU & (vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_addr 
                                            >> 4U))),9);
        bufp->chgCData(oldp+168,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__repl_way),3);
        bufp->chgIData(oldp+169,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s),32);
        bufp->chgIData(oldp+170,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w),32);
        bufp->chgIData(oldp+171,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk7__DOT__w),32);
        bufp->chgIData(oldp+172,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word),32);
        bufp->chgBit(oldp+173,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk1__DOT__any_hit));
        bufp->chgWData(oldp+174,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk2__DOT__block_next),128);
        bufp->chgIData(oldp+178,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+179,(((IData)(vlSelf->cpu__DOT__jalr_e)
                                   ? vlSelf->cpu__DOT__u_execute__DOT__alu_res
                                   : (vlSelf->cpu__DOT__pc_e 
                                      + vlSelf->cpu__DOT__imm_ext_e))),32);
        bufp->chgBit(oldp+180,((1U & ((~ (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__state)) 
                                      & (~ (((IData)(vlSelf->cpu__DOT__mem_valid_m) 
                                             & (~ (IData)(vlSelf->cpu__DOT__mem_write_m))) 
                                            & (~ ((
                                                   (0U 
                                                    != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_hit)) 
                                                   | (0U 
                                                      != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_hit))) 
                                                  | (0U 
                                                     != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_hit))))))))));
        bufp->chgIData(oldp+181,(((4U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                   ? ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                       ? vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb
                                       : ((1U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                           ? (IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_half)
                                           : (IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_byte)))
                                   : ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                       ? vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb
                                       : ((1U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_half) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_half))
                                           : (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_byte) 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_byte)))))),32);
        bufp->chgBit(oldp+182,(((IData)(vlSelf->cpu__DOT__div_en_e) 
                                & (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__busy_q))));
        bufp->chgBit(oldp+183,(((4U & (IData)(vlSelf->cpu__DOT__funct3_e))
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
                                        >> 1U)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->cpu__DOT__funct3_e))
                                                    ? 
                                                   (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                    != vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                    : 
                                                   (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                    == vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))));
        bufp->chgIData(oldp+184,(((2U & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                   ? ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                       ? 0U : vlSelf->cpu__DOT__ex_out_m)
                                   : ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                       ? vlSelf->cpu__DOT__result_w
                                       : vlSelf->cpu__DOT__rd1_e))),32);
        bufp->chgIData(oldp+185,(((IData)(vlSelf->cpu__DOT__pc_src_e)
                                   ? ((IData)(vlSelf->cpu__DOT__jalr_e)
                                       ? vlSelf->cpu__DOT__u_execute__DOT__alu_res
                                       : (vlSelf->cpu__DOT__pc_e 
                                          + vlSelf->cpu__DOT__imm_ext_e))
                                   : ((IData)(4U) + vlSelf->cpu__DOT__pc_f))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+186,(vlSelf->cpu__DOT__u_execute__DOT__div_out_e),32);
        bufp->chgQData(oldp+187,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_r),33);
        bufp->chgIData(oldp+189,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_q),32);
        bufp->chgIData(oldp+190,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_shift),32);
        bufp->chgQData(oldp+191,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_d),33);
        bufp->chgBit(oldp+193,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_q));
        bufp->chgBit(oldp+194,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_r));
        bufp->chgQData(oldp+195,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__unnamedblk1__DOT__div_r_next),33);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+197,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0]),32);
        bufp->chgIData(oldp+198,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[1]),32);
        bufp->chgIData(oldp+199,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[2]),32);
        bufp->chgIData(oldp+200,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[3]),32);
        bufp->chgIData(oldp+201,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[4]),32);
        bufp->chgIData(oldp+202,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[5]),32);
        bufp->chgIData(oldp+203,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[6]),32);
        bufp->chgIData(oldp+204,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[7]),32);
        bufp->chgIData(oldp+205,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[8]),32);
        bufp->chgIData(oldp+206,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[9]),32);
        bufp->chgIData(oldp+207,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[10]),32);
        bufp->chgIData(oldp+208,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[11]),32);
        bufp->chgIData(oldp+209,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[12]),32);
        bufp->chgIData(oldp+210,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[13]),32);
        bufp->chgIData(oldp+211,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[14]),32);
        bufp->chgIData(oldp+212,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[15]),32);
        bufp->chgIData(oldp+213,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[16]),32);
        bufp->chgIData(oldp+214,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[17]),32);
        bufp->chgIData(oldp+215,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[18]),32);
        bufp->chgIData(oldp+216,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[19]),32);
        bufp->chgIData(oldp+217,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[20]),32);
        bufp->chgIData(oldp+218,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[21]),32);
        bufp->chgIData(oldp+219,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[22]),32);
        bufp->chgIData(oldp+220,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[23]),32);
        bufp->chgIData(oldp+221,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[24]),32);
        bufp->chgIData(oldp+222,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[25]),32);
        bufp->chgIData(oldp+223,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[26]),32);
        bufp->chgIData(oldp+224,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[27]),32);
        bufp->chgIData(oldp+225,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[28]),32);
        bufp->chgIData(oldp+226,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[29]),32);
        bufp->chgIData(oldp+227,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[30]),32);
        bufp->chgIData(oldp+228,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+229,(vlSelf->cpu__DOT__pc_src_e));
        bufp->chgIData(oldp+230,(((IData)(4U) + vlSelf->cpu__DOT__pc_f)),32);
        bufp->chgIData(oldp+231,(vlSelf->cpu__DOT__pc_f),32);
        bufp->chgIData(oldp+232,(((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
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
        bufp->chgIData(oldp+233,(vlSelf->cpu__DOT__instr_d),32);
        bufp->chgBit(oldp+234,(vlSelf->cpu__DOT__reg_write_w));
        bufp->chgIData(oldp+235,(vlSelf->cpu__DOT__result_w),32);
        bufp->chgCData(oldp+236,(vlSelf->cpu__DOT__rd_w),5);
        bufp->chgBit(oldp+237,(vlSelf->cpu__DOT__reg_write_d));
        bufp->chgCData(oldp+238,(vlSelf->cpu__DOT__result_src_d),2);
        bufp->chgBit(oldp+239,(vlSelf->cpu__DOT__mem_write_d));
        bufp->chgBit(oldp+240,(vlSelf->cpu__DOT__jump_d));
        bufp->chgBit(oldp+241,(vlSelf->cpu__DOT__branch_d));
        bufp->chgCData(oldp+242,(vlSelf->cpu__DOT__alu_ctrl_d),4);
        bufp->chgBit(oldp+243,(vlSelf->cpu__DOT__alu_src_d));
        bufp->chgCData(oldp+244,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                           >> 7U))),5);
        bufp->chgCData(oldp+245,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+246,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+247,(vlSelf->cpu__DOT__imm_ext_d),32);
        bufp->chgCData(oldp+248,((7U & (vlSelf->cpu__DOT__instr_d 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+249,(vlSelf->cpu__DOT__jalr_d));
        bufp->chgBit(oldp+250,(vlSelf->cpu__DOT__op1_pc_d));
        bufp->chgBit(oldp+251,(vlSelf->cpu__DOT__rs1_used_d));
        bufp->chgBit(oldp+252,(vlSelf->cpu__DOT__rs2_used_d));
        bufp->chgCData(oldp+253,(vlSelf->cpu__DOT__mul_ctrl_d),2);
        bufp->chgCData(oldp+254,(vlSelf->cpu__DOT__div_ctrl_d),2);
        bufp->chgBit(oldp+255,(vlSelf->cpu__DOT__mul_en_d));
        bufp->chgBit(oldp+256,(vlSelf->cpu__DOT__div_en_d));
        bufp->chgBit(oldp+257,(vlSelf->cpu__DOT__reg_write_e));
        bufp->chgBit(oldp+258,(vlSelf->cpu__DOT__mem_write_e));
        bufp->chgCData(oldp+259,(vlSelf->cpu__DOT__rd_e),5);
        bufp->chgCData(oldp+260,(vlSelf->cpu__DOT__div_ctrl_e),2);
        bufp->chgCData(oldp+261,(vlSelf->cpu__DOT__fwd_rs1),2);
        bufp->chgCData(oldp+262,(vlSelf->cpu__DOT__fwd_rs2),2);
        bufp->chgIData(oldp+263,(vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out),32);
        bufp->chgBit(oldp+264,(vlSelf->cpu__DOT__reg_write_m));
        bufp->chgBit(oldp+265,(vlSelf->cpu__DOT__mem_write_m));
        bufp->chgCData(oldp+266,(vlSelf->cpu__DOT__rd_m),5);
        bufp->chgBit(oldp+267,(vlSelf->cpu__DOT__mem_valid_m));
        bufp->chgBit(oldp+268,(vlSelf->cpu__DOT__stall));
        bufp->chgBit(oldp+269,(vlSelf->cpu__DOT__flush));
        bufp->chgBit(oldp+270,(vlSelf->cpu__DOT__div_stall));
        bufp->chgBit(oldp+271,(vlSelf->cpu__DOT__cache_stall));
        bufp->chgCData(oldp+272,(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d),3);
        bufp->chgCData(oldp+273,((0x7fU & vlSelf->cpu__DOT__instr_d)),7);
        bufp->chgCData(oldp+274,((vlSelf->cpu__DOT__instr_d 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+275,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic),3);
        bufp->chgBit(oldp+276,((1U & (vlSelf->cpu__DOT__instr_d 
                                      >> 5U))));
        bufp->chgBit(oldp+277,((1U & (vlSelf->cpu__DOT__instr_d 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+278,(vlSelf->cpu__DOT__u_execute__DOT__src_a_e),32);
        bufp->chgIData(oldp+279,(vlSelf->cpu__DOT__u_execute__DOT__src_b_e),32);
        bufp->chgIData(oldp+280,(vlSelf->cpu__DOT__u_execute__DOT__alu_res),32);
        bufp->chgIData(oldp+281,(vlSelf->cpu__DOT__u_execute__DOT__mul_out_e),32);
        bufp->chgCData(oldp+282,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter),6);
        bufp->chgCData(oldp+283,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state),2);
        bufp->chgCData(oldp+284,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__next_state),2);
        bufp->chgIData(oldp+285,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__n_reg),32);
        bufp->chgIData(oldp+286,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__d_reg),32);
        bufp->chgBit(oldp+287,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__is_signed));
        bufp->chgBit(oldp+288,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_q));
        bufp->chgBit(oldp+289,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__busy_q));
        bufp->chgBit(oldp+290,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_pulse));
        bufp->chgQData(oldp+291,(vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result),64);
        bufp->chgSData(oldp+293,((0x3fffU & vlSelf->cpu__DOT__pc_f)),14);
        bufp->chgIData(oldp+294,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb),32);
        bufp->chgIData(oldp+295,(vlSelf->cpu__DOT__u_memory__DOT__store_data),32);
        bufp->chgCData(oldp+296,(vlSelf->cpu__DOT__u_memory__DOT__selected_byte),8);
        bufp->chgSData(oldp+297,(vlSelf->cpu__DOT__u_memory__DOT__selected_half),16);
        bufp->chgCData(oldp+298,(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en),4);
        bufp->chgIData(oldp+299,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr),32);
        bufp->chgIData(oldp+300,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_r_data),32);
        bufp->chgIData(oldp+301,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__byte_mask),32);
        bufp->chgIData(oldp+302,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__masked_write),32);
        bufp->chgIData(oldp+303,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__byte_mask),32);
        bufp->chgIData(oldp+304,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__masked_write),32);
        bufp->chgIData(oldp+305,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__byte_mask),32);
        bufp->chgIData(oldp+306,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__masked_write),32);
        bufp->chgIData(oldp+307,((0x1ffffU & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr)),17);
    }
    bufp->chgBit(oldp+308,(vlSelf->clk));
    bufp->chgBit(oldp+309,(vlSelf->rst));
    bufp->chgBit(oldp+310,(vlSelf->trigger));
    bufp->chgIData(oldp+311,(vlSelf->a0),32);
    bufp->chgIData(oldp+312,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                             [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+313,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                             [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+314,(((2U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                               ? ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                   ? 0U : vlSelf->cpu__DOT__u_execute__DOT__div_out_e)
                               : ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                   ? vlSelf->cpu__DOT__u_execute__DOT__mul_out_e
                                   : vlSelf->cpu__DOT__u_execute__DOT__alu_res))),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
