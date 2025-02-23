// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMAC_unit_tb__Syms.h"


void VMAC_unit_tb___024root__trace_chg_0_sub_0(VMAC_unit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMAC_unit_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_chg_0\n"); );
    // Init
    VMAC_unit_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_unit_tb___024root*>(voidSelf);
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMAC_unit_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMAC_unit_tb___024root__trace_chg_0_sub_0(VMAC_unit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_chg_0_sub_0\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.MAC_unit_tb__DOT__tb_nrst));
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight) 
                                    >> 0xfU))));
        bufp->chgCData(oldp+2,((0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight) 
                                         >> 0xaU))),5);
        bufp->chgSData(oldp+3,(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate),16);
        bufp->chgCData(oldp+4,((0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                         >> 0xaU))),5);
        bufp->chgCData(oldp+5,((0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                         >> 0xaU))),6);
        bufp->chgSData(oldp+6,(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight),16);
        bufp->chgSData(oldp+7,((0x1000U | (0xffcU & 
                                           ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight) 
                                            << 2U)))),13);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start));
        bufp->chgSData(oldp+9,(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value),16);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.MAC_shift));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgSData(oldp+11,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__nxt_input_x),16);
        bufp->chgBit(oldp+12,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run));
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b 
                                     >> 0x19U))));
        bufp->chgSData(oldp+14,((0x1fffU & (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b 
                                            >> 0xcU))),13);
        bufp->chgCData(oldp+15,((0x1fU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff))),5);
        bufp->chgBit(oldp+16,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+17,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff),6);
        bufp->chgIData(oldp+18,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b),26);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+19,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__input_x),16);
        bufp->chgBit(oldp+20,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run_latched));
        bufp->chgBit(oldp+21,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_1));
        bufp->chgBit(oldp+22,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_2));
        bufp->chgBit(oldp+23,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_3));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__input_x) 
                                     >> 0xfU))));
        bufp->chgBit(oldp+25,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign1_in));
        bufp->chgBit(oldp+26,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign2_in));
        bufp->chgBit(oldp+27,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_carryout_in));
        bufp->chgCData(oldp+28,((0x1fU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__input_x) 
                                          >> 0xaU))),5);
        bufp->chgCData(oldp+29,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp1_in),5);
        bufp->chgCData(oldp+30,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp2_in),5);
        bufp->chgSData(oldp+31,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in),13);
        bufp->chgBit(oldp+32,(((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign1_in) 
                               ^ (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign2_in))));
        bufp->chgCData(oldp+33,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sum_exp),5);
        bufp->chgBit(oldp+34,((IData)((((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                        >> 4U) & (~ 
                                                  (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                    | (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                   >> 4U))))));
        bufp->chgBit(oldp+35,((1U & ((~ ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_carryout_in) 
                                         & (0x1fU == (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sum_exp)))) 
                                     & ((~ ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                            >> 4U)) 
                                        & (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                            & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                           >> 4U))))));
        bufp->chgSData(oldp+36,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result),16);
        bufp->chgSData(oldp+37,((0x3ffU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_carryout_in)
                                            ? ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in) 
                                               >> 3U)
                                            : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in) 
                                               >> 2U)))),10);
        bufp->chgBit(oldp+38,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+39,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_not_shifted_in));
        bufp->chgSData(oldp+40,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+41,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+42,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+43,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_out));
        bufp->chgBit(oldp+44,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_in));
        bufp->chgSData(oldp+45,((0x1fffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+46,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in),13);
        bufp->chgBit(oldp+47,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_out));
        bufp->chgBit(oldp+48,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_in));
        bufp->chgCData(oldp+49,(((0U == (0x1fffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                  ? 0U : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_in))),5);
        bufp->chgCData(oldp+50,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+51,((((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_in) 
                                  << 0xfU) | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this) 
                                                          >> 2U) 
                                                         + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount)))))))),16);
        bufp->chgCData(oldp+52,((((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf) 
                                  << 2U) | (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf) 
                                             << 1U) 
                                            | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf) 
                                               | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount) 
                                                  | (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+53,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sum_exp),6);
        bufp->chgSData(oldp+54,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+55,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+56,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+57,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+58,(((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf) 
                               | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount) 
                                  | (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+59,(((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf)
                                  ? 0x1fU : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)
                                              ? 0U : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out)))),5);
        bufp->chgSData(oldp+60,(((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf)
                                  ? 0U : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)
                                           ? 0U : (0x3ffU 
                                                   & (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this) 
                                                       >> 2U) 
                                                      + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount)))))),10);
        bufp->chgCData(oldp+61,((0x1fU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_result))),5);
        bufp->chgSData(oldp+62,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+63,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+64,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out),5);
        bufp->chgBit(oldp+65,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+66,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf));
        bufp->chgSData(oldp+67,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+68,((((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_in) 
                                  << 0xfU) | (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out) 
                                               << 0xaU) 
                                              | (0x3ffU 
                                                 & (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this) 
                                                     >> 2U) 
                                                    + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount)))))),16);
        bufp->chgBit(oldp+69,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount));
        bufp->chgCData(oldp+70,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_exp1),6);
        bufp->chgCData(oldp+71,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+72,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_result),6);
        bufp->chgSData(oldp+73,((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__input_x) 
                                               << 2U)))),13);
        bufp->chgCData(oldp+74,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+75,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+76,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+77,(((1U & ((0x3fffffffU 
                                         & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf)) 
                                        | (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf) 
                                            | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount) 
                                               | (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf))) 
                                           >> 2U)))
                                  ? 0x7c00U : (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_in) 
                                                << 0xfU) 
                                               | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf)
                                                   ? 0x7c00U
                                                   : 
                                                  ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out) 
                                                     << 0xaU) 
                                                    | (0x3ffU 
                                                       & (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this) 
                                                           >> 2U) 
                                                          + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount))))))))),16);
    }
    bufp->chgBit(oldp+78,(vlSelfRef.MAC_unit_tb__DOT__tb_clk));
    bufp->chgBit(oldp+79,((1U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                                  ? ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                     >> 0xfU) : ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                                 >> 0xfU)))));
    bufp->chgBit(oldp+80,((1U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                                  ? ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                     >> 0xfU) : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                                 >> 0xfU)))));
    bufp->chgSData(oldp+81,((0x1fffU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                                         ? ((0x1000U 
                                             | (0xffcU 
                                                & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                                   << 2U))) 
                                            >> (0x1fU 
                                                & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff)))
                                         : ((0x1000U 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                                   << 2U))) 
                                            >> (0x1fU 
                                                & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff)))))),13);
    bufp->chgSData(oldp+82,(((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                              ? (0x1000U | (0xffcU 
                                            & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                               << 2U)))
                              : (0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                               << 2U))))),13);
    bufp->chgCData(oldp+83,((0x1fU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                          >> 0xaU) : 
                                      ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                       >> 0xaU)))),5);
}

void VMAC_unit_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_cleanup\n"); );
    // Init
    VMAC_unit_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_unit_tb___024root*>(voidSelf);
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
