// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC_unit_tb.h for the primary calling header

#ifndef VERILATED_VMAC_UNIT_TB_SYSTOLIC_ARRAY_MAC_IF_H_
#define VERILATED_VMAC_UNIT_TB_SYSTOLIC_ARRAY_MAC_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VMAC_unit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC_unit_tb_systolic_array_MAC_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__start;
    CData/*0:0*/ __PVT__count;
    SData/*15:0*/ weight;
    SData/*15:0*/ in_value;
    SData/*15:0*/ in_accumulate;

    // INTERNAL VARIABLES
    VMAC_unit_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC_unit_tb_systolic_array_MAC_if(VMAC_unit_tb__Syms* symsp, const char* v__name);
    ~VMAC_unit_tb_systolic_array_MAC_if();
    VL_UNCOPYABLE(VMAC_unit_tb_systolic_array_MAC_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const VMAC_unit_tb_systolic_array_MAC_if* obj);

#endif  // guard
