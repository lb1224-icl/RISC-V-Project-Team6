// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmmu.h for the primary calling header

#include "verilated.h"

#include "Vmmu___024root.h"

VL_ATTR_COLD void Vmmu___024root___initial__TOP__0(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x20000U, vlSelf->mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i)) {
        vlSelf->mmu__DOT__u_ram__DOT__data_array[(0x1ffffU 
                                                  & vlSelf->mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF("Loading Data Memory (byte-addressed) from data.hex...\n");
    VL_READMEM_N(true, 8, 131072, 0, std::string{"data.hex"}
                 ,  &(vlSelf->mmu__DOT__u_ram__DOT__data_array)
                 , 0x10000U, ~0ULL);
}

VL_ATTR_COLD void Vmmu___024root___settle__TOP__0(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->mmu__DOT__u_l1__DOT__byte_mask = ((0xffff0000U 
                                               & vlSelf->mmu__DOT__u_l1__DOT__byte_mask) 
                                              | ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->mem_byte_en) 
                                                                    >> 1U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->mem_byte_en)))))));
    vlSelf->mmu__DOT__u_l1__DOT__byte_mask = ((0xffffU 
                                               & vlSelf->mmu__DOT__u_l1__DOT__byte_mask) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mem_byte_en) 
                                                                 >> 3U)))) 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->mem_byte_en) 
                                                                      >> 2U)))) 
                                                       << 0x10U))));
    vlSelf->mmu__DOT__u_l2__DOT__byte_mask = ((0xffff0000U 
                                               & vlSelf->mmu__DOT__u_l2__DOT__byte_mask) 
                                              | ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->mem_byte_en) 
                                                                    >> 1U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->mem_byte_en)))))));
    vlSelf->mmu__DOT__u_l2__DOT__byte_mask = ((0xffffU 
                                               & vlSelf->mmu__DOT__u_l2__DOT__byte_mask) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mem_byte_en) 
                                                                 >> 3U)))) 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->mem_byte_en) 
                                                                      >> 2U)))) 
                                                       << 0x10U))));
    vlSelf->mmu__DOT__u_l3__DOT__byte_mask = ((0xffff0000U 
                                               & vlSelf->mmu__DOT__u_l3__DOT__byte_mask) 
                                              | ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->mem_byte_en) 
                                                                    >> 1U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->mem_byte_en)))))));
    vlSelf->mmu__DOT__u_l3__DOT__byte_mask = ((0xffffU 
                                               & vlSelf->mmu__DOT__u_l3__DOT__byte_mask) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mem_byte_en) 
                                                                 >> 3U)))) 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->mem_byte_en) 
                                                                      >> 2U)))) 
                                                       << 0x10U))));
    vlSelf->mmu__DOT__u_l2__DOT__way_data[0U][0U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][0U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[0U][1U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][1U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[0U][2U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][2U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[0U][3U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][3U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[1U][0U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][0U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[1U][1U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][1U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[1U][2U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][2U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[1U][3U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][3U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[2U][0U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][0U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[2U][1U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][1U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[2U][2U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][2U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[2U][3U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][3U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[3U][0U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][0U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[3U][1U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][1U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[3U][2U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][2U];
    vlSelf->mmu__DOT__u_l2__DOT__way_data[3U][3U] = 
        vlSelf->mmu__DOT__u_l2__DOT__data_array[(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[0U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[0U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[0U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[0U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[1U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[1U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[1U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[1U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[2U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[2U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[2U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[2U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [2U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[3U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[3U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[3U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[3U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [3U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[4U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [4U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[4U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [4U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[4U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [4U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[4U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [4U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[5U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [5U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[5U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [5U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[5U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [5U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[5U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [5U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[6U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [6U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[6U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [6U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[6U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [6U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[6U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [6U][3U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[7U][0U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [7U][0U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[7U][1U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [7U][1U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[7U][2U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [7U][2U];
    vlSelf->mmu__DOT__u_l3__DOT__way_data[7U][3U] = 
        vlSelf->mmu__DOT__u_l3__DOT__data_array[(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [7U][3U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[0U][0U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][0U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[0U][1U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][1U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[0U][2U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][2U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[0U][3U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [0U][3U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[1U][0U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][0U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[1U][1U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][1U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[1U][2U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][2U];
    vlSelf->mmu__DOT__u_l1__DOT__way_data[1U][3U] = 
        vlSelf->mmu__DOT__u_l1__DOT__data_array[(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
        [1U][3U];
    vlSelf->mmu__DOT__u_l2__DOT__way_hit = ((0xeU & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)) 
                                            | (vlSelf->mmu__DOT__u_l2__DOT__valid_array
                                               [(0xffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
                                               [0U] 
                                               & (vlSelf->mmu__DOT__u_l2__DOT__tag_array
                                                  [
                                                  (0xffU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
                                                  [0U] 
                                                  == 
                                                  (vlSelf->mem_addr 
                                                   >> 0xcU))));
    vlSelf->mmu__DOT__u_l2__DOT__way_hit = ((0xdU & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l2__DOT__valid_array
                                                [(0xffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [1U] 
                                                & (vlSelf->mmu__DOT__u_l2__DOT__tag_array
                                                   [
                                                   (0xffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [1U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xcU))) 
                                               << 1U));
    vlSelf->mmu__DOT__u_l2__DOT__way_hit = ((0xbU & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l2__DOT__valid_array
                                                [(0xffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [2U] 
                                                & (vlSelf->mmu__DOT__u_l2__DOT__tag_array
                                                   [
                                                   (0xffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [2U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xcU))) 
                                               << 2U));
    vlSelf->mmu__DOT__u_l2__DOT__way_hit = ((7U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l2__DOT__valid_array
                                                [(0xffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [3U] 
                                                & (vlSelf->mmu__DOT__u_l2__DOT__tag_array
                                                   [
                                                   (0xffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [3U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xcU))) 
                                               << 3U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xfeU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | (vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                               [(0x1ffU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
                                               [0U] 
                                               & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                  [
                                                  (0x1ffU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
                                                  [0U] 
                                                  == 
                                                  (vlSelf->mem_addr 
                                                   >> 0xdU))));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xfdU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [1U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [1U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 1U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xfbU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [2U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [2U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 2U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xf7U 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [3U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [3U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 3U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xefU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [4U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [4U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 4U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xdfU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [5U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [5U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 5U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0xbfU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [6U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [6U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 6U));
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = ((0x7fU 
                                             & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l3__DOT__valid_array
                                                [(0x1ffU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [7U] 
                                                & (vlSelf->mmu__DOT__u_l3__DOT__tag_array
                                                   [
                                                   (0x1ffU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [7U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xdU))) 
                                               << 7U));
    vlSelf->mmu__DOT__u_l1__DOT__way_hit = ((2U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit)) 
                                            | (vlSelf->mmu__DOT__u_l1__DOT__valid_array
                                               [(0x7fU 
                                                 & (vlSelf->mem_addr 
                                                    >> 4U))]
                                               [0U] 
                                               & (vlSelf->mmu__DOT__u_l1__DOT__tag_array
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->mem_addr 
                                                      >> 4U))]
                                                  [0U] 
                                                  == 
                                                  (vlSelf->mem_addr 
                                                   >> 0xbU))));
    vlSelf->mmu__DOT__u_l1__DOT__way_hit = ((1U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit)) 
                                            | ((vlSelf->mmu__DOT__u_l1__DOT__valid_array
                                                [(0x7fU 
                                                  & (vlSelf->mem_addr 
                                                     >> 4U))]
                                                [1U] 
                                                & (vlSelf->mmu__DOT__u_l1__DOT__tag_array
                                                   [
                                                   (0x7fU 
                                                    & (vlSelf->mem_addr 
                                                       >> 4U))]
                                                   [1U] 
                                                   == 
                                                   (vlSelf->mem_addr 
                                                    >> 0xbU))) 
                                               << 1U));
    vlSelf->mem_ready = (1U & (~ (IData)(vlSelf->mmu__DOT__state)));
    vlSelf->cache_hit = vlSelf->mmu__DOT__last_read_hit;
    vlSelf->mmu__DOT__u_l1__DOT__repl_way = vlSelf->mmu__DOT__u_l1__DOT__rr_ptr
        [(0x7fU & (vlSelf->mmu__DOT__l1_fill_addr >> 4U))];
    if ((1U & (~ vlSelf->mmu__DOT__u_l1__DOT__valid_array
               [(0x7fU & (vlSelf->mmu__DOT__l1_fill_addr 
                          >> 4U))][0U]))) {
        vlSelf->mmu__DOT__u_l1__DOT__repl_way = 0U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l1__DOT__valid_array
               [(0x7fU & (vlSelf->mmu__DOT__l1_fill_addr 
                          >> 4U))][1U]))) {
        vlSelf->mmu__DOT__u_l1__DOT__repl_way = 1U;
    }
    vlSelf->mmu__DOT__u_l2__DOT__repl_way = vlSelf->mmu__DOT__u_l2__DOT__rr_ptr
        [(0xffU & (vlSelf->mmu__DOT__l2_fill_addr >> 4U))];
    if ((1U & (~ vlSelf->mmu__DOT__u_l2__DOT__valid_array
               [(0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                          >> 4U))][0U]))) {
        vlSelf->mmu__DOT__u_l2__DOT__repl_way = 0U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l2__DOT__valid_array
               [(0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                          >> 4U))][1U]))) {
        vlSelf->mmu__DOT__u_l2__DOT__repl_way = 1U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l2__DOT__valid_array
               [(0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                          >> 4U))][2U]))) {
        vlSelf->mmu__DOT__u_l2__DOT__repl_way = 2U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l2__DOT__valid_array
               [(0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                          >> 4U))][3U]))) {
        vlSelf->mmu__DOT__u_l2__DOT__repl_way = 3U;
    }
    vlSelf->mmu__DOT__u_l3__DOT__repl_way = vlSelf->mmu__DOT__u_l3__DOT__rr_ptr
        [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                    >> 4U))];
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][0U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 0U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][1U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 1U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][2U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 2U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][3U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 3U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][4U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 4U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][5U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 5U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][6U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 6U;
    }
    if ((1U & (~ vlSelf->mmu__DOT__u_l3__DOT__valid_array
               [(0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                           >> 4U))][7U]))) {
        vlSelf->mmu__DOT__u_l3__DOT__repl_way = 7U;
    }
    vlSelf->mmu__DOT__ram_addr = ((IData)(vlSelf->mmu__DOT__state)
                                   ? ((0xfffffff0U 
                                       & vlSelf->mmu__DOT__saved_addr) 
                                      + ((IData)(vlSelf->mmu__DOT__fill_count) 
                                         << 2U)) : vlSelf->mem_addr);
    vlSelf->mmu__DOT__u_l1__DOT__masked_write = (vlSelf->mem_w_data 
                                                 & vlSelf->mmu__DOT__u_l1__DOT__byte_mask);
    vlSelf->mmu__DOT__u_l2__DOT__masked_write = (vlSelf->mem_w_data 
                                                 & vlSelf->mmu__DOT__u_l2__DOT__byte_mask);
    vlSelf->mmu__DOT__u_l3__DOT__masked_write = (vlSelf->mem_w_data 
                                                 & vlSelf->mmu__DOT__u_l3__DOT__byte_mask);
    vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U] = 0U;
    vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U] = 0U;
    vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U] = 0U;
    vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U] = 0U;
    if ((1U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [0U][0U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [0U][1U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [0U][2U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [0U][3U];
    }
    if ((2U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [1U][0U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [1U][1U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [1U][2U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [1U][3U];
    }
    if ((4U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [2U][0U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [2U][1U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [2U][2U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [2U][3U];
    }
    if ((8U & (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [3U][0U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [3U][1U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [3U][2U];
        vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l2__DOT__way_data
            [3U][3U];
    }
    vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] = 0U;
    vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] = 0U;
    vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] = 0U;
    vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] = 0U;
    if ((1U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [0U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [0U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [0U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [0U][3U];
    }
    if ((2U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [1U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [1U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [1U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [1U][3U];
    }
    if ((4U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [2U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [2U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [2U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [2U][3U];
    }
    if ((8U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [3U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [3U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [3U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [3U][3U];
    }
    if ((0x10U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [4U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [4U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [4U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [4U][3U];
    }
    if ((0x20U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [5U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [5U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [5U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [5U][3U];
    }
    if ((0x40U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [6U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [6U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [6U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [6U][3U];
    }
    if ((0x80U & (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [7U][0U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [7U][1U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [7U][2U];
        vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U] 
            = vlSelf->mmu__DOT__u_l3__DOT__way_data
            [7U][3U];
    }
    vlSelf->mmu__DOT__u_l1__DOT__selected_word = 0U;
    if ((1U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l1__DOT__selected_word 
            = ((0U == (3U & (vlSelf->mem_addr >> 2U)))
                ? vlSelf->mmu__DOT__u_l1__DOT__way_data
               [0U][0U] : ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U))) ? 
                           vlSelf->mmu__DOT__u_l1__DOT__way_data
                           [0U][1U] : ((2U == (3U & 
                                               (vlSelf->mem_addr 
                                                >> 2U)))
                                        ? vlSelf->mmu__DOT__u_l1__DOT__way_data
                                       [0U][2U] : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->mem_addr 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->mmu__DOT__u_l1__DOT__way_data
                                                   [0U][3U]
                                                    : 0U))));
    }
    if ((2U & (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))) {
        vlSelf->mmu__DOT__u_l1__DOT__selected_word 
            = ((0U == (3U & (vlSelf->mem_addr >> 2U)))
                ? vlSelf->mmu__DOT__u_l1__DOT__way_data
               [1U][0U] : ((1U == (3U & (vlSelf->mem_addr 
                                         >> 2U))) ? 
                           vlSelf->mmu__DOT__u_l1__DOT__way_data
                           [1U][1U] : ((2U == (3U & 
                                               (vlSelf->mem_addr 
                                                >> 2U)))
                                        ? vlSelf->mmu__DOT__u_l1__DOT__way_data
                                       [1U][2U] : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->mem_addr 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->mmu__DOT__u_l1__DOT__way_data
                                                   [1U][3U]
                                                    : 0U))));
    }
    vlSelf->mmu__DOT__ram_r_data = ((vlSelf->mmu__DOT__u_ram__DOT__data_array
                                     [(0x1ffffU & ((IData)(3U) 
                                                   + vlSelf->mmu__DOT__ram_addr))] 
                                     << 0x18U) | ((
                                                   vlSelf->mmu__DOT__u_ram__DOT__data_array
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->mmu__DOT__ram_addr))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->mmu__DOT__u_ram__DOT__data_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->mmu__DOT__ram_addr))] 
                                                      << 8U) 
                                                     | vlSelf->mmu__DOT__u_ram__DOT__data_array
                                                     [
                                                     (0x1ffffU 
                                                      & vlSelf->mmu__DOT__ram_addr)])));
    vlSelf->mmu__DOT__resp_data_comb = 0U;
    if ((1U & (~ (IData)(vlSelf->mem_we)))) {
        if (vlSelf->mmu__DOT__resp_valid) {
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__widx 
                = vlSelf->mmu__DOT__resp_word_index;
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[0U] 
                = vlSelf->mmu__DOT__block_buf[0U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[1U] 
                = vlSelf->mmu__DOT__block_buf[1U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[2U] 
                = vlSelf->mmu__DOT__block_buf[2U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[3U] 
                = vlSelf->mmu__DOT__block_buf[3U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__0__Vfuncout 
                = ((2U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__0__widx))
                    ? ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__0__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[3U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[2U])
                    : ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__0__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[1U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk[0U]));
            vlSelf->mmu__DOT__resp_data_comb = vlSelf->__Vfunc_mmu__DOT__word_from_block__0__Vfuncout;
        } else if (vlSelf->mmu__DOT__state) {
            vlSelf->mmu__DOT__resp_data_comb = 0U;
        } else {
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__widx 
                = (3U & (vlSelf->mem_addr >> 2U));
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[0U] 
                = vlSelf->mmu__DOT__u_l3__DOT__selected_line[0U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[1U] 
                = vlSelf->mmu__DOT__u_l3__DOT__selected_line[1U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[2U] 
                = vlSelf->mmu__DOT__u_l3__DOT__selected_line[2U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[3U] 
                = vlSelf->mmu__DOT__u_l3__DOT__selected_line[3U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__2__Vfuncout 
                = ((2U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__2__widx))
                    ? ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__2__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[3U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[2U])
                    : ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__2__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[1U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk[0U]));
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__widx 
                = (3U & (vlSelf->mem_addr >> 2U));
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[0U] 
                = vlSelf->mmu__DOT__u_l2__DOT__selected_line[0U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[1U] 
                = vlSelf->mmu__DOT__u_l2__DOT__selected_line[1U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[2U] 
                = vlSelf->mmu__DOT__u_l2__DOT__selected_line[2U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[3U] 
                = vlSelf->mmu__DOT__u_l2__DOT__selected_line[3U];
            vlSelf->__Vfunc_mmu__DOT__word_from_block__1__Vfuncout 
                = ((2U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__1__widx))
                    ? ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__1__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[3U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[2U])
                    : ((1U & (IData)(vlSelf->__Vfunc_mmu__DOT__word_from_block__1__widx))
                        ? vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[1U]
                        : vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk[0U]));
            vlSelf->mmu__DOT__resp_data_comb = ((0U 
                                                 != (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))
                                                 ? vlSelf->mmu__DOT__u_l1__DOT__selected_word
                                                 : 
                                                ((0U 
                                                  != (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))
                                                  ? vlSelf->__Vfunc_mmu__DOT__word_from_block__1__Vfuncout
                                                  : 
                                                 ((0U 
                                                   != (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))
                                                   ? vlSelf->__Vfunc_mmu__DOT__word_from_block__2__Vfuncout
                                                   : 0U)));
        }
    }
    vlSelf->mem_r_data = vlSelf->mmu__DOT__resp_data_comb;
}

VL_ATTR_COLD void Vmmu___024root___eval_initial(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___eval_initial\n"); );
    // Body
    Vmmu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vmmu___024root___eval_settle(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___eval_settle\n"); );
    // Body
    Vmmu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vmmu___024root___final(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___final\n"); );
}

VL_ATTR_COLD void Vmmu___024root___ctor_var_reset(Vmmu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->mem_valid = VL_RAND_RESET_I(1);
    vlSelf->mem_we = VL_RAND_RESET_I(1);
    vlSelf->mem_addr = VL_RAND_RESET_I(32);
    vlSelf->mem_w_data = VL_RAND_RESET_I(32);
    vlSelf->mem_byte_en = VL_RAND_RESET_I(4);
    vlSelf->mem_r_data = VL_RAND_RESET_I(32);
    vlSelf->mem_ready = VL_RAND_RESET_I(1);
    vlSelf->cache_hit = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__l1_fill_en = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__l1_fill_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->mmu__DOT__l1_fill_data);
    vlSelf->mmu__DOT__l1_fill_mark_valid = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__l2_fill_en = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__l2_fill_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->mmu__DOT__l2_fill_data);
    vlSelf->mmu__DOT__l2_fill_mark_valid = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__l3_fill_en = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__l3_fill_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->mmu__DOT__l3_fill_data);
    vlSelf->mmu__DOT__l3_fill_mark_valid = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__ram_addr = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__ram_r_data = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__saved_addr = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__saved_word_index = VL_RAND_RESET_I(2);
    vlSelf->mmu__DOT__fill_count = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->mmu__DOT__block_buf);
    vlSelf->mmu__DOT__resp_valid = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__resp_word_index = VL_RAND_RESET_I(2);
    vlSelf->mmu__DOT__last_read_hit = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__resp_data_comb = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__unnamedblk1__DOT__any_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->mmu__DOT__unnamedblk2__DOT__block_next);
    vlSelf->mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->mmu__DOT__u_l1__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->mmu__DOT__u_l1__DOT__valid_array[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l1__DOT__data_array[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->mmu__DOT__u_l1__DOT__rr_ptr[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mmu__DOT__u_l1__DOT__way_hit = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l1__DOT__way_data[__Vi0]);
    }
    vlSelf->mmu__DOT__u_l1__DOT__selected_word = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l1__DOT__repl_way = VL_RAND_RESET_I(1);
    vlSelf->mmu__DOT__u_l1__DOT__byte_mask = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l1__DOT__masked_write = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l1__DOT__s = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l1__DOT__w = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__ww = 0;
    vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->mmu__DOT__u_l2__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(20);
        }
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->mmu__DOT__u_l2__DOT__valid_array[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l2__DOT__data_array[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->mmu__DOT__u_l2__DOT__rr_ptr[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->mmu__DOT__u_l2__DOT__way_hit = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l2__DOT__way_data[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l2__DOT__selected_line);
    vlSelf->mmu__DOT__u_l2__DOT__repl_way = VL_RAND_RESET_I(2);
    vlSelf->mmu__DOT__u_l2__DOT__byte_mask = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l2__DOT__masked_write = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s = 0;
    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w = 0;
    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__w = 0;
    vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            vlSelf->mmu__DOT__u_l3__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(19);
        }
    }
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            vlSelf->mmu__DOT__u_l3__DOT__valid_array[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l3__DOT__data_array[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->mmu__DOT__u_l3__DOT__rr_ptr[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->mmu__DOT__u_l3__DOT__way_hit = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l3__DOT__way_data[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->mmu__DOT__u_l3__DOT__selected_line);
    vlSelf->mmu__DOT__u_l3__DOT__repl_way = VL_RAND_RESET_I(3);
    vlSelf->mmu__DOT__u_l3__DOT__byte_mask = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l3__DOT__masked_write = VL_RAND_RESET_I(32);
    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s = 0;
    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w = 0;
    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__w = 0;
    vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->mmu__DOT__u_ram__DOT__data_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_mmu__DOT__word_from_block__0__Vfuncout = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_mmu__DOT__word_from_block__0__blk);
    vlSelf->__Vfunc_mmu__DOT__word_from_block__0__widx = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mmu__DOT__word_from_block__1__Vfuncout = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_mmu__DOT__word_from_block__1__blk);
    vlSelf->__Vfunc_mmu__DOT__word_from_block__1__widx = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mmu__DOT__word_from_block__2__Vfuncout = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_mmu__DOT__word_from_block__2__blk);
    vlSelf->__Vfunc_mmu__DOT__word_from_block__2__widx = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
