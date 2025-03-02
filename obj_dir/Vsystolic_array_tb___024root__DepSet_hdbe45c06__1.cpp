// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"
#include "Vsystolic_array_tb__Syms.h"
#include "Vsystolic_array_tb___024root.h"

VL_INLINE_OPT void Vsystolic_array_tb___024root___nba_sequent__TOP__4(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___nba_sequent__TOP__4\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
}
