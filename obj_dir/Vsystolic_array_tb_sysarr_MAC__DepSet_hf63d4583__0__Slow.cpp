// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"
#include "Vsystolic_array_tb_sysarr_MAC.h"

VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___ctor_var_reset(Vsystolic_array_tb_sysarr_MAC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_sysarr_MAC___ctor_var_reset\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->nRST = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_x = VL_RAND_RESET_I(16);
    vlSelf->__PVT__nxt_input_x = VL_RAND_RESET_I(16);
    vlSelf->__PVT__run_latched = VL_RAND_RESET_I(1);
    vlSelf->__PVT__start_passthrough_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__start_passthrough_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__start_passthrough_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__run = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_sign1_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_sign2_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_carryout_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_exp1_in = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mul_exp2_in = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mul_product_in = VL_RAND_RESET_I(13);
    vlSelf->__PVT__mul_sum_exp = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mul_result = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mul_significand_product_selected = VL_RAND_RESET_I(10);
    vlSelf->__PVT__mul_final_exp = VL_RAND_RESET_I(5);
    vlSelf->__PVT__add_sign_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_sign_not_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__frac_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->__PVT__frac_not_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->__PVT__add_exp_max_in = VL_RAND_RESET_I(5);
    vlSelf->__PVT__add_sign_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_sign_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_sum_in = VL_RAND_RESET_I(13);
    vlSelf->__PVT__add_carry_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_carry_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_exp_max_s3_in = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mul1__DOT__MUL__DOT__frac_out_26b = VL_RAND_RESET_I(26);
    vlSelf->__PVT__mul2__DOT__add_EXPs__DOT__r_exp1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mul2__DOT__add_EXPs__DOT__r_exp2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mul2__DOT__add_EXPs__DOT__r_sum = VL_RAND_RESET_I(5);
    vlSelf->__PVT__add1__DOT__cmp_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add1__DOT__diff = VL_RAND_RESET_I(6);
    vlSelf->__PVT__add2__DOT__frac1_signed = VL_RAND_RESET_I(14);
    vlSelf->__PVT__add2__DOT__frac2_signed = VL_RAND_RESET_I(14);
    vlSelf->__PVT__add2__DOT__sum_signed = VL_RAND_RESET_I(14);
    vlSelf->__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed = VL_RAND_RESET_I(14);
    vlSelf->__PVT__add3__DOT__shifted_frac = VL_RAND_RESET_I(13);
    vlSelf->__PVT__add3__DOT__shifted_amount = VL_RAND_RESET_I(5);
    vlSelf->__PVT__add3__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add3__DOT__unf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add3__DOT__u_exp1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__add3__DOT__u_shifted_amount = VL_RAND_RESET_I(6);
    vlSelf->__PVT__add3__DOT__u_result = VL_RAND_RESET_I(6);
    vlSelf->__PVT__add3__DOT__round_this = VL_RAND_RESET_I(12);
    vlSelf->__PVT__add3__DOT__round_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add3__DOT__rounded_fraction = VL_RAND_RESET_I(12);
}
