// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"
#include "Vsystolic_array_tb_systolic_array_if.h"

VL_ATTR_COLD void Vsystolic_array_tb_systolic_array_if___ctor_var_reset(Vsystolic_array_tb_systolic_array_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_array_tb_systolic_array_if___ctor_var_reset\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__weight_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__partial_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__drained = VL_RAND_RESET_I(1);
    vlSelf->__PVT__row_in_en = VL_RAND_RESET_I(2);
    vlSelf->__PVT__row_ps_en = VL_RAND_RESET_I(2);
    vlSelf->__PVT__row_out = VL_RAND_RESET_I(2);
    vlSelf->__PVT__array_in = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__array_in_partials = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__array_output = VL_RAND_RESET_Q(64);
}
