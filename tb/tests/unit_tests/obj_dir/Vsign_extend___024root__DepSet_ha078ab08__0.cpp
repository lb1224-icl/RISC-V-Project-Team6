// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_extend.h for the primary calling header

#include "verilated.h"

#include "Vsign_extend__Syms.h"
#include "Vsign_extend___024root.h"

VL_INLINE_OPT void Vsign_extend___024root___combo__TOP__0(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->imm_op = 0U;
    if ((4U & (IData)(vlSelf->imm_src))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->imm_src)))) {
            VL_WRITEF("[%0t] %%Error: sign_extend.sv:30: Assertion failed in %Nsign_extend: Error: imm_src value outside of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/ethan/Documents/iac/RISC-V-Project-Team6/rtl/sign_extend/sign_extend.sv", 30, "");
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->imm_src)))) {
            VL_WRITEF("[%0t] %%Error: sign_extend.sv:30: Assertion failed in %Nsign_extend: Error: imm_src value outside of range!\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/ethan/Documents/iac/RISC-V-Project-Team6/rtl/sign_extend/sign_extend.sv", 30, "");
        } else {
            vlSelf->imm_op = (0xfffff000U & vlSelf->ins);
        }
    } else {
        vlSelf->imm_op = ((2U & (IData)(vlSelf->imm_src))
                           ? ((1U & (IData)(vlSelf->imm_src))
                               ? (((- (IData)((vlSelf->ins 
                                               >> 0x1fU))) 
                                   << 0x15U) | ((0x100000U 
                                                 & (vlSelf->ins 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->ins) 
                                                   | ((0x800U 
                                                       & (vlSelf->ins 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->ins 
                                                            >> 0x14U))))))
                               : (((- (IData)((vlSelf->ins 
                                               >> 0x1fU))) 
                                   << 0xdU) | ((0x1000U 
                                                & (vlSelf->ins 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->ins 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->ins 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->ins 
                                                           >> 7U)))))))
                           : ((1U & (IData)(vlSelf->imm_src))
                               ? (((- (IData)((vlSelf->ins 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ins 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ins 
                                                     >> 7U))))
                               : (((- (IData)((vlSelf->ins 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSelf->ins 
                                               >> 0x14U))));
    }
}
