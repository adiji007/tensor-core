// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"
#include "Vsystolic_array_tb__Syms.h"
#include "Vsystolic_array_tb_sysarr_MAC.h"

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out) 
                                                 && (1U 
                                                     & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                        >> 0xfU)))
                                                 : (IData)(vlSelfRef.__PVT__add_sign_shifted_in)));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && ((IData)(vlSelfRef.__PVT__run)
                                                     ? 
                                                    ((1U 
                                                      & (~ (IData)(vlSelfRef.__PVT__add1__DOT__cmp_out))) 
                                                     && (1U 
                                                         & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                            >> 0xfU)))
                                                     : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [0U] 
                                                           >> 0x3fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & 0U);
                vlSelfRef.__PVT__frac_not_shifted_in = 0x1000U;
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & (0x1000U >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [0U] 
                                                             >> 0x3aU)));
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__add1__DOT__diff = vlSelfRef.__PVT__mul_sum_exp;
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [0U] 
                                                          >> 0x30U)) 
                                                 << 2U)))));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [0U][0U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out) 
                                                 && (1U 
                                                     & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                        >> 0xfU)))
                                                 : (IData)(vlSelfRef.__PVT__add_sign_shifted_in)));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && ((IData)(vlSelfRef.__PVT__run)
                                                     ? 
                                                    ((1U 
                                                      & (~ (IData)(vlSelfRef.__PVT__add1__DOT__cmp_out))) 
                                                     && (1U 
                                                         & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                            >> 0xfU)))
                                                     : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [1U] 
                                                           >> 0x3fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & 0U);
                vlSelfRef.__PVT__frac_not_shifted_in = 0x1000U;
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & (0x1000U >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [1U] 
                                                             >> 0x3aU)));
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__add1__DOT__diff = vlSelfRef.__PVT__mul_sum_exp;
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [1U] 
                                                          >> 0x30U)) 
                                                 << 2U)))));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [0U][1U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out) 
                                                 && (1U 
                                                     & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                        >> 0xfU)))
                                                 : (IData)(vlSelfRef.__PVT__add_sign_shifted_in)));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && ((IData)(vlSelfRef.__PVT__run)
                                                     ? 
                                                    ((1U 
                                                      & (~ (IData)(vlSelfRef.__PVT__add1__DOT__cmp_out))) 
                                                     && (1U 
                                                         & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                            >> 0xfU)))
                                                     : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [2U] 
                                                           >> 0x3fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & 0U);
                vlSelfRef.__PVT__frac_not_shifted_in = 0x1000U;
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & (0x1000U >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [2U] 
                                                             >> 0x3aU)));
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__add1__DOT__diff = vlSelfRef.__PVT__mul_sum_exp;
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [2U] 
                                                          >> 0x30U)) 
                                                 << 2U)))));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [0U][2U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out) 
                                                 && (1U 
                                                     & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                        >> 0xfU)))
                                                 : (IData)(vlSelfRef.__PVT__add_sign_shifted_in)));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && ((IData)(vlSelfRef.__PVT__run)
                                                     ? 
                                                    ((1U 
                                                      & (~ (IData)(vlSelfRef.__PVT__add1__DOT__cmp_out))) 
                                                     && (1U 
                                                         & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                            >> 0xfU)))
                                                     : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [3U] 
                                                           >> 0x3fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & 0U);
                vlSelfRef.__PVT__frac_not_shifted_in = 0x1000U;
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & (0x1000U >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [3U] 
                                                             >> 0x3aU)));
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__add1__DOT__diff = vlSelfRef.__PVT__mul_sum_exp;
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [3U] 
                                                          >> 0x30U)) 
                                                 << 2U)))));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [0U][3U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [0U] 
                                                           >> 0x2fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [0U]
                                                     [0U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [0U]
                                                         [0U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [0U] 
                                                             >> 0x2aU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [0U]
                                                   [0U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][0U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [0U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [0U] 
                                                          >> 0x20U)) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [0U]
                                                     [0U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [1U][0U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [1U] 
                                                           >> 0x2fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [0U]
                                                     [1U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [0U]
                                                         [1U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [1U] 
                                                             >> 0x2aU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [0U]
                                                   [1U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][1U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [1U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [1U] 
                                                          >> 0x20U)) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [0U]
                                                     [1U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [1U][1U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [2U] 
                                                           >> 0x2fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [0U]
                                                     [2U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [0U]
                                                         [2U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [2U] 
                                                             >> 0x2aU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [0U]
                                                   [2U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][2U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [2U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [2U] 
                                                          >> 0x20U)) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [0U]
                                                     [2U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [1U][2U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [3U] 
                                                           >> 0x2fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [0U]
                                                     [3U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [0U]
                                                         [3U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [3U] 
                                                             >> 0x2aU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [0U]
                                                   [3U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][3U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [3U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [3U] 
                                                          >> 0x20U)) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [0U]
                                                     [3U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [1U][3U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [0U] 
                                                           >> 0x1fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [0U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [0U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [0U] 
                                                             >> 0x1aU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [1U]
                                                   [0U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][0U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [1U]
                                               [0U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [0U] 
                                                          >> 0x10U)) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [0U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [2U][0U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [1U] 
                                                           >> 0x1fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [1U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [1U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [1U] 
                                                             >> 0x1aU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [1U]
                                                   [1U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][1U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [1U]
                                               [1U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [1U] 
                                                          >> 0x10U)) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [1U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [2U][1U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [2U] 
                                                           >> 0x1fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [2U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [2U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [2U] 
                                                             >> 0x1aU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [1U]
                                                   [2U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][2U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [1U]
                                               [2U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [2U] 
                                                          >> 0x10U)) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [2U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [2U][2U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [3U] 
                                                           >> 0x1fU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [3U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [3U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [3U] 
                                                             >> 0x1aU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [1U]
                                                   [3U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][3U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [1U]
                                               [3U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [3U] 
                                                          >> 0x10U)) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [3U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [2U][3U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [0U] 
                                                           >> 0xfU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [0U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [0U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [0U] 
                                                             >> 0xaU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [2U]
                                                   [0U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][0U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [2U]
                                               [0U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U]) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [0U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [3U][0U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [1U] 
                                                           >> 0xfU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [1U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [1U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [1U] 
                                                             >> 0xaU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [2U]
                                                   [1U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][1U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [2U]
                                               [1U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U]) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [1U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [3U][1U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [2U] 
                                                           >> 0xfU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [2U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [2U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [2U] 
                                                             >> 0xaU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [2U]
                                                   [2U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][2U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [2U]
                                               [2U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U]) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [2U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [3U][2U];
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__add_exp_max_in;
    __Vdly__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__start_passthrough_2;
    __Vdly__start_passthrough_2 = 0;
    CData/*0:0*/ __Vdly__start_passthrough_3;
    __Vdly__start_passthrough_3 = 0;
    // Body
    __Vdly__start_passthrough_2 = vlSelfRef.__PVT__start_passthrough_2;
    __Vdly__start_passthrough_3 = vlSelfRef.__PVT__start_passthrough_3;
    __Vdly__add_exp_max_in = vlSelfRef.__PVT__add_exp_max_in;
    __Vdly__start_passthrough_2 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_1)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_2)));
    __Vdly__start_passthrough_3 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                   && ((IData)(vlSelfRef.__PVT__run)
                                        ? (IData)(vlSelfRef.__PVT__start_passthrough_2)
                                        : (IData)(vlSelfRef.__PVT__start_passthrough_3)));
    vlSelfRef.__PVT__add_sign_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && ((IData)(vlSelfRef.__PVT__run)
                                         ? (IData)(vlSelfRef.__PVT__add_sign_out)
                                         : (IData)(vlSelfRef.__PVT__add_sign_in)));
    vlSelfRef.__PVT__mul_carryout_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                        && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                   ? 
                                                  (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                   >> 0x19U)
                                                   : (IData)(vlSelfRef.__PVT__mul_carryout_in))));
    vlSelfRef.__PVT__mul_sign2_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? (IData)(
                                                          (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [3U] 
                                                           >> 0xfU))
                                                : (IData)(vlSelfRef.__PVT__mul_sign2_in))));
    vlSelfRef.__PVT__add_sign_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && (1U 
                                                & ((IData)(vlSelfRef.__PVT__run)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__mul_result) 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [3U] 
                                                     >> 0xfU))
                                                    : (IData)(vlSelfRef.__PVT__add_sign_shifted_in))));
    vlSelfRef.__PVT__add_sign_not_shifted_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.__PVT__run)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__add1__DOT__cmp_out)
                                                         ? 
                                                        (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [3U] 
                                                         >> 0xfU)
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__mul_result) 
                                                         >> 0xfU))
                                                        : (IData)(vlSelfRef.__PVT__add_sign_not_shifted_in))));
    vlSelfRef.__PVT__add_carry_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && ((IData)(vlSelfRef.__PVT__run)
                                          ? (IData)(vlSelfRef.__PVT__add_carry_out)
                                          : (IData)(vlSelfRef.__PVT__add_carry_in)));
    vlSelfRef.__PVT__mul_sign1_in = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                     && (1U & ((IData)(vlSelfRef.__PVT__run)
                                                ? ((IData)(vlSelfRef.__PVT__input_x) 
                                                   >> 0xfU)
                                                : (IData)(vlSelfRef.__PVT__mul_sign1_in))));
    if (vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) {
        if (vlSelfRef.__PVT__run) {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                                  >> 0xcU));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(
                                                            (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [3U] 
                                                             >> 0xaU)));
            if (vlSelfRef.__PVT__add1__DOT__cmp_out) {
                __Vdly__add_exp_max_in = (0x1fU & (
                                                   vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [2U]
                                                   [3U] 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][3U] 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & ((IData)(vlSelfRef.__PVT__mul_result) 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            } else {
                __Vdly__add_exp_max_in = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                                   >> 0xaU));
                vlSelfRef.__PVT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__mul_result) 
                                            << 2U)));
                vlSelfRef.__PVT__frac_shifted_in = 
                    (0x1fffU & ((0x1000U | (0xffcU 
                                            & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [2U]
                                               [3U] 
                                               << 2U))) 
                                >> (0x1fU & (IData)(vlSelfRef.__PVT__add1__DOT__diff))));
            }
            vlSelfRef.__PVT__add_exp_max_s3_in = ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__input_x) 
                                             >> 0xaU));
        } else {
            vlSelfRef.__PVT__mul_product_in = (0x1fffU 
                                               & (IData)(vlSelfRef.__PVT__mul_product_in));
            vlSelfRef.__PVT__mul_exp2_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp2_in));
            __Vdly__add_exp_max_in = (0x1fU & (IData)(vlSelfRef.__PVT__add_exp_max_in));
            vlSelfRef.__PVT__frac_not_shifted_in = vlSelfRef.__PVT__frac_not_shifted_in;
            vlSelfRef.__PVT__frac_shifted_in = (0x1fffU 
                                                & (IData)(vlSelfRef.__PVT__frac_shifted_in));
            vlSelfRef.__PVT__add_exp_max_s3_in = vlSelfRef.__PVT__add_exp_max_s3_in;
            vlSelfRef.__PVT__add_sum_in = (0x1fffU 
                                           & (IData)(vlSelfRef.__PVT__add_sum_in));
            vlSelfRef.__PVT__mul_exp1_in = (0x1fU & (IData)(vlSelfRef.__PVT__mul_exp1_in));
        }
        vlSelfRef.__PVT__input_x = vlSelfRef.__PVT__nxt_input_x;
    } else {
        vlSelfRef.__PVT__mul_product_in = 0U;
        vlSelfRef.__PVT__mul_exp2_in = 0U;
        __Vdly__add_exp_max_in = 0U;
        vlSelfRef.__PVT__frac_not_shifted_in = 0U;
        vlSelfRef.__PVT__frac_shifted_in = 0U;
        vlSelfRef.__PVT__add_exp_max_s3_in = 0U;
        vlSelfRef.__PVT__add_sum_in = 0U;
        vlSelfRef.__PVT__mul_exp1_in = 0U;
        vlSelfRef.__PVT__input_x = 0U;
    }
    vlSelfRef.__PVT__run_latched = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                    && (((IData)(vlSelfRef.__PVT__run_latched) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)) 
                                        & (~ (IData)(vlSelfRef.__PVT__start_passthrough_3))));
    vlSelfRef.__PVT__start_passthrough_1 = ((IData)(vlSymsp->TOP.systolic_array_tb__DOT__tb_nRST) 
                                            && ((IData)(vlSelfRef.__PVT__run)
                                                 ? (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start)
                                                 : (IData)(vlSelfRef.__PVT__start_passthrough_1)));
    vlSelfRef.__PVT__start_passthrough_2 = __Vdly__start_passthrough_2;
    vlSelfRef.__PVT__add_exp_max_in = __Vdly__add_exp_max_in;
    vlSelfRef.__PVT__start_passthrough_3 = __Vdly__start_passthrough_3;
    vlSelfRef.__PVT__add2__DOT__frac2_signed = vlSelfRef.__PVT__frac_not_shifted_in;
    if (vlSelfRef.__PVT__add_sign_not_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac2_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.__PVT__add2__DOT__frac1_signed = vlSelfRef.__PVT__frac_shifted_in;
    if (vlSelfRef.__PVT__add_sign_shifted_in) {
        vlSelfRef.__PVT__add2__DOT__frac1_signed = 
            (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__ovf = 0U;
    vlSelfRef.__PVT__add3__DOT__shifted_frac = ((((
                                                   (((((0x800U 
                                                        == 
                                                        (0x1800U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                       | (0x400U 
                                                          == 
                                                          (0x1c00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x1e00U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x100U 
                                                        == 
                                                        (0x1f00U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x80U 
                                                       == 
                                                       (0x1f80U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x40U 
                                                      == 
                                                      (0x1fc0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                  | (0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                 | (0x10U 
                                                    == 
                                                    (0x1ff0U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                 ? 
                                                ((0x800U 
                                                  == 
                                                  (0x1800U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1ffeU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 1U))
                                                  : 
                                                 ((0x400U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 2U))
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x1e00U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1ff8U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 3U))
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x1f00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 
                                                    (0x1ff0U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 4U))
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x1f80U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 
                                                     (0x1fe0U 
                                                      & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                         << 5U))
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x1fc0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 
                                                      (0x1fc0U 
                                                       & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                          << 6U))
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x1fe0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 
                                                       (0x1f80U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 7U))
                                                        : 
                                                       (0x1f00U 
                                                        & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                           << 8U)))))))))
                                                 : 
                                                ((8U 
                                                  == 
                                                  (0x1ff8U 
                                                   & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                  ? 
                                                 (0x1e00U 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     << 9U))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1ffcU 
                                                    & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                   ? 
                                                  (0x1c00U 
                                                   & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                      << 0xaU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1ffeU 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 
                                                   (0x1800U 
                                                    & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                       << 0xbU))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                     ? 
                                                    (0x1000U 
                                                     & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                        << 0xcU))
                                                     : (IData)(vlSelfRef.__PVT__add_sum_in))))));
    if (vlSelfRef.__PVT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.__PVT__add_exp_max_s3_in))) {
            vlSelfRef.__PVT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & ((IData)(vlSelfRef.__PVT__add_sum_in) 
                                                     >> 1U));
    } else {
        vlSelfRef.__PVT__add3__DOT__round_this = (0xfffU 
                                                  & (IData)(vlSelfRef.__PVT__add3__DOT__shifted_frac));
    }
    vlSelfRef.__PVT__add3__DOT__shifted_amount = ((
                                                   (((((((0x800U 
                                                          == 
                                                          (0x1800U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in))) 
                                                         | (0x400U 
                                                            == 
                                                            (0x1c00U 
                                                             & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x1e00U 
                                                            & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x1f00U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x1f80U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x1fc0U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x1fe0U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1ff0U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in))))
                                                   ? 
                                                  ((0x800U 
                                                    == 
                                                    (0x1800U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 1U
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0x1c00U 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 2U
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0x1e00U 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 3U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       (0x1f00U 
                                                        & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                       ? 4U
                                                       : 
                                                      ((0x80U 
                                                        == 
                                                        (0x1f80U 
                                                         & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                        ? 5U
                                                        : 
                                                       ((0x40U 
                                                         == 
                                                         (0x1fc0U 
                                                          & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                         ? 6U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x1fe0U 
                                                           & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                          ? 7U
                                                          : 8U)))))))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1ff8U 
                                                     & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                    ? 9U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1ffcU 
                                                      & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffeU 
                                                       & (IData)(vlSelfRef.__PVT__add_sum_in)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__add_sum_in))
                                                       ? 0xcU
                                                       : 0U)))));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.__PVT__mul_sum_exp = (0x1fU & (((IData)(vlSelfRef.__PVT__mul_exp1_in) 
                                              + ((IData)(vlSelfRef.__PVT__mul_exp2_in) 
                                                 + (IData)(vlSelfRef.__PVT__mul_carryout_in))) 
                                             - (IData)(0xfU)));
    vlSelfRef.__PVT__add2__DOT__sum_signed = (0x3fffU 
                                              & ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                                                 + (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)));
    vlSelfRef.__PVT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x2000U 
                                                  | (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.__PVT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.__PVT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.__PVT__add_carry_out = 1U;
        vlSelfRef.__PVT__add2__DOT__sum_signed = (0x1fffU 
                                                  & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed));
    }
    vlSelfRef.__PVT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__add_carry_in)))) {
        if (((IData)(vlSelfRef.__PVT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.__PVT__add3__DOT__shifted_amount))) {
            vlSelfRef.__PVT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.__PVT__add3__DOT__u_exp1 = vlSelfRef.__PVT__add_exp_max_s3_in;
    vlSelfRef.__PVT__add3__DOT__u_shifted_amount = vlSelfRef.__PVT__add3__DOT__shifted_amount;
    vlSelfRef.__PVT__add3__DOT__u_result = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__add3__DOT__u_exp1) 
                                             - (IData)(vlSelfRef.__PVT__add3__DOT__u_shifted_amount)));
    vlSelfRef.__PVT__mul_result = ((((IData)(vlSelfRef.__PVT__mul_sign1_in) 
                                     ^ (IData)(vlSelfRef.__PVT__mul_sign2_in)) 
                                    << 0xfU) | (((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelfRef.__PVT__mul_carryout_in)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 3U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__mul_product_in) 
                                                       >> 2U)))));
    vlSelfRef.__PVT__add_sign_out = 0U;
    vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.__PVT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed))) {
        vlSelfRef.__PVT__add_sign_out = 1U;
        vlSelfRef.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.__PVT__add2__DOT__sum_signed)));
    }
    vlSelfRef.__PVT__add3__DOT__rounded_fraction = 
        (0xfffU & ((2U & (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__add3__DOT__round_this))
                    : (IData)(vlSelfRef.__PVT__add3__DOT__round_this)));
    vlSelfRef.__PVT__add3__DOT__round_flag = (1U & 
                                              ((IData)(vlSelfRef.__PVT__add3__DOT__round_this) 
                                               >> 1U));
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSelfRef.__PVT__input_x) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(
                                                         vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U]) 
                                                 << 2U)))));
    vlSelfRef.__PVT__add1__DOT__diff = (0x3fU & ((IData)(vlSelfRef.__PVT__mul_sum_exp) 
                                                 - 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [3U] 
                                                     >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__add1__DOT__diff))) {
            vlSelfRef.__PVT__add1__DOT__diff = (0x3fU 
                                                & (- (IData)(vlSelfRef.__PVT__add1__DOT__diff)));
            vlSelfRef.__PVT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.__PVT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___nba_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__run = ((IData)(vlSelfRef.__PVT__run_latched) 
                            | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
    vlSelfRef.__PVT__nxt_input_x = vlSelfRef.__PVT__input_x;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift) {
        vlSelfRef.__PVT__nxt_input_x = vlSymsp->TOP.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
            [3U][3U];
    }
}
