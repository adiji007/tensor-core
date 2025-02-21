// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_unit_tb.h for the primary calling header

#include "VMAC_unit_tb__pch.h"
#include "VMAC_unit_tb___024root.h"

VlCoroutine VMAC_unit_tb___024root___eval_initial__TOP__Vtiming__0(VMAC_unit_tb___024root* vlSelf);
VlCoroutine VMAC_unit_tb___024root___eval_initial__TOP__Vtiming__1(VMAC_unit_tb___024root* vlSelf);

void VMAC_unit_tb___024root___eval_initial(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_initial\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VMAC_unit_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VMAC_unit_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_unit_tb__DOT__tb_clk__0 
        = vlSelfRef.MAC_unit_tb__DOT__tb_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC_unit_tb__DOT__tb_nrst__0 
        = vlSelfRef.MAC_unit_tb__DOT__tb_nrst;
}

VL_INLINE_OPT VlCoroutine VMAC_unit_tb___024root___eval_initial__TOP__Vtiming__1(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSelfRef.MAC_unit_tb__DOT__tb_clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "testbench/MAC_unit_tb.sv", 
                                             27);
        vlSelfRef.MAC_unit_tb__DOT__tb_clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "testbench/MAC_unit_tb.sv", 
                                             29);
    }
}

void VMAC_unit_tb___024root___act_sequent__TOP__0(VMAC_unit_tb___024root* vlSelf);

void VMAC_unit_tb___024root___eval_act(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_act\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VMAC_unit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VMAC_unit_tb___024root___nba_sequent__TOP__0(VMAC_unit_tb___024root* vlSelf);
void VMAC_unit_tb___024root___nba_sequent__TOP__1(VMAC_unit_tb___024root* vlSelf);
void VMAC_unit_tb___024root___nba_comb__TOP__0(VMAC_unit_tb___024root* vlSelf);

void VMAC_unit_tb___024root___eval_nba(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_nba\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC_unit_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC_unit_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC_unit_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VMAC_unit_tb___024root___timing_resume(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___timing_resume\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VMAC_unit_tb___024root___eval_triggers__act(VMAC_unit_tb___024root* vlSelf);

bool VMAC_unit_tb___024root___eval_phase__act(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_phase__act\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMAC_unit_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VMAC_unit_tb___024root___timing_resume(vlSelf);
        VMAC_unit_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMAC_unit_tb___024root___eval_phase__nba(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_phase__nba\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMAC_unit_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_unit_tb___024root___dump_triggers__nba(VMAC_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC_unit_tb___024root___dump_triggers__act(VMAC_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC_unit_tb___024root___eval(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VMAC_unit_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/MAC_unit_tb.sv", 13, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VMAC_unit_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/MAC_unit_tb.sv", 13, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VMAC_unit_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VMAC_unit_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMAC_unit_tb___024root___eval_debug_assertions(VMAC_unit_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root___eval_debug_assertions\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
