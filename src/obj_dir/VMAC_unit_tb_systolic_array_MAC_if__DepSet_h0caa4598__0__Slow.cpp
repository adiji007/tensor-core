// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_unit_tb.h for the primary calling header

#include "VMAC_unit_tb__pch.h"
#include "VMAC_unit_tb_systolic_array_MAC_if.h"

VL_ATTR_COLD void VMAC_unit_tb_systolic_array_MAC_if___ctor_var_reset(VMAC_unit_tb_systolic_array_MAC_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMAC_unit_tb_systolic_array_MAC_if___ctor_var_reset\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count = VL_RAND_RESET_I(1);
    vlSelf->weight = VL_RAND_RESET_I(16);
    vlSelf->in_value = VL_RAND_RESET_I(16);
    vlSelf->in_accumulate = VL_RAND_RESET_I(16);
}
