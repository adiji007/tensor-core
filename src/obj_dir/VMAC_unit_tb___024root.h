// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC_unit_tb.h for the primary calling header

#ifndef VERILATED_VMAC_UNIT_TB___024ROOT_H_
#define VERILATED_VMAC_UNIT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VMAC_unit_tb_systolic_array_MAC_if;


class VMAC_unit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC_unit_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    VMAC_unit_tb_systolic_array_MAC_if* __PVT__MAC_unit_tb__DOT__mac_if;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ MAC_unit_tb__DOT__tb_clk;
    CData/*0:0*/ MAC_unit_tb__DOT__tb_nrst;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__mul_sign1_in;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__mul_sign2_in;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__mul_carryout_in;
    CData/*4:0*/ MAC_unit_tb__DOT__dut__DOT__mul_exp1_in;
    CData/*4:0*/ MAC_unit_tb__DOT__dut__DOT__mul_exp2_in;
    CData/*4:0*/ MAC_unit_tb__DOT__dut__DOT__mul_sum_exp;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__add_sign_shifted_in;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__add_sign_not_shifted_in;
    CData/*4:0*/ MAC_unit_tb__DOT__dut__DOT__add_exp_max_in;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__add_sign_out;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__add_sign_in;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__add_carry_out;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__add_carry_in;
    CData/*4:0*/ MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in;
    CData/*4:0*/ MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp1;
    CData/*4:0*/ MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp2;
    CData/*4:0*/ MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_sum;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out;
    CData/*5:0*/ MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff;
    CData/*4:0*/ MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount;
    CData/*4:0*/ MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf;
    CData/*5:0*/ MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_exp1;
    CData/*5:0*/ MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_shifted_amount;
    CData/*5:0*/ MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_result;
    CData/*0:0*/ MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__MAC_unit_tb__DOT__tb_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__MAC_unit_tb__DOT__tb_nrst__0;
    CData/*0:0*/ __VactContinue;
    SData/*12:0*/ MAC_unit_tb__DOT__dut__DOT__mul_product_in;
    SData/*15:0*/ MAC_unit_tb__DOT__dut__DOT__mul_result;
    SData/*12:0*/ MAC_unit_tb__DOT__dut__DOT__frac_shifted_in;
    SData/*12:0*/ MAC_unit_tb__DOT__dut__DOT__frac_not_shifted_in;
    SData/*12:0*/ MAC_unit_tb__DOT__dut__DOT__add_sum_in;
    SData/*13:0*/ MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac1_signed;
    SData/*13:0*/ MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac2_signed;
    SData/*13:0*/ MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed;
    SData/*13:0*/ MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed;
    SData/*12:0*/ MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac;
    SData/*11:0*/ MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this;
    IData/*25:0*/ MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMAC_unit_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC_unit_tb___024root(VMAC_unit_tb__Syms* symsp, const char* v__name);
    ~VMAC_unit_tb___024root();
    VL_UNCOPYABLE(VMAC_unit_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
