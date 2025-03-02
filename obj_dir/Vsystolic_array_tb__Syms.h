// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSYSTOLIC_ARRAY_TB__SYMS_H_
#define VERILATED_VSYSTOLIC_ARRAY_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_fst_c.h"

// INCLUDE MODEL CLASS

#include "Vsystolic_array_tb.h"

// INCLUDE MODULE CLASSES
#include "Vsystolic_array_tb___024root.h"
#include "Vsystolic_array_tb_systolic_array_if.h"
#include "Vsystolic_array_tb_sysarr_MAC.h"
#include "Vsystolic_array_tb_systolic_array_control_unit_if.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsystolic_array_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsystolic_array_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedFstC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsystolic_array_tb___024root   TOP;
    Vsystolic_array_tb_systolic_array_control_unit_if TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst;
    Vsystolic_array_tb_sysarr_MAC  TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst;
    Vsystolic_array_tb_systolic_array_if TOP__systolic_array_tb__DOT__memory_if;

    // CONSTRUCTORS
    Vsystolic_array_tb__Syms(VerilatedContext* contextp, const char* namep, Vsystolic_array_tb* modelp);
    ~Vsystolic_array_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
