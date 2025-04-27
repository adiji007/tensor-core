// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"
#include "Vsystolic_array_tb___024root.h"

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_static__TOP(Vsystolic_array_tb___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_static(Vsystolic_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_array_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_static__TOP(Vsystolic_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_array_tb__DOT__tb_clk = 0U;
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_final(Vsystolic_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array_tb___024root___dump_triggers__stl(Vsystolic_array_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsystolic_array_tb___024root___eval_phase__stl(Vsystolic_array_tb___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_settle(Vsystolic_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsystolic_array_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/testbench/systolic_array_tb.sv", 14, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsystolic_array_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array_tb___024root___dump_triggers__stl(Vsystolic_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_triggers__stl(Vsystolic_array_tb___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_stl(Vsystolic_array_tb___024root* vlSelf);

VL_ATTR_COLD bool Vsystolic_array_tb___024root___eval_phase__stl(Vsystolic_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsystolic_array_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsystolic_array_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array_tb___024root___dump_triggers__act(Vsystolic_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge systolic_array_tb.tb_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge systolic_array_tb.tb_nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge systolic_array_tb.tb_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array_tb___024root___dump_triggers__nba(Vsystolic_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge systolic_array_tb.tb_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge systolic_array_tb.tb_nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge systolic_array_tb.tb_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_array_tb___024root____Vm_traceActivitySetAll(Vsystolic_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___ctor_var_reset(Vsystolic_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->systolic_array_tb__DOT__tb_nRST = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__tb_clk = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__out_file = 0;
    vlSelf->systolic_array_tb__DOT__file = 0;
    vlSelf->systolic_array_tb__DOT__k = 0;
    vlSelf->systolic_array_tb__DOT__i = 0;
    vlSelf->systolic_array_tb__DOT__j = 0;
    vlSelf->systolic_array_tb__DOT__z = 0;
    vlSelf->systolic_array_tb__DOT__y = 0;
    vlSelf->systolic_array_tb__DOT__r = 0;
    vlSelf->systolic_array_tb__DOT__in = 0;
    vlSelf->systolic_array_tb__DOT__which = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->systolic_array_tb__DOT__temp_weights[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->systolic_array_tb__DOT__temp_inputs[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->systolic_array_tb__DOT__temp_partials[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->systolic_array_tb__DOT__temp_outputs[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array_tb__DOT__m_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array_tb__DOT__m_inputs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array_tb__DOT__m_partials[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array_tb__DOT__m_outputs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->systolic_array_tb__DOT__loaded_weights = 0;
    vlSelf->systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations = 0;
    vlSelf->systolic_array_tb__DOT__DUT__DOT__top_input = VL_RAND_RESET_Q(64);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__weights_input = VL_RAND_RESET_Q(64);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__loadi = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__loadw = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__loadps = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->systolic_array_tb__DOT__DUT__DOT__MAC_inputs[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->systolic_array_tb__DOT__DUT__DOT__MAC_outputs[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array_tb__DOT__DUT__DOT__weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->systolic_array_tb__DOT__DUT__DOT__z = VL_RAND_RESET_I(32);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__row_out = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(256, vlSelf->systolic_array_tb__DOT__DUT__DOT__current_out);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__start_flag = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full = VL_RAND_RESET_I(3);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full = VL_RAND_RESET_I(3);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_loading = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_input_row = VL_RAND_RESET_I(2);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_loading = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_partial_row = VL_RAND_RESET_I(2);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__output_loading = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__in_data_loaded = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ps_data_loaded = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_in_data_loaded = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_fully_loaded = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_fully_loaded = VL_RAND_RESET_I(2);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_input_fully_loaded = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded = VL_RAND_RESET_I(2);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__MAC_done = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_done = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l = VL_RAND_RESET_I(32);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m = VL_RAND_RESET_I(32);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n = VL_RAND_RESET_I(32);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT____Vlvbound_hd9ef4104__0 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT____Vlvbound_haaf93ebe__0 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem);
    VL_RAND_RESET_W(128, vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt = VL_RAND_RESET_I(4);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run_latched = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_1 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_2 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_not_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_exp1 = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this = VL_RAND_RESET_I(12);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction = VL_RAND_RESET_I(12);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0 = VL_RAND_RESET_I(15);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run_latched = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_1 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_2 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_not_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_exp1 = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this = VL_RAND_RESET_I(12);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction = VL_RAND_RESET_I(12);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0 = VL_RAND_RESET_I(15);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run_latched = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_1 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_2 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_not_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_exp1 = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this = VL_RAND_RESET_I(12);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction = VL_RAND_RESET_I(12);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0 = VL_RAND_RESET_I(15);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run_latched = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_1 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_2 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_not_shifted_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed = VL_RAND_RESET_I(14);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac = VL_RAND_RESET_I(13);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount = VL_RAND_RESET_I(5);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_exp1 = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result = VL_RAND_RESET_I(6);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this = VL_RAND_RESET_I(12);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction = VL_RAND_RESET_I(12);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0 = VL_RAND_RESET_I(15);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem = VL_RAND_RESET_Q(64);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem_next = VL_RAND_RESET_Q(64);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem = VL_RAND_RESET_Q(64);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem_next = VL_RAND_RESET_Q(64);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem = VL_RAND_RESET_Q(64);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem_next = VL_RAND_RESET_Q(64);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem = VL_RAND_RESET_Q(64);
    vlSelf->systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem_next = VL_RAND_RESET_Q(64);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v0 = 0;
    vlSelf->__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v1 = 0;
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v2 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v2 = 0;
    vlSelf->__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v3 = 0;
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v4 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v4 = 0;
    vlSelf->__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v5 = 0;
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__weights__v6 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v6 = 0;
    vlSelf->__VdlySet__systolic_array_tb__DOT__DUT__DOT__weights__v7 = 0;
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v0 = 0;
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__systolic_array_tb__DOT__DUT__DOT__MAC_outputs__v16 = 0;
    vlSelf->__Vtrigprevexpr___TOP__systolic_array_tb__DOT__tb_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__systolic_array_tb__DOT__tb_nRST__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
