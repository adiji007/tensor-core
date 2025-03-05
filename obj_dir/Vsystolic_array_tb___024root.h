// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_array_tb.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_ARRAY_TB___024ROOT_H_
#define VERILATED_VSYSTOLIC_ARRAY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsystolic_array_tb_systolic_array_tb;


class Vsystolic_array_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_array_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vsystolic_array_tb_systolic_array_tb* systolic_array_tb;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__systolic_array_tb____PVT__tb_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__systolic_array_tb____PVT__tb_nRST__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbea8d0df__0;
    VlTriggerScheduler __VtrigSched_hbea8d09e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsystolic_array_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_array_tb___024root(Vsystolic_array_tb__Syms* symsp, const char* v__name);
    ~Vsystolic_array_tb___024root();
    VL_UNCOPYABLE(Vsystolic_array_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
