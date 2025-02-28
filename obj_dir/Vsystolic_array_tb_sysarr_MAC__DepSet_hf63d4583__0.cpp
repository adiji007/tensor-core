// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"
#include "Vsystolic_array_tb_sysarr_MAC.h"

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___act_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___act_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add3__DOT__round_out = ((0x8000U 
                                              & (IData)(vlSelfRef.__PVT__accumulate_result)) 
                                             | ((0x7c00U 
                                                 & (((IData)(vlSelfRef.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSelfRef.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))));
    vlSelfRef.__PVT__accumulate_result = ((0x8000U 
                                           & (IData)(vlSelfRef.__PVT__add3__DOT__round_out)) 
                                          | ((IData)(vlSelfRef.__PVT__add3__DOT__ovf)
                                              ? 0x7c00U
                                              : ((IData)(vlSelfRef.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 (0x7fffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__round_out)))));
}
