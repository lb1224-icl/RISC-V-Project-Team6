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
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0]),32);
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[1]),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[2]),32);
        bufp->chgIData(oldp+4,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[3]),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[4]),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[5]),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[6]),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[7]),32);
        bufp->chgIData(oldp+9,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[8]),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[9]),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[10]),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[11]),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[12]),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[13]),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[14]),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[15]),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[16]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[17]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[18]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[19]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[20]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[21]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[22]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[23]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[24]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[25]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[26]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[27]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[28]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[29]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[30]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__pc_f),32);
        bufp->chgIData(oldp+34,(((IData)(4U) + vlSelf->cpu__DOT__pc_f)),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu__DOT__ins),32);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelf->cpu__DOT__ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+37,((0x7fU & vlSelf->cpu__DOT__ins)),7);
        bufp->chgCData(oldp+38,((vlSelf->cpu__DOT__ins 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+39,((7U & (vlSelf->cpu__DOT__ins 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+40,((1U & (vlSelf->cpu__DOT__ins 
                                     >> 5U))));
        bufp->chgBit(oldp+41,((1U & (vlSelf->cpu__DOT__ins 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+42,((0x1fU & (vlSelf->cpu__DOT__ins 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+43,((0x1fU & (vlSelf->cpu__DOT__ins 
                                          >> 0x14U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+44,(vlSelf->cpu__DOT__reg_write_d));
        bufp->chgCData(oldp+45,(vlSelf->cpu__DOT__result_src_d),2);
        bufp->chgBit(oldp+46,(vlSelf->cpu__DOT__mem_write_d));
        bufp->chgBit(oldp+47,(vlSelf->cpu__DOT__pc_src));
        bufp->chgCData(oldp+48,(vlSelf->cpu__DOT__alu_control_d),4);
        bufp->chgBit(oldp+49,(vlSelf->cpu__DOT__alu_src_d));
        bufp->chgIData(oldp+50,(vlSelf->cpu__DOT__imm_ext_d),32);
        bufp->chgIData(oldp+51,(vlSelf->cpu__DOT__alu_result_e),32);
        bufp->chgCData(oldp+52,(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d),3);
        bufp->chgCData(oldp+53,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic),3);
        bufp->chgIData(oldp+54,(vlSelf->cpu__DOT__u_execute__DOT__src_b_e),32);
        bufp->chgIData(oldp+55,((0x1ffffU & vlSelf->cpu__DOT__alu_result_e)),17);
    }
    bufp->chgBit(oldp+56,(vlSelf->clk));
    bufp->chgBit(oldp+57,(vlSelf->rst));
    bufp->chgIData(oldp+58,(vlSelf->cpu__DOT__rd_1),32);
    bufp->chgIData(oldp+59,(vlSelf->cpu__DOT__rd_2),32);
    bufp->chgBit(oldp+60,(((~ ((IData)(vlSelf->cpu__DOT__alu_control_d) 
                               >> 3U)) & ((4U & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                           ? ((2U & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                               ? ((~ (IData)(vlSelf->cpu__DOT__alu_control_d)) 
                                                  & (vlSelf->cpu__DOT__rd_1 
                                                     < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                   ? 
                                                  VL_LTS_III(32, vlSelf->cpu__DOT__rd_1, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   : 
                                                  (1U 
                                                   == 
                                                   (vlSelf->cpu__DOT__rd_1 
                                                    ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))
                                           : ((2U & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                               ? ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                   ? 
                                                  (1U 
                                                   == 
                                                   (vlSelf->cpu__DOT__rd_1 
                                                    | vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                                   : 
                                                  (1U 
                                                   == 
                                                   (vlSelf->cpu__DOT__rd_1 
                                                    & vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                               : ((IData)(vlSelf->cpu__DOT__alu_control_d) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->cpu__DOT__rd_1 
                                                      - vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))))));
    bufp->chgIData(oldp+61,((vlSelf->cpu__DOT__pc_f 
                             + vlSelf->cpu__DOT__imm_ext_d)),32);
    bufp->chgIData(oldp+62,(((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                              [(0x1ffffU & ((IData)(3U) 
                                            + vlSelf->cpu__DOT__alu_result_e))] 
                              << 0x18U) | ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                            [(0x1ffffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->cpu__DOT__alu_result_e))] 
                                            << 0x10U) 
                                           | ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                               [(0x1ffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->cpu__DOT__alu_result_e))] 
                                               << 8U) 
                                              | vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                              [(0x1ffffU 
                                                & vlSelf->cpu__DOT__alu_result_e)])))),32);
    bufp->chgIData(oldp+63,(((2U & (IData)(vlSelf->cpu__DOT__result_src_d))
                              ? ((1U & (IData)(vlSelf->cpu__DOT__result_src_d))
                                  ? 0U : ((IData)(4U) 
                                          + vlSelf->cpu__DOT__pc_f))
                              : ((1U & (IData)(vlSelf->cpu__DOT__result_src_d))
                                  ? ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                      [(0x1ffffU & 
                                        ((IData)(3U) 
                                         + vlSelf->cpu__DOT__alu_result_e))] 
                                      << 0x18U) | (
                                                   (vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->cpu__DOT__alu_result_e))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->cpu__DOT__alu_result_e))] 
                                                       << 8U) 
                                                      | vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                                      [
                                                      (0x1ffffU 
                                                       & vlSelf->cpu__DOT__alu_result_e)])))
                                  : vlSelf->cpu__DOT__alu_result_e))),32);
    bufp->chgIData(oldp+64,(((IData)(vlSelf->cpu__DOT__pc_src)
                              ? (vlSelf->cpu__DOT__pc_f 
                                 + vlSelf->cpu__DOT__imm_ext_d)
                              : ((IData)(4U) + vlSelf->cpu__DOT__pc_f))),32);
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
}
