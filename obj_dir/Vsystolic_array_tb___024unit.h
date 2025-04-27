// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_array_tb.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_ARRAY_TB___024UNIT_H_
#define VERILATED_VSYSTOLIC_ARRAY_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsystolic_array_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_array_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsystolic_array_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_array_tb___024unit(Vsystolic_array_tb__Syms* symsp, const char* v__name);
    ~Vsystolic_array_tb___024unit();
    VL_UNCOPYABLE(Vsystolic_array_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
