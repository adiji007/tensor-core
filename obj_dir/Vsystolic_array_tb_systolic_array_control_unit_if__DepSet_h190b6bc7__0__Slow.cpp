// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"
#include "Vsystolic_array_tb_systolic_array_control_unit_if.h"

VL_ATTR_COLD void Vsystolic_array_tb_systolic_array_control_unit_if___ctor_var_reset(Vsystolic_array_tb_systolic_array_control_unit_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_array_tb_systolic_array_control_unit_if___ctor_var_reset\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__input_type = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__weight_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__partials_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MAC_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__in_fifo_shift = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ps_fifo_shift = VL_RAND_RESET_I(4);
    vlSelf->__PVT__MAC_shift = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_fifo_shift = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_row = VL_RAND_RESET_I(2);
    vlSelf->__PVT__weight_row = VL_RAND_RESET_I(2);
    vlSelf->__PVT__partials_row = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__iteration[__Vi0] = VL_RAND_RESET_I(4);
    }
}
