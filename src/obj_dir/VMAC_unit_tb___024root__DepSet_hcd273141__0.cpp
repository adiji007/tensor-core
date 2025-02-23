// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_unit_tb.h for the primary calling header

#include "VMAC_unit_tb__pch.h"
#include "VMAC_unit_tb__Syms.h"
#include "VMAC_unit_tb___024root.h"

VL_INLINE_OPT VlCoroutine VMAC_unit_tb___024root___eval_initial__TOP__Vtiming__0(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x61766573U;
    __Vtemp_1[2U] = 0x77U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.MAC_unit_tb__DOT__tb_nrst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "testbench/MAC_unit_tb.sv", 
                                         43);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.MAC_unit_tb__DOT__tb_nrst = 1U;
    co_await vlSelfRef.__VtrigSched_h32c40dbe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MAC_unit_tb.tb_clk)", 
                                                         "testbench/MAC_unit_tb.sv", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start = 0U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value = 0x4b80U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight = 0x4000U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate = 0x4500U;
    co_await vlSelfRef.__VtrigSched_h32c40dbe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MAC_unit_tb.tb_clk)", 
                                                         "testbench/MAC_unit_tb.sv", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "testbench/MAC_unit_tb.sv", 
                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "testbench/MAC_unit_tb.sv", 
                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "testbench/MAC_unit_tb.sv", 
                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value = 0x439aU;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight = 0x5c96U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate = 0x58c3U;
    co_await vlSelfRef.__VtrigSched_h32c40dbe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MAC_unit_tb.tb_clk)", 
                                                         "testbench/MAC_unit_tb.sv", 
                                                         64);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "testbench/MAC_unit_tb.sv", 
                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value = 0x439aU;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight = 0x5c96U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate = 0x58c3U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "testbench/MAC_unit_tb.sv", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1770ULL, 
                                         nullptr, "testbench/MAC_unit_tb.sv", 
                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("testbench/MAC_unit_tb.sv", 77, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_unit_tb___024root___dump_triggers__act(VMAC_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC_unit_tb___024root___eval_triggers__act(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_triggers__act\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC_unit_tb__DOT__tb_clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC_unit_tb__DOT__tb_nrst__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_unit_tb__DOT__tb_clk__0 
        = vlSelfRef.MAC_unit_tb__DOT__tb_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_unit_tb__DOT__tb_nrst__0 
        = vlSelfRef.MAC_unit_tb__DOT__tb_nrst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC_unit_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VMAC_unit_tb___024root___act_comb__TOP__0(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___act_comb__TOP__0\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run = ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run_latched) 
                                                 | (IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight) 
                                                 << 2U)))));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff 
        = (0x3fU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sum_exp) 
                    - (0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff 
                = (0x3fU & (- (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff)));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out = 0U;
    }
}

