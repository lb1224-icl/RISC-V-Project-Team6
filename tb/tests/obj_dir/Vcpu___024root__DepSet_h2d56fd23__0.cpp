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
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3;
    // Body
    __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0 = 0U;
    if (((IData)(vlSelf->cpu__DOT__mem_write_d) & (0U 
                                                   != 
                                                   (0x1ffffU 
                                                    & vlSelf->cpu__DOT__u_execute__DOT__alu_res)))) {
        __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0 
            = (0xffU & vlSelf->cpu__DOT__rd_2);
        __Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0 
            = (0x1ffffU & vlSelf->cpu__DOT__u_execute__DOT__alu_res);
        __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1 
            = (0xffU & (vlSelf->cpu__DOT__rd_2 >> 8U));
        __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1 
            = (0x1ffffU & ((IData)(1U) + vlSelf->cpu__DOT__u_execute__DOT__alu_res));
        __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2 
            = (0xffU & (vlSelf->cpu__DOT__rd_2 >> 0x10U));
        __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2 
            = (0x1ffffU & ((IData)(2U) + vlSelf->cpu__DOT__u_execute__DOT__alu_res));
        __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3 
            = (vlSelf->cpu__DOT__rd_2 >> 0x18U);
        __Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3 
            = (0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__u_execute__DOT__alu_res));
    }
    if (__Vdlyvset__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0) {
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[__Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0] 
            = __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v0;
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[__Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1] 
            = __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v1;
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[__Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2] 
            = __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v2;
        vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array[__Vdlyvdim0__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3] 
            = __Vdlyvval__cpu__DOT__u_memory__DOT__data_mem__DOT__data_array__v3;
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__2(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
    // Body
    __Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 = 0U;
    if (((IData)(vlSelf->cpu__DOT__reg_write_d) & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->cpu__DOT__ins 
                                                       >> 7U))))) {
        __Vdlyvval__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 
            = ((2U & (IData)(vlSelf->cpu__DOT__result_src_d))
                ? ((1U & (IData)(vlSelf->cpu__DOT__result_src_d))
                    ? 0U : ((IData)(4U) + vlSelf->cpu__DOT__pc_f))
                : ((1U & (IData)(vlSelf->cpu__DOT__result_src_d))
                    ? ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                        [(0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__u_execute__DOT__alu_res))] 
                        << 0x18U) | ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                      [(0x1ffffU & 
                                        ((IData)(2U) 
                                         + vlSelf->cpu__DOT__u_execute__DOT__alu_res))] 
                                      << 0x10U) | (
                                                   (vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->cpu__DOT__u_execute__DOT__alu_res))] 
                                                    << 8U) 
                                                   | vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                                   [
                                                   (0x1ffffU 
                                                    & vlSelf->cpu__DOT__u_execute__DOT__alu_res)])))
                    : vlSelf->cpu__DOT__u_execute__DOT__alu_res));
        __Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0 
            = (0x1fU & (vlSelf->cpu__DOT__ins >> 7U));
    }
    if (__Vdlyvset__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0) {
        vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[__Vdlyvdim0__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0] 
            = __Vdlyvval__cpu__DOT__u_decode__DOT__rf__DOT__ram_array__v0;
    }
    vlSelf->a0 = vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
        [0xaU];
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__3(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->cpu__DOT__pc_f = ((IData)(vlSelf->rst) ? 0U
                               : vlSelf->cpu__DOT__u_fetch__DOT__next_pc);
    if (VL_UNLIKELY((0x4000U <= ((IData)(3U) + (0x3fffU 
                                                & vlSelf->cpu__DOT__pc_f))))) {
        VL_WRITEF("ERROR: PC out of range! PC=%x\n",
                  32,vlSelf->cpu__DOT__pc_f);
    }
    vlSelf->cpu__DOT__ins = ((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                              [(0x3fffU & ((IData)(3U) 
                                           + vlSelf->cpu__DOT__pc_f))] 
                              << 0x18U) | ((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                            [(0x3fffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->cpu__DOT__pc_f))] 
                                            << 0x10U) 
                                           | ((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                               [(0x3fffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->cpu__DOT__pc_f))] 
                                               << 8U) 
                                              | vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                              [(0x3fffU 
                                                & vlSelf->cpu__DOT__pc_f)])));
}

VL_INLINE_OPT void Vcpu___024root___multiclk__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___multiclk__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__rd_2 = vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
        [(0x1fU & (vlSelf->cpu__DOT__ins >> 0x14U))];
    vlSelf->cpu__DOT__rd_1 = vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
        [(0x1fU & (vlSelf->cpu__DOT__ins >> 0xfU))];
}

void Vcpu___024root___combo__TOP__0(Vcpu___024root* vlSelf);

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vcpu___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___multiclk__TOP__0(vlSelf);
    }
    Vcpu___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf);

VL_INLINE_OPT QData Vcpu___024root___change_request(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request\n"); );
    // Body
    return (Vcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->cpu__DOT__u_execute__DOT__src_b_e ^ vlSelf->__Vchglast__TOP__cpu__DOT__u_execute__DOT__src_b_e));
    VL_DEBUG_IF( if(__req && ((vlSelf->cpu__DOT__u_execute__DOT__src_b_e ^ vlSelf->__Vchglast__TOP__cpu__DOT__u_execute__DOT__src_b_e))) VL_DBG_MSGF("        CHANGE: ../../rtl/sub_top_files/execute.sv:30: cpu.u_execute.src_b_e\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cpu__DOT__u_execute__DOT__src_b_e 
        = vlSelf->cpu__DOT__u_execute__DOT__src_b_e;
    return __req;
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
}
#endif  // VL_DEBUG
