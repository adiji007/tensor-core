// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_array_tb.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_ARRAY_TB_SYSTOLIC_ARRAY_CONTROL_UNIT_IF_H_
#define VERILATED_VSYSTOLIC_ARRAY_TB_SYSTOLIC_ARRAY_CONTROL_UNIT_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsystolic_array_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_array_tb_systolic_array_control_unit_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__input_type;
    CData/*0:0*/ __PVT__input_load;
    CData/*0:0*/ __PVT__weight_load;
    CData/*0:0*/ __PVT__partials_load;
    CData/*0:0*/ __PVT__MAC_start;
    CData/*0:0*/ __PVT__add_start;
    CData/*3:0*/ __PVT__in_fifo_shift;
    CData/*3:0*/ __PVT__ps_fifo_shift;
    CData/*0:0*/ __PVT__MAC_shift;
    CData/*0:0*/ __PVT__out_fifo_shift;
    CData/*1:0*/ __PVT__input_row;
    CData/*1:0*/ __PVT__weight_row;
    CData/*1:0*/ __PVT__partials_row;
    VlUnpacked<CData/*3:0*/, 3> __PVT__iteration;

    // INTERNAL VARIABLES
    Vsystolic_array_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_array_tb_systolic_array_control_unit_if(Vsystolic_array_tb__Syms* symsp, const char* v__name);
    ~Vsystolic_array_tb_systolic_array_control_unit_if();
    VL_UNCOPYABLE(Vsystolic_array_tb_systolic_array_control_unit_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsystolic_array_tb_systolic_array_control_unit_if* obj);

#endif  // guard
