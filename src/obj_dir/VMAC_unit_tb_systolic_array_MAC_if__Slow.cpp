// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC_unit_tb.h for the primary calling header

#include "VMAC_unit_tb__pch.h"
#include "VMAC_unit_tb__Syms.h"
#include "VMAC_unit_tb_systolic_array_MAC_if.h"

void VMAC_unit_tb_systolic_array_MAC_if___ctor_var_reset(VMAC_unit_tb_systolic_array_MAC_if* vlSelf);

VMAC_unit_tb_systolic_array_MAC_if::VMAC_unit_tb_systolic_array_MAC_if(VMAC_unit_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMAC_unit_tb_systolic_array_MAC_if___ctor_var_reset(this);
}

void VMAC_unit_tb_systolic_array_MAC_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMAC_unit_tb_systolic_array_MAC_if::~VMAC_unit_tb_systolic_array_MAC_if() {
}
