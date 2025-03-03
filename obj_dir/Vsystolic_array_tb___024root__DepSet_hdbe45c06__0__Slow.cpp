// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"
#include "Vsystolic_array_tb__Syms.h"
#include "Vsystolic_array_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array_tb___024root___dump_triggers__stl(Vsystolic_array_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_triggers__stl(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_triggers__stl\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsystolic_array_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___stl_sequent__TOP__0(Vsystolic_array_tb___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb___024root____Vm_traceActivitySetAll(Vsystolic_array_tb___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0(Vsystolic_array_tb_sysarr_MAC* vlSelf);
VL_ATTR_COLD void Vsystolic_array_tb___024root___stl_sequent__TOP__1(Vsystolic_array_tb___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_stl(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_stl\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsystolic_array_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vsystolic_array_tb___024root____Vm_traceActivitySetAll(vlSelf);
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst));
        Vsystolic_array_tb_sysarr_MAC___stl_sequent__TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst__0((&vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst));
        Vsystolic_array_tb___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___stl_sequent__TOP__0(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___stl_sequent__TOP__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run_latched) 
           | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run_latched) 
           | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run_latched) 
           | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run 
        = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run_latched) 
           | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start));
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_load = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_row = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ps_data_loaded;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_fully_loaded;
    if ((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full))) {
        if ((1U & (~ ((4U == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                       [0U]) & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))))) {
            if (((9U == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                  [0U]) & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))) {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded 
                    = (3U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded) 
                             - (IData)(1U)));
            }
        }
    }
    if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full))) {
        if ((1U & (~ ((4U == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                       [1U]) & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))))) {
            if (((9U == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                  [1U]) & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))) {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded 
                    = (3U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded) 
                             - (IData)(1U)));
            }
        }
    }
    if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full))) {
        if ((1U & (~ ((4U == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                       [2U]) & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))))) {
            if (((9U == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                  [2U]) & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))) {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded 
                    = (3U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded) 
                             - (IData)(1U)));
            }
        }
    }
    if (vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded 
            = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded) 
               | (0xfU & ((IData)(1U) << (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en))));
    }
    if ((0xfU == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded)));
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded = 0U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_in_data_loaded 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__in_data_loaded;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_input_fully_loaded 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_fully_loaded;
    if ((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full))) {
        if (((4U == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
              [0U]) & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_input_fully_loaded = 0U;
        }
    }
    if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full))) {
        if (((4U == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
              [1U]) & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_input_fully_loaded = 0U;
        }
    }
    if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full))) {
        if (((4U == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
              [2U]) & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_input_fully_loaded = 0U;
        }
    }
    if (vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_in_data_loaded 
            = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_in_data_loaded) 
               | (0xfU & ((IData)(1U) << (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en))));
    }
    if ((0xfU == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_in_data_loaded))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_input_fully_loaded = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_in_data_loaded = 0U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[0U] 
        = (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[1U] 
        = (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem 
                   >> 0x20U));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[2U] 
        = (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[3U] 
        = (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem 
                   >> 0x20U));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[4U] 
        = (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[5U] 
        = (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem 
                   >> 0x20U));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[6U] 
        = (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[7U] 
        = (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem 
                   >> 0x20U));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_not_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_not_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_not_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_not_shifted_in) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[2U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
        [2U];
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[1U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
        [1U];
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[0U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
        [0U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[0U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[1U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[2U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[3U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac 
        = (((((((((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in))) 
                  | (0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
                 | (0x200U == (0x1e00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
                | (0x100U == (0x1f00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
               | (0x80U == (0x1f80U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
              | (0x40U == (0x1fc0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
             | (0x20U == (0x1fe0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
            | (0x10U == (0x1ff0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in))))
            ? ((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                ? (0x1ffeU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                              << 1U)) : ((0x400U == 
                                          (0x1c00U 
                                           & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                          ? (0x1ffcU 
                                             & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                                                << 2U))
                                          : ((0x200U 
                                              == (0x1e00U 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                              ? (0x1ff8U 
                                                 & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                                                    << 3U))
                                              : ((0x100U 
                                                  == 
                                                  (0x1f00U 
                                                   & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                                  ? 
                                                 (0x1ff0U 
                                                  & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                                                     << 4U))
                                                  : 
                                                 ((0x80U 
                                                   == 
                                                   (0x1f80U 
                                                    & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                                   ? 
                                                  (0x1fe0U 
                                                   & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                                                      << 5U))
                                                   : 
                                                  ((0x40U 
                                                    == 
                                                    (0x1fc0U 
                                                     & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                                    ? 
                                                   (0x1fc0U 
                                                    & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                                                       << 6U))
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                                     ? 
                                                    (0x1f80U 
                                                     & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                                                        << 7U))
                                                     : 
                                                    (0x1f00U 
                                                     & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                                                        << 8U)))))))))
            : ((8U == (0x1ff8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                ? (0x1e00U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                              << 9U)) : ((4U == (0x1ffcU 
                                                 & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                          ? (0x1c00U 
                                             & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                                                << 0xaU))
                                          : ((2U == 
                                              (0x1ffeU 
                                               & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                              ? (0x1800U 
                                                 & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                                                    << 0xbU))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in))
                                                  ? 
                                                 (0x1000U 
                                                  & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                                                     << 0xcU))
                                                  : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in))))));
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this 
            = (0xfffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in) 
                         >> 1U));
    } else {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this 
            = (0xfffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount 
        = (((((((((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in))) 
                  | (0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
                 | (0x200U == (0x1e00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
                | (0x100U == (0x1f00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
               | (0x80U == (0x1f80U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
              | (0x40U == (0x1fc0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
             | (0x20U == (0x1fe0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))) 
            | (0x10U == (0x1ff0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in))))
            ? ((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                ? 1U : ((0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                         ? 2U : ((0x200U == (0x1e00U 
                                             & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                  ? 3U : ((0x100U == 
                                           (0x1f00U 
                                            & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                           ? 4U : (
                                                   (0x80U 
                                                    == 
                                                    (0x1f80U 
                                                     & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                                    ? 5U
                                                    : 
                                                   ((0x40U 
                                                     == 
                                                     (0x1fc0U 
                                                      & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                                     ? 6U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x1fe0U 
                                                       & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                                      ? 7U
                                                      : 8U)))))))
            : ((8U == (0x1ff8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                ? 9U : ((4U == (0x1ffcU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                         ? 0xaU : ((2U == (0x1ffeU 
                                           & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in)))
                                    ? 0xbU : ((1U == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in))
                                               ? 0xcU
                                               : 0U)))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac 
        = (((((((((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in))) 
                  | (0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
                 | (0x200U == (0x1e00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
                | (0x100U == (0x1f00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
               | (0x80U == (0x1f80U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
              | (0x40U == (0x1fc0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
             | (0x20U == (0x1fe0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
            | (0x10U == (0x1ff0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in))))
            ? ((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                ? (0x1ffeU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                              << 1U)) : ((0x400U == 
                                          (0x1c00U 
                                           & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                          ? (0x1ffcU 
                                             & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                                                << 2U))
                                          : ((0x200U 
                                              == (0x1e00U 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                              ? (0x1ff8U 
                                                 & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                                                    << 3U))
                                              : ((0x100U 
                                                  == 
                                                  (0x1f00U 
                                                   & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                                  ? 
                                                 (0x1ff0U 
                                                  & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                                                     << 4U))
                                                  : 
                                                 ((0x80U 
                                                   == 
                                                   (0x1f80U 
                                                    & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                                   ? 
                                                  (0x1fe0U 
                                                   & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                                                      << 5U))
                                                   : 
                                                  ((0x40U 
                                                    == 
                                                    (0x1fc0U 
                                                     & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                                    ? 
                                                   (0x1fc0U 
                                                    & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                                                       << 6U))
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                                     ? 
                                                    (0x1f80U 
                                                     & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                                                        << 7U))
                                                     : 
                                                    (0x1f00U 
                                                     & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                                                        << 8U)))))))))
            : ((8U == (0x1ff8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                ? (0x1e00U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                              << 9U)) : ((4U == (0x1ffcU 
                                                 & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                          ? (0x1c00U 
                                             & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                                                << 0xaU))
                                          : ((2U == 
                                              (0x1ffeU 
                                               & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                              ? (0x1800U 
                                                 & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                                                    << 0xbU))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in))
                                                  ? 
                                                 (0x1000U 
                                                  & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                                                     << 0xcU))
                                                  : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in))))));
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this 
            = (0xfffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in) 
                         >> 1U));
    } else {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this 
            = (0xfffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount 
        = (((((((((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in))) 
                  | (0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
                 | (0x200U == (0x1e00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
                | (0x100U == (0x1f00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
               | (0x80U == (0x1f80U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
              | (0x40U == (0x1fc0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
             | (0x20U == (0x1fe0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))) 
            | (0x10U == (0x1ff0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in))))
            ? ((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                ? 1U : ((0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                         ? 2U : ((0x200U == (0x1e00U 
                                             & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                  ? 3U : ((0x100U == 
                                           (0x1f00U 
                                            & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                           ? 4U : (
                                                   (0x80U 
                                                    == 
                                                    (0x1f80U 
                                                     & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                                    ? 5U
                                                    : 
                                                   ((0x40U 
                                                     == 
                                                     (0x1fc0U 
                                                      & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                                     ? 6U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x1fe0U 
                                                       & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                                      ? 7U
                                                      : 8U)))))))
            : ((8U == (0x1ff8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                ? 9U : ((4U == (0x1ffcU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                         ? 0xaU : ((2U == (0x1ffeU 
                                           & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in)))
                                    ? 0xbU : ((1U == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in))
                                               ? 0xcU
                                               : 0U)))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac 
        = (((((((((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in))) 
                  | (0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
                 | (0x200U == (0x1e00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
                | (0x100U == (0x1f00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
               | (0x80U == (0x1f80U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
              | (0x40U == (0x1fc0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
             | (0x20U == (0x1fe0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
            | (0x10U == (0x1ff0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in))))
            ? ((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                ? (0x1ffeU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                              << 1U)) : ((0x400U == 
                                          (0x1c00U 
                                           & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                          ? (0x1ffcU 
                                             & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                                                << 2U))
                                          : ((0x200U 
                                              == (0x1e00U 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                              ? (0x1ff8U 
                                                 & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                                                    << 3U))
                                              : ((0x100U 
                                                  == 
                                                  (0x1f00U 
                                                   & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                                  ? 
                                                 (0x1ff0U 
                                                  & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                                                     << 4U))
                                                  : 
                                                 ((0x80U 
                                                   == 
                                                   (0x1f80U 
                                                    & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                                   ? 
                                                  (0x1fe0U 
                                                   & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                                                      << 5U))
                                                   : 
                                                  ((0x40U 
                                                    == 
                                                    (0x1fc0U 
                                                     & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                                    ? 
                                                   (0x1fc0U 
                                                    & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                                                       << 6U))
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                                     ? 
                                                    (0x1f80U 
                                                     & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                                                        << 7U))
                                                     : 
                                                    (0x1f00U 
                                                     & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                                                        << 8U)))))))))
            : ((8U == (0x1ff8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                ? (0x1e00U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                              << 9U)) : ((4U == (0x1ffcU 
                                                 & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                          ? (0x1c00U 
                                             & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                                                << 0xaU))
                                          : ((2U == 
                                              (0x1ffeU 
                                               & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                              ? (0x1800U 
                                                 & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                                                    << 0xbU))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in))
                                                  ? 
                                                 (0x1000U 
                                                  & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                                                     << 0xcU))
                                                  : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in))))));
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this 
            = (0xfffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in) 
                         >> 1U));
    } else {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this 
            = (0xfffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount 
        = (((((((((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in))) 
                  | (0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
                 | (0x200U == (0x1e00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
                | (0x100U == (0x1f00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
               | (0x80U == (0x1f80U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
              | (0x40U == (0x1fc0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
             | (0x20U == (0x1fe0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))) 
            | (0x10U == (0x1ff0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in))))
            ? ((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                ? 1U : ((0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                         ? 2U : ((0x200U == (0x1e00U 
                                             & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                  ? 3U : ((0x100U == 
                                           (0x1f00U 
                                            & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                           ? 4U : (
                                                   (0x80U 
                                                    == 
                                                    (0x1f80U 
                                                     & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                                    ? 5U
                                                    : 
                                                   ((0x40U 
                                                     == 
                                                     (0x1fc0U 
                                                      & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                                     ? 6U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x1fe0U 
                                                       & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                                      ? 7U
                                                      : 8U)))))))
            : ((8U == (0x1ff8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                ? 9U : ((4U == (0x1ffcU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                         ? 0xaU : ((2U == (0x1ffeU 
                                           & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in)))
                                    ? 0xbU : ((1U == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in))
                                               ? 0xcU
                                               : 0U)))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac 
        = (((((((((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in))) 
                  | (0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
                 | (0x200U == (0x1e00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
                | (0x100U == (0x1f00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
               | (0x80U == (0x1f80U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
              | (0x40U == (0x1fc0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
             | (0x20U == (0x1fe0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
            | (0x10U == (0x1ff0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in))))
            ? ((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                ? (0x1ffeU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                              << 1U)) : ((0x400U == 
                                          (0x1c00U 
                                           & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                          ? (0x1ffcU 
                                             & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                                                << 2U))
                                          : ((0x200U 
                                              == (0x1e00U 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                              ? (0x1ff8U 
                                                 & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                                                    << 3U))
                                              : ((0x100U 
                                                  == 
                                                  (0x1f00U 
                                                   & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                                  ? 
                                                 (0x1ff0U 
                                                  & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                                                     << 4U))
                                                  : 
                                                 ((0x80U 
                                                   == 
                                                   (0x1f80U 
                                                    & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                                   ? 
                                                  (0x1fe0U 
                                                   & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                                                      << 5U))
                                                   : 
                                                  ((0x40U 
                                                    == 
                                                    (0x1fc0U 
                                                     & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                                    ? 
                                                   (0x1fc0U 
                                                    & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                                                       << 6U))
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0x1fe0U 
                                                      & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                                     ? 
                                                    (0x1f80U 
                                                     & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                                                        << 7U))
                                                     : 
                                                    (0x1f00U 
                                                     & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                                                        << 8U)))))))))
            : ((8U == (0x1ff8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                ? (0x1e00U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                              << 9U)) : ((4U == (0x1ffcU 
                                                 & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                          ? (0x1c00U 
                                             & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                                                << 0xaU))
                                          : ((2U == 
                                              (0x1ffeU 
                                               & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                              ? (0x1800U 
                                                 & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                                                    << 0xbU))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in))
                                                  ? 
                                                 (0x1000U 
                                                  & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                                                     << 0xcU))
                                                  : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in))))));
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in) {
        if ((0x1eU == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf = 1U;
        }
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this 
            = (0xfffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in) 
                         >> 1U));
    } else {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this 
            = (0xfffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount 
        = (((((((((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in))) 
                  | (0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
                 | (0x200U == (0x1e00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
                | (0x100U == (0x1f00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
               | (0x80U == (0x1f80U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
              | (0x40U == (0x1fc0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
             | (0x20U == (0x1fe0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))) 
            | (0x10U == (0x1ff0U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in))))
            ? ((0x800U == (0x1800U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                ? 1U : ((0x400U == (0x1c00U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                         ? 2U : ((0x200U == (0x1e00U 
                                             & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                  ? 3U : ((0x100U == 
                                           (0x1f00U 
                                            & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                           ? 4U : (
                                                   (0x80U 
                                                    == 
                                                    (0x1f80U 
                                                     & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                                    ? 5U
                                                    : 
                                                   ((0x40U 
                                                     == 
                                                     (0x1fc0U 
                                                      & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                                     ? 6U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x1fe0U 
                                                       & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                                      ? 7U
                                                      : 8U)))))))
            : ((8U == (0x1ff8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                ? 9U : ((4U == (0x1ffcU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                         ? 0xaU : ((2U == (0x1ffeU 
                                           & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in)))
                                    ? 0xbU : ((1U == (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in))
                                               ? 0xcU
                                               : 0U)))));
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.out_fifo_shift = 0U;
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.out_fifo_shift = 1U;
    }
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_type = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en)))) {
        if (vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en) {
            vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_load = 1U;
            vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_row 
                = vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en;
            vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_type = 1U;
        }
    }
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_load = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.partials_load = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_row = 0U;
    if (vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_load = 1U;
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_row 
            = vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en;
    }
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.partials_row = 0U;
    if (vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.partials_load = 1U;
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.partials_row 
            = vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en;
    }
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift = 0U;
    if ((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift 
            = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[0U][0U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[1U][0U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[2U][0U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[3U][0U] 
        = (0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U]);
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[0U][1U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[0U][2U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[0U][3U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[1U][1U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[1U][2U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[1U][3U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[2U][1U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[2U][2U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[2U][3U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[3U][1U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[3U][2U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs[3U][3U] 
        = vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__start_flag 
        = ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en) 
           & (0U == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw = 0U;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_load) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw 
            = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw) 
               | (0xfU & ((IData)(1U) << (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_row))));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
        = (0x3fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                      + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
            = (0x2000U | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
            = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
        = (0x3fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                      + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
            = (0x2000U | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
            = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
        = (0x3fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                      + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
            = (0x2000U | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
            = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
        = (0x3fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                      + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_out = 0U;
    if ((1U & ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                 & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed)) 
                >> 0xdU) & (~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed) 
                               >> 0xdU))))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
            = (0x2000U | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed));
    }
    if ((IData)((((~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed) 
                      >> 0xdU)) & (~ ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed) 
                                      >> 0xdU))) & 
                 ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed) 
                  >> 0xdU)))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed 
            = (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.drained = 1U;
    if ((0U < vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
         [0U])) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.drained = 0U;
    }
    if ((0U < vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
         [1U])) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.drained = 0U;
    }
    if ((0U < vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
         [2U])) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.drained = 0U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff 
        = (0x3fU & ((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                              [0U] >> 0xaU)) - (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [3U]
                                                   [0U] 
                                                   >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff 
                = (0x3fU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff)));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = 0U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff 
        = (0x3fU & ((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                              [1U] >> 0xaU)) - (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [3U]
                                                   [1U] 
                                                   >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff 
                = (0x3fU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff)));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = 0U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff 
        = (0x3fU & ((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                              [2U] >> 0xaU)) - (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [3U]
                                                   [2U] 
                                                   >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff 
                = (0x3fU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff)));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = 0U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff 
        = (0x3fU & ((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                              [3U] >> 0xaU)) - (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [3U]
                                                   [3U] 
                                                   >> 0xaU))));
    if ((0x20U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff))) {
        if ((0x20U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff 
                = (0x3fU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff)));
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = 1U;
        }
    } else {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out = 0U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights_input = 0ULL;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_type) {
        if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_type) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights_input 
                = vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in;
        }
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input = 0ULL;
    if ((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_type)))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
            = vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)))) {
        if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_exp1 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result 
        = (0x3fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_exp1) 
                    - (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)))) {
        if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_exp1 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result 
        = (0x3fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_exp1) 
                    - (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)))) {
        if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_exp1 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result 
        = (0x3fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_exp1) 
                    - (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf = 0U;
    if ((1U & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)))) {
        if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in) 
             < (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf = 1U;
        }
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_exp1 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result 
        = (0x3fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_exp1) 
                    - (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi = 0U;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_load) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi 
            = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi) 
               | (0xfU & ((IData)(1U) << (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_row))));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps = 0U;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.partials_load) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps 
            = ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps) 
               | (0xfU & ((IData)(1U) << (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.partials_row))));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_loading = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_input_row = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_loading = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_partial_row = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__output_loading = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l = 0U;
    {
        while (VL_GTS_III(32, 3U, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l)) {
            if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__start_flag) 
                  | ((2U >= (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l)) 
                     && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
                               >> (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l))))) 
                 & (4U > ((2U >= (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l))
                           ? vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                          [(3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l)]
                           : 0U)))) {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_loading = 1U;
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_input_row 
                    = ((2U >= (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l))
                        ? (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                           [(3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l)])
                        : 0U);
                goto __Vlabel1;
            }
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l 
                = ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l);
        }
        __Vlabel1: ;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m = 0U;
    {
        while (VL_GTS_III(32, 3U, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m)) {
            if (((((2U >= (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m)) 
                   && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
                             >> (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m)))) 
                  & (8U >= ((2U >= (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m))
                             ? vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                            [(3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m)]
                             : 0U))) & (4U < ((2U >= 
                                               (3U 
                                                & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m))
                                               ? vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                                              [(3U 
                                                & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m)]
                                               : 0U)))) {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_loading = 1U;
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_partial_row 
                    = (3U & (((2U >= (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m))
                               ? vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [(3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m)]
                               : 0U) - (IData)(1U)));
                goto __Vlabel2;
            }
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m 
                = ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m);
        }
        __Vlabel2: ;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n = 0U;
    {
        while (VL_GTS_III(32, 3U, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n)) {
            if ((((2U >= (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n)) 
                  && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
                            >> (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n)))) 
                 & (4U < ((2U >= (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n))
                           ? vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                          [(3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n)]
                           : 0U)))) {
                vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__output_loading = 1U;
                goto __Vlabel3;
            }
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n 
                = ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n);
        }
        __Vlabel3: ;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_out = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_out = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_out = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_out = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed;
    if ((0x2000U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_out = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed 
            = (0x3fffU & (- (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag 
        = (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                 >> 1U));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction 
        = (0xfffU & ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this))
                      ? ((IData)(1U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag 
        = (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                 >> 1U));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction 
        = (0xfffU & ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this))
                      ? ((IData)(1U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag 
        = (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                 >> 1U));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction 
        = (0xfffU & ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this))
                      ? ((IData)(1U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag 
        = (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                 >> 1U));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction 
        = (0xfffU & ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this))
                      ? ((IData)(1U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this))
                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this)));
    if ((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__i = 4U;
    }
    if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__i = 4U;
    }
    if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__i = 4U;
    }
    if ((8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__i = 4U;
    }
    if ((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__i = 4U;
    }
    if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__i = 4U;
    }
    if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__i = 4U;
    }
    if ((8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__i = 4U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_start = 0U;
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__output_loading) 
         & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_start = 1U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0 
        = ((0x7c00U & (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)
                         ? ((IData)(1U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                         : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                       << 0xaU)) | (0x3ffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                              >> 2U)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0 
        = ((0x7c00U & (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)
                         ? ((IData)(1U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                         : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                       << 0xaU)) | (0x3ffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                              >> 2U)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0 
        = ((0x7c00U & (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)
                         ? ((IData)(1U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                         : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                       << 0xaU)) | (0x3ffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                              >> 2U)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0 
        = ((0x7c00U & (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)
                         ? ((IData)(1U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                         : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                       << 0xaU)) | (0x3ffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                              >> 2U)));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem_next 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem_next 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem_next 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem_next 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem;
    if (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.out_fifo_shift) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem_next 
            = (((QData)((IData)(((1U & ((0x3fffffffU 
                                         & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf)) 
                                        | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                            | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                               | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf))) 
                                           >> 2U)))
                                  ? 0x7c00U : (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in) 
                                                << 0xfU) 
                                               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                   ? 0x7c00U
                                                   : 
                                                  ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))))) 
                << 0x30U) | (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem 
                             >> 0x10U));
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem_next 
            = (((QData)((IData)(((1U & ((0x3fffffffU 
                                         & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf)) 
                                        | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                            | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                               | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf))) 
                                           >> 2U)))
                                  ? 0x7c00U : (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in) 
                                                << 0xfU) 
                                               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                   ? 0x7c00U
                                                   : 
                                                  ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))))) 
                << 0x30U) | (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem 
                             >> 0x10U));
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem_next 
            = (((QData)((IData)(((1U & ((0x3fffffffU 
                                         & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf)) 
                                        | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                            | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                               | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf))) 
                                           >> 2U)))
                                  ? 0x7c00U : (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in) 
                                                << 0xfU) 
                                               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                   ? 0x7c00U
                                                   : 
                                                  ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))))) 
                << 0x30U) | (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem 
                             >> 0x10U));
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem_next 
            = (((QData)((IData)(((1U & ((0x3fffffffU 
                                         & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf)) 
                                        | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                            | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                               | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf))) 
                                           >> 2U)))
                                  ? 0x7c00U : (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in) 
                                                << 0xfU) 
                                               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                   ? 0x7c00U
                                                   : 
                                                  ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))))) 
                << 0x30U) | (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem 
                             >> 0x10U));
    }
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___stl_sequent__TOP__1(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___stl_sequent__TOP__1\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    // Body
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.out_en = 0U;
    if (((8U <= vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
          [0U]) & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.out_en = 1U;
    }
    if (((8U <= vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
          [1U]) & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.out_en = 1U;
    }
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out = 0U;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out = 0U;
    vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output = 0ULL;
    if (((8U <= vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
          [0U]) & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out 
            = (3U & vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
               [0U]);
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output 
            = (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[
                                (((IData)(0x3fU) + 
                                  (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))))) 
               | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U)))
                    ? 0ULL : ((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))) 
                                               >> 5U)])) 
                              << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))))) 
                  | ((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[
                                     (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U) 
                                            >> 5U))])) 
                     >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U)))));
    }
    if (((8U <= vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
          [1U]) & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out 
            = (3U & vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
               [1U]);
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output 
            = (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[
                                (((IData)(0x3fU) + 
                                  (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))))) 
               | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U)))
                    ? 0ULL : ((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))) 
                                               >> 5U)])) 
                              << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))))) 
                  | ((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[
                                     (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U) 
                                            >> 5U))])) 
                     >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U)))));
    }
    if (((8U <= vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
          [2U]) & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))) {
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.out_en = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out 
            = (3U & vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration
               [2U]);
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out;
        vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output 
            = (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[
                                (((IData)(0x3fU) + 
                                  (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))))) 
               | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U)))
                    ? 0ULL : ((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))) 
                                               >> 5U)])) 
                              << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U))))) 
                  | ((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out[
                                     (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U) 
                                            >> 5U))])) 
                     >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out), 6U)))));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_done 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__MAC_done;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start = 0U;
    if ((1U & ((~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)) 
               | (~ (IData)((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full))))))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_done = 1U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ready = 0U;
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__MAC_done) 
         | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_done))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ready 
            = (1U & (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_loading) 
                      & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_loading))
                      ? ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__in_data_loaded) 
                           >> (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_input_row)) 
                          | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_fully_loaded)) 
                         & (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ps_data_loaded) 
                             >> (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_partial_row)) 
                            | (0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_fully_loaded))))
                      : ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_loading)
                          ? (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__in_data_loaded) 
                              >> (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_input_row)) 
                             | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_fully_loaded))
                          : ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_loading)
                              ? (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ps_data_loaded) 
                                  >> (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_partial_row)) 
                                 | (0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_fully_loaded)))
                              : (0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full))))));
    }
    if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ready) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start = 1U;
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_done = 0U;
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[0U][0U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[0U][1U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[0U][2U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[0U][3U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[1U][0U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[1U][1U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[1U][2U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[1U][3U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[2U][0U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[2U][1U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[2U][2U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[2U][3U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[3U][0U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[3U][1U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[3U][2U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs[3U][3U] 
        = ((1U & ((0x3fffffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                  | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                         | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                     >> 2U))) ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                            << 0xfU) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                               ? 0x7c00U
                                               : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                   ? 0U
                                                   : 
                                                  ((0x7c00U 
                                                    & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                         : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                         >> 2U)))))));
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[2U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
        [2U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[1U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
        [1U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[0U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
        [0U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full;
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 3U, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i)) {
            if (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__start_flag) {
                if ((1U & (~ ((2U >= (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i)) 
                              && (1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
                                        >> (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i))))))) {
                    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT____Vlvbound_hd9ef4104__0 = 1U;
                    if (VL_LIKELY(((2U >= (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i))))) {
                        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full 
                            = (((~ ((IData)(1U) << 
                                    (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i))) 
                                & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full)) 
                               | (7U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT____Vlvbound_hd9ef4104__0) 
                                        << (3U & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i))));
                    }
                    goto __Vlabel4;
                }
            }
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i 
                = ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i);
        }
        __Vlabel4: ;
    }
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full) 
         & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT____Vlvbound_haaf93ebe__0 
            = (0xfU & ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                       [0U]));
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[0U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT____Vlvbound_haaf93ebe__0;
        if ((0xbU == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [0U])) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[0U] = 0U;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full 
                = (6U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full));
        }
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full) 
          >> 1U) & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT____Vlvbound_haaf93ebe__0 
            = (0xfU & ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                       [1U]));
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[1U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT____Vlvbound_haaf93ebe__0;
        if ((0xbU == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [1U])) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[1U] = 0U;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full 
                = (5U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full));
        }
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full) 
          >> 2U) & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT____Vlvbound_haaf93ebe__0 
            = (0xfU & ((IData)(1U) + vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                       [2U]));
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[2U] 
            = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT____Vlvbound_haaf93ebe__0;
        if ((0xbU == vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [2U])) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[2U] = 0U;
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full 
                = (3U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full));
        }
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__j = 3U;
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift = 0U;
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
         & ((0U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [0U]) & (4U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                      [0U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((0xeU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 1U) & ((0U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [1U]) & (4U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [1U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((0xeU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 2U) & ((0U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [2U]) & (4U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [2U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((0xeU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start));
    }
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
         & ((1U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [0U]) & (5U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                      [0U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((0xdU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 1U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 1U) & ((1U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [1U]) & (5U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [1U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((0xdU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 1U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 2U) & ((1U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [2U]) & (5U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [2U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((0xdU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 1U));
    }
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
         & ((2U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [0U]) & (6U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                      [0U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((0xbU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 2U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 1U) & ((2U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [1U]) & (6U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [1U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((0xbU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 2U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 2U) & ((2U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [2U]) & (6U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [2U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((0xbU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 2U));
    }
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
         & ((3U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [0U]) & (7U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                      [0U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((7U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 3U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 1U) & ((3U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [1U]) & (7U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [1U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((7U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 3U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 2U) & ((3U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [2U]) & (7U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [2U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift 
            = ((7U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 3U));
    }
    vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift = 0U;
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
         & ((4U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [0U]) & (8U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                      [0U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((0xeU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 1U) & ((4U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [1U]) & (8U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [1U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((0xeU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 2U) & ((4U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [2U]) & (8U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [2U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((0xeU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start));
    }
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
         & ((5U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [0U]) & (9U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                      [0U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((0xdU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 1U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 1U) & ((5U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [1U]) & (9U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [1U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((0xdU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 1U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 2U) & ((5U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [2U]) & (9U >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [2U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((0xdU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 1U));
    }
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
         & ((6U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [0U]) & (0xaU >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                      [0U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((0xbU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 2U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 1U) & ((6U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [1U]) & (0xaU >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [1U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((0xbU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 2U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 2U) & ((6U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [2U]) & (0xaU >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [2U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((0xbU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 2U));
    }
    if (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
         & ((7U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
             [0U]) & (0xbU >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                      [0U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((7U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 3U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 1U) & ((7U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [1U]) & (0xbU >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [1U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((7U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 3U));
    }
    if ((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full) 
          >> 2U) & ((7U < vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                     [2U]) & (0xbU >= vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration
                              [2U])))) {
        vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift 
            = ((7U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift)) 
               | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start) 
                  << 3U));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr;
    if ((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr;
    if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr;
    if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr;
    if ((8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[1U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[2U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[3U];
    if ((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(4U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input)));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(3U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x10U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(2U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x20U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x30U))));
    }
    if ((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift))) {
        if ((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
                = (0xfU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt) 
                           - (IData)(1U)));
        }
        VL_SHIFTR_WWI(128,128,32, __Vtemp_10, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_10[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_10[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_10[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_10[3U];
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[1U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[2U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[3U];
    if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(4U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input)));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(3U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x10U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(2U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x20U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x30U))));
    }
    if ((2U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift))) {
        if ((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
                = (0xfU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt) 
                           - (IData)(1U)));
        }
        VL_SHIFTR_WWI(128,128,32, __Vtemp_11, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_11[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_11[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_11[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_11[3U];
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[1U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[2U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[3U];
    if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(4U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input)));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(3U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x10U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(2U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x20U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x30U))));
    }
    if ((4U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift))) {
        if ((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
                = (0xfU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt) 
                           - (IData)(1U)));
        }
        VL_SHIFTR_WWI(128,128,32, __Vtemp_12, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_12[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_12[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_12[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_12[3U];
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[1U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[2U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[3U];
    if ((8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))) {
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(4U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input)));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(3U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x10U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(2U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x20U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input 
                                            >> 0x30U))));
    }
    if ((8U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift))) {
        if ((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt 
                = (0xfU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt) 
                           - (IData)(1U)));
        }
        VL_SHIFTR_WWI(128,128,32, __Vtemp_13, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_13[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_13[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_13[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_13[3U];
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr;
    if ((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr;
    if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr;
    if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr;
    if ((8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
            = (0xfU & ((IData)(4U) + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt)));
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[1U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[2U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[3U];
    if ((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(4U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials)));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(3U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x10U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(2U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x20U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x30U))));
    }
    if ((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift))) {
        if ((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
                = (0xfU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt) 
                           - (IData)(1U)));
        }
        VL_SHIFTR_WWI(128,128,32, __Vtemp_22, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_22[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_22[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_22[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_22[3U];
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[1U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[2U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[3U];
    if ((2U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(4U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials)));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(3U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x10U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(2U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x20U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x30U))));
    }
    if ((2U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift))) {
        if ((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
                = (0xfU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt) 
                           - (IData)(1U)));
        }
        VL_SHIFTR_WWI(128,128,32, __Vtemp_23, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_23[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_23[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_23[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_23[3U];
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[1U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[2U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[3U];
    if ((4U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(4U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials)));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(3U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x10U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(2U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x20U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x30U))));
    }
    if ((4U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift))) {
        if ((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
                = (0xfU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt) 
                           - (IData)(1U)));
        }
        VL_SHIFTR_WWI(128,128,32, __Vtemp_24, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_24[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_24[3U];
    }
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[1U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[2U];
    vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
        = vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[3U];
    if ((8U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))) {
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(4U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials)));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(3U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x10U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(2U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x20U))));
        VL_ASSIGNSEL_WI(128,16,(0x7fU & ((VL_SHIFTL_III(7,32,32, 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr)), 4U) 
                                          - (IData)(1U)) 
                                         - (IData)(0xfU))), vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 
                        (0xffffU & (IData)((vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials 
                                            >> 0x30U))));
    }
    if ((8U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift))) {
        if ((0U != (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr))) {
            vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt 
                = (0xfU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt) 
                           - (IData)(1U)));
        }
        VL_SHIFTR_WWI(128,128,32, __Vtemp_25, vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt, 0x10U);
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[0U] 
            = __Vtemp_25[0U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[1U] 
            = __Vtemp_25[1U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[2U] 
            = __Vtemp_25[2U];
        vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt[3U] 
            = __Vtemp_25[3U];
    }
}
