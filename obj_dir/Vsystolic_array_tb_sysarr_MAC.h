// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_array_tb.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_ARRAY_TB_SYSARR_MAC_H_
#define VERILATED_VSYSTOLIC_ARRAY_TB_SYSARR_MAC_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsystolic_array_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_array_tb_sysarr_MAC final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(nRST,0,0);
    CData/*0:0*/ __PVT__run_latched;
    CData/*0:0*/ __PVT__start_passthrough_1;
    CData/*0:0*/ __PVT__start_passthrough_2;
    CData/*0:0*/ __PVT__start_passthrough_3;
    CData/*0:0*/ __PVT__run;
    CData/*0:0*/ __PVT__mul_sign1_in;
    CData/*0:0*/ __PVT__mul_sign2_in;
    CData/*0:0*/ __PVT__mul_carryout_in;
    CData/*4:0*/ __PVT__mul_exp1_in;
    CData/*4:0*/ __PVT__mul_exp2_in;
    CData/*4:0*/ __PVT__mul_sum_exp;
    CData/*4:0*/ __PVT__mul_final_exp;
    CData/*0:0*/ __PVT__add_sign_shifted_in;
    CData/*0:0*/ __PVT__add_sign_not_shifted_in;
    CData/*4:0*/ __PVT__add_exp_max_in;
    CData/*0:0*/ __PVT__add_sign_out;
    CData/*0:0*/ __PVT__add_sign_in;
    CData/*0:0*/ __PVT__add_carry_out;
    CData/*0:0*/ __PVT__add_carry_in;
    CData/*4:0*/ __PVT__add_exp_max_s3_in;
    CData/*4:0*/ __PVT__mul2__DOT__add_EXPs__DOT__r_exp1;
    CData/*4:0*/ __PVT__mul2__DOT__add_EXPs__DOT__r_exp2;
    CData/*4:0*/ __PVT__mul2__DOT__add_EXPs__DOT__r_sum;
    CData/*0:0*/ __PVT__add1__DOT__cmp_out;
    CData/*5:0*/ __PVT__add1__DOT__diff;
    CData/*4:0*/ __PVT__add3__DOT__shifted_amount;
    CData/*0:0*/ __PVT__add3__DOT__ovf;
    CData/*0:0*/ __PVT__add3__DOT__unf;
    CData/*5:0*/ __PVT__add3__DOT__u_exp1;
    CData/*5:0*/ __PVT__add3__DOT__u_shifted_amount;
    CData/*5:0*/ __PVT__add3__DOT__u_result;
    CData/*0:0*/ __PVT__add3__DOT__round_flag;
    SData/*15:0*/ __PVT__input_x;
    SData/*15:0*/ __PVT__nxt_input_x;
    SData/*12:0*/ __PVT__mul_product_in;
    SData/*15:0*/ __PVT__mul_result;
    SData/*9:0*/ __PVT__mul_significand_product_selected;
    SData/*12:0*/ __PVT__frac_shifted_in;
    SData/*12:0*/ __PVT__frac_not_shifted_in;
    SData/*12:0*/ __PVT__add_sum_in;
    SData/*13:0*/ __PVT__add2__DOT__frac1_signed;
    SData/*13:0*/ __PVT__add2__DOT__frac2_signed;
    SData/*13:0*/ __PVT__add2__DOT__sum_signed;
    SData/*13:0*/ __PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed;
    SData/*12:0*/ __PVT__add3__DOT__shifted_frac;
    SData/*11:0*/ __PVT__add3__DOT__round_this;
    SData/*11:0*/ __PVT__add3__DOT__rounded_fraction;
    IData/*25:0*/ __PVT__mul1__DOT__MUL__DOT__frac_out_26b;

    // INTERNAL VARIABLES
    Vsystolic_array_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_array_tb_sysarr_MAC(Vsystolic_array_tb__Syms* symsp, const char* v__name);
    ~Vsystolic_array_tb_sysarr_MAC();
    VL_UNCOPYABLE(Vsystolic_array_tb_sysarr_MAC);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
