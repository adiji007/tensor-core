// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_unit_tb.h for the primary calling header

#include "VMAC_unit_tb__pch.h"
#include "VMAC_unit_tb___024root.h"

VL_ATTR_COLD void VMAC_unit_tb___024root___eval_static(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_static\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VMAC_unit_tb___024root___eval_final(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_final\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_unit_tb___024root___dump_triggers__stl(VMAC_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMAC_unit_tb___024root___eval_phase__stl(VMAC_unit_tb___024root* vlSelf);

VL_ATTR_COLD void VMAC_unit_tb___024root___eval_settle(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_settle\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VMAC_unit_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/MAC_unit_tb.sv", 13, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMAC_unit_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_unit_tb___024root___dump_triggers__stl(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___dump_triggers__stl\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC_unit_tb___024root___stl_sequent__TOP__0(VMAC_unit_tb___024root* vlSelf);
VL_ATTR_COLD void VMAC_unit_tb___024root____Vm_traceActivitySetAll(VMAC_unit_tb___024root* vlSelf);

VL_ATTR_COLD void VMAC_unit_tb___024root___eval_stl(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_stl\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VMAC_unit_tb___024root___stl_sequent__TOP__0(vlSelf);
        VMAC_unit_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VMAC_unit_tb___024root___eval_triggers__stl(VMAC_unit_tb___024root* vlSelf);

VL_ATTR_COLD bool VMAC_unit_tb___024root___eval_phase__stl(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_phase__stl\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMAC_unit_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VMAC_unit_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_unit_tb___024root___dump_triggers__act(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___dump_triggers__act\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge MAC_unit_tb.tb_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge MAC_unit_tb.tb_nrst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_unit_tb___024root___dump_triggers__nba(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___dump_triggers__nba\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge MAC_unit_tb.tb_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge MAC_unit_tb.tb_nrst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC_unit_tb___024root____Vm_traceActivitySetAll(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root____Vm_traceActivitySetAll\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VMAC_unit_tb___024root___ctor_var_reset(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___ctor_var_reset\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->MAC_unit_tb__DOT__tb_clk = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__tb_nrst = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__run_latched = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__start_passthrough_1 = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__start_passthrough_2 = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__start_passthrough_3 = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__run = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul_sign1_in = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul_sign2_in = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul_carryout_in = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul_exp1_in = VL_RAND_RESET_I(5);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul_exp2_in = VL_RAND_RESET_I(5);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul_product_in = VL_RAND_RESET_I(13);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul_sum_exp = VL_RAND_RESET_I(5);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul_result = VL_RAND_RESET_I(16);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add_sign_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add_sign_not_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__frac_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__frac_not_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add_exp_max_in = VL_RAND_RESET_I(5);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add_sign_out = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add_sign_in = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add_sum_in = VL_RAND_RESET_I(13);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add_carry_out = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add_carry_in = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in = VL_RAND_RESET_I(5);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b = VL_RAND_RESET_I(26);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp1 = VL_RAND_RESET_I(5);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp2 = VL_RAND_RESET_I(5);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_sum = VL_RAND_RESET_I(5);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff = VL_RAND_RESET_I(6);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac1_signed = VL_RAND_RESET_I(14);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac2_signed = VL_RAND_RESET_I(14);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed = VL_RAND_RESET_I(14);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed = VL_RAND_RESET_I(14);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac = VL_RAND_RESET_I(13);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = VL_RAND_RESET_I(5);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out = VL_RAND_RESET_I(5);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf = VL_RAND_RESET_I(1);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this = VL_RAND_RESET_I(12);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_exp1 = VL_RAND_RESET_I(6);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_shifted_amount = VL_RAND_RESET_I(6);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_result = VL_RAND_RESET_I(6);
    vlSelf->MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__MAC_unit_tb__DOT__tb_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__MAC_unit_tb__DOT__tb_nrst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