VL_INLINE_OPT void VMAC_unit_tb___024root___nba_sequent__TOP__0(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___nba_sequent__TOP__0\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__MAC_unit_tb__DOT__dut__DOT__start_passthrough_1;
    __Vdly__MAC_unit_tb__DOT__dut__DOT__start_passthrough_1 = 0;
    CData/*4:0*/ __Vdly__MAC_unit_tb__DOT__dut__DOT__add_exp_max_in;
    __Vdly__MAC_unit_tb__DOT__dut__DOT__add_exp_max_in = 0;
    CData/*0:0*/ __Vdly__MAC_unit_tb__DOT__dut__DOT__start_passthrough_2;
    __Vdly__MAC_unit_tb__DOT__dut__DOT__start_passthrough_2 = 0;
    // Body
    __Vdly__MAC_unit_tb__DOT__dut__DOT__start_passthrough_1 
        = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_1;
    __Vdly__MAC_unit_tb__DOT__dut__DOT__start_passthrough_2 
        = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_2;
    __Vdly__MAC_unit_tb__DOT__dut__DOT__add_exp_max_in 
        = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_in;
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run_latched 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run_latched) 
                | (IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start)) 
               & (~ (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_3))));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_in 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run)
                ? (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_out)
                : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_in)));
    __Vdly__MAC_unit_tb__DOT__dut__DOT__start_passthrough_1 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run)
                ? (IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start)
                : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_1)));
    __Vdly__MAC_unit_tb__DOT__dut__DOT__start_passthrough_2 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run)
                ? (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_1)
                : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_2)));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_3 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run)
                ? (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_2)
                : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_3)));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign1_in 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && (1U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run)
                      ? ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value) 
                         >> 0xfU) : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign1_in))));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign2_in 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && (1U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run)
                      ? ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight) 
                         >> 0xfU) : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign2_in))));
    if (vlSelfRef.MAC_unit_tb__DOT__tb_nrst) {
        if (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in 
                = (0x1fffU & (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b 
                              >> 0xcU));
            if (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out) {
                __Vdly__MAC_unit_tb__DOT__dut__DOT__add_exp_max_in 
                    = (0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                >> 0xaU));
                vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                            << 2U)));
                vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_shifted_in 
                    = (0x1fffU & ((0x1000U | (0xffcU 
                                              & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                                 << 2U))) 
                                  >> (0x1fU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff))));
            } else {
                __Vdly__MAC_unit_tb__DOT__dut__DOT__add_exp_max_in 
                    = (0x1fU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                >> 0xaU));
                vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_not_shifted_in 
                    = (0x1000U | (0xffcU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                            << 2U)));
                vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_shifted_in 
                    = (0x1fffU & ((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                                 << 2U))) 
                                  >> (0x1fU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff))));
            }
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp1_in 
                = (0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value) 
                            >> 0xaU));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp2_in 
                = (0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight) 
                            >> 0xaU));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in 
                = ((0U == (0x1fffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                    ? 0U : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_in));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in 
                = (0x1fffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed));
        } else {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in 
                = (0x1fffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in));
            __Vdly__MAC_unit_tb__DOT__dut__DOT__add_exp_max_in 
                = (0x1fU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_in));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp1_in 
                = (0x1fU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp1_in));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp2_in 
                = (0x1fU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp2_in));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_not_shifted_in 
                = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_not_shifted_in;
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in 
                = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in;
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_shifted_in 
                = (0x1fffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_shifted_in));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in 
                = (0x1fffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in));
        }
    } else {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in = 0U;
        __Vdly__MAC_unit_tb__DOT__dut__DOT__add_exp_max_in = 0U;
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp1_in = 0U;
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp2_in = 0U;
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_not_shifted_in = 0U;
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in = 0U;
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_shifted_in = 0U;
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in = 0U;
    }
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_in 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run)
                ? (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_out)
                : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_in)));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_carryout_in 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && (1U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run)
                      ? (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b 
                         >> 0x19U) : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_carryout_in))));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_shifted_in 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && (1U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run)
                      ? ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                          ? ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                             >> 0xfU) : ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                         >> 0xfU)) : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_shifted_in))));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_not_shifted_in 
        = ((IData)(vlSelfRef.MAC_unit_tb__DOT__tb_nrst) 
           && (1U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run)
                      ? ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                          ? ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                             >> 0xfU) : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                         >> 0xfU)) : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_not_shifted_in))));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_1 
        = __Vdly__MAC_unit_tb__DOT__dut__DOT__start_passthrough_1;
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_2 
        = __Vdly__MAC_unit_tb__DOT__dut__DOT__start_passthrough_2;
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_in 
        = __Vdly__MAC_unit_tb__DOT__dut__DOT__add_exp_max_in;
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp1 
        = (0x1fU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp1_in) 
                    - (IData)(0x10U)));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp2 
        = (0x1fU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp2_in) 
                    - (IData)(0x10U)));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_sum 
        = (0x1fU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                    + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp2)));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sum_exp 
        = (0x1fU & (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp1_in) 
                     + ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp2_in) 
                        + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_carryout_in))) 
                    - (IData)(0xfU)));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac2_signed 
        = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_not_shifted_in;
    if (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_not_shifted_in) {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac2_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf = 0U;
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac1_signed 
        = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_shifted_in;
    if (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_shifted_in) {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac1_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac1_signed)));
    }
    if (((((((((0x800U == (0x1800U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in))) 
               | (0x400U == (0x1c00U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) 
              | (0x200U == (0x1e00U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) 
             | (0x100U == (0x1f00U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) 
            | (0x80U == (0x1f80U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) 
           | (0x40U == (0x1fc0U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) 
          | (0x20U == (0x1fe0U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) 
         | (0x10U == (0x1ff0U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in))))) {
        if ((0x800U == (0x1800U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
                = (0x1ffeU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                              << 1U));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 1U;
        } else if ((0x400U == (0x1c00U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
                = (0x1ffcU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                              << 2U));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 2U;
        } else if ((0x200U == (0x1e00U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
                = (0x1ff8U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                              << 3U));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 3U;
        } else if ((0x100U == (0x1f00U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
                = (0x1ff0U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                              << 4U));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 4U;
        } else if ((0x80U == (0x1f80U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
                = (0x1fe0U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                              << 5U));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 5U;
        } else if ((0x40U == (0x1fc0U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
                = (0x1fc0U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                              << 6U));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 6U;
        } else if ((0x20U == (0x1fe0U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
                = (0x1f80U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                              << 7U));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 7U;
        } else {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
                = (0x1f00U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                              << 8U));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 8U;
        }
    } else if ((8U == (0x1ff8U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
            = (0x1e00U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                          << 9U));
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 9U;
    } else if ((4U == (0x1ffcU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
            = (0x1c00U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                          << 0xaU));
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 0xaU;
    } else if ((2U == (0x1ffeU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in)))) {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
            = (0x1800U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                          << 0xbU));
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 0xbU;
    } else if ((1U == (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in))) {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
            = (0x1000U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                          << 0xcU));
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 0xcU;
    } else {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac 
            = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in;
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount = 0U;
    }
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result 
        = ((((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign1_in) 
             ^ (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign2_in)) 
            << 0xfU) | (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sum_exp) 
                         << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_carryout_in)
                                                ? ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in) 
                                                   >> 3U)
                                                : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in) 
                                                   >> 2U)))));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed 
        = (0x3fffU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac1_signed) 
                      + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac2_signed)));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_out = 1U;
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed 
            = (0x2000U | (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_out = 1U;
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed 
            = (0x1fffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed));
    }
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_in)))) {
        if (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_exp1 
        = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in;
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_shifted_amount 
        = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount;
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_result 
        = (0x3fU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_exp1) 
                    - (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_shifted_amount)));
    if (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this 
            = (0xfffU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in) 
                         >> 1U));
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in)));
    } else {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this 
            = (0xfffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac));
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out 
            = (0x1fU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_result));
    }
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_out = 0U;
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed))) {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_out = 1U;
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed)));
    }
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount = 0U;
    if ((0x3ffU != (0x3ffU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this) 
                              >> 2U)))) {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount = 0U;
    }
}

VL_INLINE_OPT void VMAC_unit_tb___024root___nba_comb__TOP__0(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___nba_comb__TOP__0\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b 
        = (0x3ffffffU & ((0x1000U | (0xffcU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value) 
                                               << 2U))) 
                         * (0x1000U | (0xffcU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight) 
                                                 << 2U)))));
}

VL_INLINE_OPT void VMAC_unit_tb___024root___nba_comb__TOP__1(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___nba_comb__TOP__1\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run = ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run_latched) 
                                                 | (IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start));
    vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff 
        = (0x3fU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sum_exp) 
                    - (0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff))) {
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff 
                = (0x3fU & (- (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff)));
            vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out = 0U;
    }
}
