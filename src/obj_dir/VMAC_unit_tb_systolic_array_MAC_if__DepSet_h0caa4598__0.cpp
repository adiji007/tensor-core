// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_unit_tb.h for the primary calling header

#include "VMAC_unit_tb__pch.h"
#include "VMAC_unit_tb_systolic_array_MAC_if.h"

std::string VL_TO_STRING(const VMAC_unit_tb_systolic_array_MAC_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VMAC_unit_tb_systolic_array_MAC_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
