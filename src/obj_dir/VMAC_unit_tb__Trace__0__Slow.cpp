// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMAC_unit_tb__Syms.h"


VL_ATTR_COLD void VMAC_unit_tb___024root__trace_init_sub__TOP__MAC_unit_tb__DOT__mac_if__0(VMAC_unit_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_init_sub__TOP__0(VMAC_unit_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_init_sub__TOP__0\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("MAC_unit_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+82,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"tb_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"tb_nrst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mac_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    VMAC_unit_tb___024root__trace_init_sub__TOP__MAC_unit_tb__DOT__mac_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mac_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    VMAC_unit_tb___024root__trace_init_sub__TOP__MAC_unit_tb__DOT__mac_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+14,0,"run_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"start_passthrough_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"start_passthrough_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"start_passthrough_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"run",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"mul_sign1_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"mul_sign2_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"mul_carryout_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"mul_sign1_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"mul_sign2_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"mul_carryout_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"mul_exp1_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"mul_exp2_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"mul_exp1_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"mul_exp2_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"mul_product_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+23,0,"mul_product_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+24,0,"mul_sign_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"mul_sum_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+26,0,"mul_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"mul_unf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"mul_significand_product_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+30,0,"add_sign_shifted_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"add_sign_not_shifted_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"add_sign_shifted_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"add_sign_not_shifted_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"frac_shifted_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+76,0,"frac_not_shifted_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+32,0,"frac_shifted_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+33,0,"frac_not_shifted_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+77,0,"add_exp_max_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"add_exp_max_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"add_sign_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"add_sign_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"add_sum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+38,0,"add_sum_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+39,0,"add_carry_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"add_carry_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"add_exp_max_s2_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"add_exp_max_s3_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"accumulate_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"add_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"floating_point1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"floating_point2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+73,0,"sign_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"frac_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+74,0,"sign_not_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"frac_not_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+77,0,"exp_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"unsigned_exp_diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+79,0,"cmp_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cmp_exponents", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"exp1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"exp2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"u_diff",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+79,0,"cmp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"u_exp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,0,"u_exp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+80,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+32,0,"frac1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+30,0,"sign1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"frac2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+31,0,"sign2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"exp_max_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"sign_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+39,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"exp_max_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"frac1_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+47,0,"frac2_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+48,0,"sum_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->pushPrefix("add_signed_fracs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"frac1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+47,0,"frac2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+48,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+39,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("change_to_signed1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+30,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"frac_unsigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+46,0,"frac_signed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->popPrefix();
    tracep->pushPrefix("change_to_signed2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"frac_unsigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+47,0,"frac_signed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->popPrefix();
    tracep->pushPrefix("change_to_unsigned", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"frac_signed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+35,0,"sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"frac_unsigned",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+49,0,"rfrac_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+83,0,"ovf_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"unf_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"dz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"inv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"frm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"exponent_max_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"sign_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"frac_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+40,0,"carry_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"floating_point_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+50,0,"inexact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"frac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+53,0,"exp_minus_shift_amount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"shifted_frac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+55,0,"shifted_amount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"exp_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+57,0,"ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"unf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"round_this",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+60,0,"round_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+61,0,"round_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ROUND", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"frm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+36,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"exp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"fraction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+60,0,"round_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+61,0,"rounded",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"round_amount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"RNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+84,0,"RZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+86,0,"RDN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+87,0,"RUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+88,0,"RMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("SUB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"exp1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"shifted_amount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"u_exp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+63,0,"u_shifted_amount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+64,0,"u_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("shift_left", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"fraction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+54,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+55,0,"shifted_amount",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mul1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"fp1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"fp2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2,0,"sign1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"sign2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"exp1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"exp2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+71,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("MUL", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"frac_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+12,0,"frac_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+72,0,"frac_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+71,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"frac_out_26b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mul2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"sign1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"sign2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"exp1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"exp2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+24,0,"sign_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"sum_exp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+26,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"unf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add_EXPs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"exp1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"exp2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+26,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"unf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"r_exp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"r_exp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"r_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_init_sub__TOP__MAC_unit_tb__DOT__mac_if__0(VMAC_unit_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_init_sub__TOP__MAC_unit_tb__DOT__mac_if__0\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+89,0,"data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"in_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"in_accumulate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"out_accumulate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_init_top(VMAC_unit_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_init_top\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMAC_unit_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VMAC_unit_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMAC_unit_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMAC_unit_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_register(VMAC_unit_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_register\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VMAC_unit_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VMAC_unit_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VMAC_unit_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VMAC_unit_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_const_0_sub_0(VMAC_unit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_const_0\n"); );
    // Init
    VMAC_unit_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_unit_tb___024root*>(voidSelf);
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMAC_unit_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_const_0_sub_0(VMAC_unit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_const_0_sub_0\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+82,(1U),32);
    bufp->fullBit(oldp+83,(0U));
    bufp->fullCData(oldp+84,(1U),3);
    bufp->fullCData(oldp+85,(0U),3);
    bufp->fullCData(oldp+86,(2U),3);
    bufp->fullCData(oldp+87,(3U),3);
    bufp->fullCData(oldp+88,(4U),3);
    bufp->fullIData(oldp+89,(0x10U),32);
    bufp->fullBit(oldp+90,(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.__PVT__count));
}

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_full_0_sub_0(VMAC_unit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_full_0\n"); );
    // Init
    VMAC_unit_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC_unit_tb___024root*>(voidSelf);
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMAC_unit_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMAC_unit_tb___024root__trace_full_0_sub_0(VMAC_unit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC_unit_tb___024root__trace_full_0_sub_0\n"); );
    VMAC_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.MAC_unit_tb__DOT__tb_nrst));
    bufp->fullBit(oldp+2,((1U & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight) 
                                 >> 0xfU))));
    bufp->fullCData(oldp+4,((0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value) 
                                      >> 0xaU))),5);
    bufp->fullCData(oldp+5,((0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight) 
                                      >> 0xaU))),5);
    bufp->fullSData(oldp+6,(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate),16);
    bufp->fullCData(oldp+7,((0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                      >> 0xaU))),5);
    bufp->fullCData(oldp+8,((0x1fU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                      >> 0xaU))),6);
    bufp->fullSData(oldp+9,(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value),16);
    bufp->fullSData(oldp+10,(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight),16);
    bufp->fullSData(oldp+11,((0x1000U | (0xffcU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_value) 
                                                   << 2U)))),13);
    bufp->fullSData(oldp+12,((0x1000U | (0xffcU & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.weight) 
                                                   << 2U)))),13);
    bufp->fullBit(oldp+13,(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.start));
    bufp->fullBit(oldp+14,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run_latched));
    bufp->fullBit(oldp+15,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_1));
    bufp->fullBit(oldp+16,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_2));
    bufp->fullBit(oldp+17,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__start_passthrough_3));
    bufp->fullBit(oldp+18,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign1_in));
    bufp->fullBit(oldp+19,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign2_in));
    bufp->fullBit(oldp+20,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_carryout_in));
    bufp->fullCData(oldp+21,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp1_in),5);
    bufp->fullCData(oldp+22,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_exp2_in),5);
    bufp->fullSData(oldp+23,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in),13);
    bufp->fullBit(oldp+24,(((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign1_in) 
                            ^ (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sign2_in))));
    bufp->fullCData(oldp+25,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sum_exp),5);
    bufp->fullBit(oldp+26,((IData)((((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                     >> 4U) & (~ (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                   | (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+27,((1U & ((~ ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_carryout_in) 
                                      & (0x1fU == (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sum_exp)))) 
                                  & ((~ ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U)) & 
                                     (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                       & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                      >> 4U))))));
    bufp->fullSData(oldp+28,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result),16);
    bufp->fullSData(oldp+29,((0x3ffU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_carryout_in)
                                         ? ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in) 
                                            >> 3U) : 
                                        ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_product_in) 
                                         >> 2U)))),10);
    bufp->fullBit(oldp+30,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_shifted_in));
    bufp->fullBit(oldp+31,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_not_shifted_in));
    bufp->fullSData(oldp+32,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_shifted_in),13);
    bufp->fullSData(oldp+33,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__frac_not_shifted_in),13);
    bufp->fullCData(oldp+34,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_in),5);
    bufp->fullBit(oldp+35,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_out));
    bufp->fullBit(oldp+36,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_in));
    bufp->fullSData(oldp+37,((0x1fffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
    bufp->fullSData(oldp+38,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sum_in),13);
    bufp->fullBit(oldp+39,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_out));
    bufp->fullBit(oldp+40,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_carry_in));
    bufp->fullCData(oldp+41,(((0U == (0x1fffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                               ? 0U : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_in))),5);
    bufp->fullCData(oldp+42,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_exp_max_s3_in),5);
    bufp->fullSData(oldp+43,((((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_in) 
                               << 0xfU) | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf)
                                            ? 0x7c00U
                                            : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this) 
                                                          >> 2U) 
                                                         + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount)))))))),16);
    bufp->fullCData(oldp+44,((((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf) 
                               << 2U) | (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf) 
                                          << 1U) | 
                                         ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf) 
                                          | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount) 
                                             | (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)))))),5);
    bufp->fullCData(oldp+45,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_sum_exp),6);
    bufp->fullSData(oldp+46,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac1_signed),14);
    bufp->fullSData(oldp+47,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__frac2_signed),14);
    bufp->fullSData(oldp+48,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__sum_signed),14);
    bufp->fullSData(oldp+49,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
    bufp->fullBit(oldp+50,(((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf) 
                            | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount) 
                               | (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)))));
    bufp->fullCData(oldp+51,(((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf)
                               ? 0x1fU : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)
                                           ? 0U : (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out)))),5);
    bufp->fullSData(oldp+52,(((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf)
                               ? 0U : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)
                                        ? 0U : (0x3ffU 
                                                & (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this) 
                                                    >> 2U) 
                                                   + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount)))))),10);
    bufp->fullCData(oldp+53,((0x1fU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_result))),5);
    bufp->fullSData(oldp+54,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_frac),13);
    bufp->fullCData(oldp+55,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__shifted_amount),5);
    bufp->fullCData(oldp+56,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out),5);
    bufp->fullBit(oldp+57,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf));
    bufp->fullBit(oldp+58,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf));
    bufp->fullSData(oldp+59,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this),12);
    bufp->fullSData(oldp+60,((((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_in) 
                               << 0xfU) | (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out) 
                                            << 0xaU) 
                                           | (0x3ffU 
                                              & (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this) 
                                                  >> 2U) 
                                                 + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount)))))),16);
    bufp->fullBit(oldp+61,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount));
    bufp->fullCData(oldp+62,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_exp1),6);
    bufp->fullCData(oldp+63,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_shifted_amount),6);
    bufp->fullCData(oldp+64,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__SUB__DOT__u_result),6);
    bufp->fullCData(oldp+65,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
    bufp->fullCData(oldp+66,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
    bufp->fullCData(oldp+67,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul2__DOT__add_EXPs__DOT__r_sum),5);
    bufp->fullSData(oldp+68,(((1U & ((0x3fffffffU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf)) 
                                     | (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf) 
                                         | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount) 
                                            | (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf))) 
                                        >> 2U))) ? 0x7c00U
                               : (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__exp_out) 
                                                     << 0xaU) 
                                                    | (0x3ffU 
                                                       & (((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__round_this) 
                                                           >> 2U) 
                                                          + (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add3__DOT__ROUND__DOT__round_amount))))))))),16);
    bufp->fullBit(oldp+69,(vlSelfRef.MAC_unit_tb__DOT__tb_clk));
    bufp->fullBit(oldp+70,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__run));
    bufp->fullBit(oldp+71,((1U & (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b 
                                  >> 0x19U))));
    bufp->fullSData(oldp+72,((0x1fffU & (vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b 
                                         >> 0xcU))),13);
    bufp->fullBit(oldp+73,((1U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                                   ? ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                      >> 0xfU) : ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                                  >> 0xfU)))));
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                                   ? ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                      >> 0xfU) : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                                  >> 0xfU)))));
    bufp->fullSData(oldp+75,((0x1fffU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                                          ? ((0x1000U 
                                              | (0xffcU 
                                                 & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                                    << 2U))) 
                                             >> (0x1fU 
                                                 & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff)))
                                          : ((0x1000U 
                                              | (0xffcU 
                                                 & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                                    << 2U))) 
                                             >> (0x1fU 
                                                 & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff)))))),13);
    bufp->fullSData(oldp+76,(((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                               ? (0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                                << 2U)))
                               : (0x1000U | (0xffcU 
                                             & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                                << 2U))))),13);
    bufp->fullCData(oldp+77,((0x1fU & ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__MAC_unit_tb__DOT__mac_if.in_accumulate) 
                                           >> 0xaU)
                                        : ((IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul_result) 
                                           >> 0xaU)))),5);
    bufp->fullCData(oldp+78,((0x1fU & (IData)(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff))),5);
    bufp->fullBit(oldp+79,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_out));
    bufp->fullCData(oldp+80,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__add1__DOT__cmp_exponents__DOT__diff),6);
    bufp->fullIData(oldp+81,(vlSelfRef.MAC_unit_tb__DOT__dut__DOT__mul1__DOT__MUL__DOT__frac_out_26b),26);
}
