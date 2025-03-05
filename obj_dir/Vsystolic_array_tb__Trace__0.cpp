// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsystolic_array_tb__Syms.h"


void Vsystolic_array_tb___024root__trace_chg_0_sub_0(Vsystolic_array_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vsystolic_array_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_chg_0\n"); );
    // Init
    Vsystolic_array_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array_tb___024root*>(voidSelf);
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsystolic_array_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsystolic_array_tb___024root__trace_chg_0_sub_0(Vsystolic_array_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_chg_0_sub_0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [5U]) | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__systolic_array_tb.__PVT__i),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__systolic_array_tb.__PVT__j),32);
        bufp->chgSData(oldp+2,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                               [0U][0U]),16);
        bufp->chgSData(oldp+3,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                               [0U][1U]),16);
        bufp->chgSData(oldp+4,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                               [0U][2U]),16);
        bufp->chgSData(oldp+5,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                               [0U][3U]),16);
        bufp->chgSData(oldp+6,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                               [1U][0U]),16);
        bufp->chgSData(oldp+7,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                               [1U][1U]),16);
        bufp->chgSData(oldp+8,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                               [1U][2U]),16);
        bufp->chgSData(oldp+9,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                               [1U][3U]),16);
        bufp->chgSData(oldp+10,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                                [2U][0U]),16);
        bufp->chgSData(oldp+11,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                                [2U][1U]),16);
        bufp->chgSData(oldp+12,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                                [2U][2U]),16);
        bufp->chgSData(oldp+13,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                                [2U][3U]),16);
        bufp->chgSData(oldp+14,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                                [3U][0U]),16);
        bufp->chgSData(oldp+15,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                                [3U][1U]),16);
        bufp->chgSData(oldp+16,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                                [3U][2U]),16);
        bufp->chgSData(oldp+17,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_outputs
                                [3U][3U]),16);
        bufp->chgQData(oldp+18,(vlSymsp->TOP__systolic_array_tb.__PVT__m_outputs[0]),64);
        bufp->chgQData(oldp+20,(vlSymsp->TOP__systolic_array_tb.__PVT__m_outputs[1]),64);
        bufp->chgQData(oldp+22,(vlSymsp->TOP__systolic_array_tb.__PVT__m_outputs[2]),64);
        bufp->chgQData(oldp+24,(vlSymsp->TOP__systolic_array_tb.__PVT__m_outputs[3]),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgBit(oldp+26,(vlSymsp->TOP__systolic_array_tb.__PVT__tb_nRST));
        bufp->chgIData(oldp+27,(vlSymsp->TOP__systolic_array_tb.__PVT__out_file),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__systolic_array_tb.__PVT__file),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__systolic_array_tb.__PVT__k),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__systolic_array_tb.__PVT__r),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__systolic_array_tb.__PVT__in),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__systolic_array_tb.__PVT__which),32);
        bufp->chgSData(oldp+33,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [0U][0U]),16);
        bufp->chgSData(oldp+34,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [0U][1U]),16);
        bufp->chgSData(oldp+35,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [0U][2U]),16);
        bufp->chgSData(oldp+36,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [0U][3U]),16);
        bufp->chgSData(oldp+37,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [1U][0U]),16);
        bufp->chgSData(oldp+38,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [1U][1U]),16);
        bufp->chgSData(oldp+39,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [1U][2U]),16);
        bufp->chgSData(oldp+40,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [1U][3U]),16);
        bufp->chgSData(oldp+41,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [2U][0U]),16);
        bufp->chgSData(oldp+42,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [2U][1U]),16);
        bufp->chgSData(oldp+43,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [2U][2U]),16);
        bufp->chgSData(oldp+44,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [2U][3U]),16);
        bufp->chgSData(oldp+45,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [3U][0U]),16);
        bufp->chgSData(oldp+46,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [3U][1U]),16);
        bufp->chgSData(oldp+47,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [3U][2U]),16);
        bufp->chgSData(oldp+48,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [3U][3U]),16);
        bufp->chgSData(oldp+49,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [0U][0U]),16);
        bufp->chgSData(oldp+50,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [0U][1U]),16);
        bufp->chgSData(oldp+51,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [0U][2U]),16);
        bufp->chgSData(oldp+52,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [0U][3U]),16);
        bufp->chgSData(oldp+53,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [1U][0U]),16);
        bufp->chgSData(oldp+54,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [1U][1U]),16);
        bufp->chgSData(oldp+55,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [1U][2U]),16);
        bufp->chgSData(oldp+56,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [1U][3U]),16);
        bufp->chgSData(oldp+57,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [2U][0U]),16);
        bufp->chgSData(oldp+58,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [2U][1U]),16);
        bufp->chgSData(oldp+59,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [2U][2U]),16);
        bufp->chgSData(oldp+60,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [2U][3U]),16);
        bufp->chgSData(oldp+61,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [3U][0U]),16);
        bufp->chgSData(oldp+62,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [3U][1U]),16);
        bufp->chgSData(oldp+63,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [3U][2U]),16);
        bufp->chgSData(oldp+64,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [3U][3U]),16);
        bufp->chgSData(oldp+65,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [0U][0U]),16);
        bufp->chgSData(oldp+66,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [0U][1U]),16);
        bufp->chgSData(oldp+67,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [0U][2U]),16);
        bufp->chgSData(oldp+68,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [0U][3U]),16);
        bufp->chgSData(oldp+69,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [1U][0U]),16);
        bufp->chgSData(oldp+70,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [1U][1U]),16);
        bufp->chgSData(oldp+71,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [1U][2U]),16);
        bufp->chgSData(oldp+72,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [1U][3U]),16);
        bufp->chgSData(oldp+73,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [2U][0U]),16);
        bufp->chgSData(oldp+74,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [2U][1U]),16);
        bufp->chgSData(oldp+75,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [2U][2U]),16);
        bufp->chgSData(oldp+76,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [2U][3U]),16);
        bufp->chgSData(oldp+77,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [3U][0U]),16);
        bufp->chgSData(oldp+78,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [3U][1U]),16);
        bufp->chgSData(oldp+79,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [3U][2U]),16);
        bufp->chgSData(oldp+80,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [3U][3U]),16);
        bufp->chgQData(oldp+81,(vlSymsp->TOP__systolic_array_tb.__PVT__m_weights[0]),64);
        bufp->chgQData(oldp+83,(vlSymsp->TOP__systolic_array_tb.__PVT__m_weights[1]),64);
        bufp->chgQData(oldp+85,(vlSymsp->TOP__systolic_array_tb.__PVT__m_weights[2]),64);
        bufp->chgQData(oldp+87,(vlSymsp->TOP__systolic_array_tb.__PVT__m_weights[3]),64);
        bufp->chgQData(oldp+89,(vlSymsp->TOP__systolic_array_tb.__PVT__m_inputs[0]),64);
        bufp->chgQData(oldp+91,(vlSymsp->TOP__systolic_array_tb.__PVT__m_inputs[1]),64);
        bufp->chgQData(oldp+93,(vlSymsp->TOP__systolic_array_tb.__PVT__m_inputs[2]),64);
        bufp->chgQData(oldp+95,(vlSymsp->TOP__systolic_array_tb.__PVT__m_inputs[3]),64);
        bufp->chgQData(oldp+97,(vlSymsp->TOP__systolic_array_tb.__PVT__m_partials[0]),64);
        bufp->chgQData(oldp+99,(vlSymsp->TOP__systolic_array_tb.__PVT__m_partials[1]),64);
        bufp->chgQData(oldp+101,(vlSymsp->TOP__systolic_array_tb.__PVT__m_partials[2]),64);
        bufp->chgQData(oldp+103,(vlSymsp->TOP__systolic_array_tb.__PVT__m_partials[3]),64);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__systolic_array_tb.__PVT__loaded_weights),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__systolic_array_tb.__PVT__get_matrices__Vstatic__unnamedblk1__DOT__iterations),32);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__weight_en));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__input_en));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__partial_en));
        bufp->chgCData(oldp+110,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__row_in_en),2);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__row_ps_en),2);
        bufp->chgQData(oldp+112,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__array_in),64);
        bufp->chgQData(oldp+114,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__array_in_partials),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgQData(oldp+116,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__top_input),64);
        bufp->chgQData(oldp+118,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights_input),64);
        bufp->chgCData(oldp+120,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadi),4);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadw),4);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadps),4);
        bufp->chgIData(oldp+123,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgBit(oldp+131,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__start_flag));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__input_type));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__input_load));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__weight_load));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__partials_load));
        bufp->chgCData(oldp+136,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__input_row),2);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__weight_row),2);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__partials_row),2);
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadi) 
                                      >> 3U))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadi) 
                                      >> 2U))));
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadi) 
                                      >> 1U))));
        bufp->chgBit(oldp+142,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadi))));
        bufp->chgBit(oldp+143,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadps) 
                                      >> 3U))));
        bufp->chgBit(oldp+144,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadps) 
                                      >> 2U))));
        bufp->chgBit(oldp+145,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadps) 
                                      >> 1U))));
        bufp->chgBit(oldp+146,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadps))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgWData(oldp+147,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+151,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+152,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+156,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+157,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+161,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+162,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+166,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+167,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+171,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+172,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+176,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+177,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+181,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+182,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+186,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgBit(oldp+187,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+191,((1U & ((~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__input_loading)) 
                                      & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__partial_loading))))));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_MAC_start));
        bufp->chgCData(oldp+193,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_iteration[0]),4);
        bufp->chgCData(oldp+194,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_iteration[1]),4);
        bufp->chgCData(oldp+195,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_iteration[2]),4);
        bufp->chgCData(oldp+196,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_iteration_full),3);
        bufp->chgBit(oldp+197,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__input_loading));
        bufp->chgCData(oldp+198,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__curr_input_row),2);
        bufp->chgBit(oldp+199,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__partial_loading));
        bufp->chgCData(oldp+200,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__curr_partial_row),2);
        bufp->chgBit(oldp+201,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__output_loading));
        bufp->chgCData(oldp+202,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_in_data_loaded),4);
        bufp->chgCData(oldp+203,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_ps_data_loaded),4);
        bufp->chgBit(oldp+204,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_input_fully_loaded));
        bufp->chgCData(oldp+205,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_partial_fully_loaded),2);
        bufp->chgBit(oldp+206,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_first_mac));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_MAC_ready));
        bufp->chgIData(oldp+208,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__i),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__j),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__l),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__m),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__n),32);
        bufp->chgBit(oldp+213,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__add_start));
        bufp->chgCData(oldp+214,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__in_fifo_shift),4);
        bufp->chgCData(oldp+215,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__ps_fifo_shift),4);
        bufp->chgBit(oldp+216,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__in_fifo_shift) 
                                      >> 3U))));
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__in_fifo_shift) 
                                      >> 2U))));
        bufp->chgBit(oldp+218,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__in_fifo_shift) 
                                      >> 1U))));
        bufp->chgBit(oldp+219,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__in_fifo_shift))));
        bufp->chgBit(oldp+220,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__ps_fifo_shift) 
                                      >> 3U))));
        bufp->chgBit(oldp+221,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__ps_fifo_shift) 
                                      >> 2U))));
        bufp->chgBit(oldp+222,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__ps_fifo_shift) 
                                      >> 1U))));
        bufp->chgBit(oldp+223,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__ps_fifo_shift))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+224,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+225,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+226,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+227,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+228,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+229,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+230,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+231,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+232,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+233,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+234,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+235,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+236,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+237,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+238,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+239,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+240,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+241,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+242,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+243,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+244,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+245,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+246,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+247,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+248,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+249,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+250,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+251,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+252,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+253,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+254,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+255,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+256,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+257,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+258,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+259,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+260,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+261,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+262,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+263,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+264,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+265,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+266,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+267,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+268,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+269,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+270,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+271,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+272,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs[0]),16);
        bufp->chgSData(oldp+273,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs[1]),16);
        bufp->chgSData(oldp+274,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs[2]),16);
        bufp->chgSData(oldp+275,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs[3]),16);
        bufp->chgQData(oldp+276,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights[0]),64);
        bufp->chgQData(oldp+278,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights[1]),64);
        bufp->chgQData(oldp+280,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights[2]),64);
        bufp->chgQData(oldp+282,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights[3]),64);
        bufp->chgIData(oldp+284,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__z),32);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__y),32);
        bufp->chgWData(oldp+286,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__current_out),256);
        bufp->chgWData(oldp+294,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+298,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+299,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+303,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+304,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+308,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+309,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+313,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+314,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+318,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+319,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+323,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+324,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+328,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+329,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgBit(oldp+334,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+339,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                          [0U] >> 0xfU)
                                       : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][0U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+340,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][0U] 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                       [0U] >> 0xfU)))));
        bufp->chgSData(oldp+341,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                        [0U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                        [0U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [3U]
                                                        [0U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [3U]
                                                        [0U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+342,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [3U]
                                                  [0U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                      [3U]
                                                      [0U] 
                                                      << 2U)))
                                   : (((0U != (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [0U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                      [0U] 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+343,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+344,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+345,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [3U]
                                               [0U] 
                                               >> 0xaU)
                                            : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                               [0U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+346,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+347,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+349,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+350,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+351,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+353,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+354,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   ((0x7c00U 
                                                     & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                          : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+355,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+356,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                 [0U]),16);
        bufp->chgSData(oldp+357,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][0U]),16);
        bufp->chgCData(oldp+358,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+359,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+360,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                           [0U] >> 0xaU))),6);
        bufp->chgCData(oldp+361,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [3U][0U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+362,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+363,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+364,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [3U]
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+365,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+366,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+367,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+368,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+369,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+370,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+371,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+372,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+373,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+374,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+376,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+377,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+378,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+379,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+380,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+381,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+382,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgBit(oldp+383,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+388,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                          [1U] >> 0xfU)
                                       : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][1U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+389,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][1U] 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                       [1U] >> 0xfU)))));
        bufp->chgSData(oldp+390,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                        [1U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                        [1U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [3U]
                                                        [1U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [3U]
                                                        [1U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+391,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [3U]
                                                  [1U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                      [3U]
                                                      [1U] 
                                                      << 2U)))
                                   : (((0U != (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [1U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                      [1U] 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+392,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+393,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+394,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [3U]
                                               [1U] 
                                               >> 0xaU)
                                            : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                               [1U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+396,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+397,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+398,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+399,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+400,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+401,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+402,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+403,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   ((0x7c00U 
                                                     & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                          : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+404,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+405,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                 [1U]),16);
        bufp->chgSData(oldp+406,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][1U]),16);
        bufp->chgCData(oldp+407,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+408,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+409,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                           [1U] >> 0xaU))),6);
        bufp->chgCData(oldp+410,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [3U][1U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+411,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+412,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                [1U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+413,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [3U]
                                                [1U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+414,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+415,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+416,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+417,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+418,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+419,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+420,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+421,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+422,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+423,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+424,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+425,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+426,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+427,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+428,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+429,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+430,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+431,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgBit(oldp+432,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+434,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+436,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+437,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                          [2U] >> 0xfU)
                                       : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][2U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+438,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][2U] 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                       [2U] >> 0xfU)))));
        bufp->chgSData(oldp+439,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                        [2U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                        [2U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [3U]
                                                        [2U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [3U]
                                                        [2U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+440,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [3U]
                                                  [2U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                      [3U]
                                                      [2U] 
                                                      << 2U)))
                                   : (((0U != (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [2U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                      [2U] 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+441,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+442,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+443,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [3U]
                                               [2U] 
                                               >> 0xaU)
                                            : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                               [2U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+444,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+445,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+447,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+448,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+449,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+451,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+452,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   ((0x7c00U 
                                                     & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                          : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+453,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+454,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                 [2U]),16);
        bufp->chgSData(oldp+455,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][2U]),16);
        bufp->chgCData(oldp+456,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+457,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+458,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                           [2U] >> 0xaU))),6);
        bufp->chgCData(oldp+459,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [3U][2U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+460,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+461,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                [2U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+462,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [3U]
                                                [2U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+463,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+464,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+465,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+466,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+467,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+468,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+469,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+470,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+471,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+472,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+474,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+475,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+476,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+477,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+478,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+479,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+480,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgBit(oldp+481,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+482,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+483,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+484,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+485,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+486,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                          [3U] >> 0xfU)
                                       : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][3U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+487,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][3U] 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                       [3U] >> 0xfU)))));
        bufp->chgSData(oldp+488,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                        [3U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                        [3U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [3U]
                                                        [3U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [3U]
                                                        [3U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+489,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [3U]
                                                  [3U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                      [3U]
                                                      [3U] 
                                                      << 2U)))
                                   : (((0U != (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [3U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                      [3U] 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+490,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+491,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+492,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [3U]
                                               [3U] 
                                               >> 0xaU)
                                            : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                               [3U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+493,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+494,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+495,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+496,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+497,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+498,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+499,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+500,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+501,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   ((0x7c00U 
                                                     & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                          : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+502,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+503,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                 [3U]),16);
        bufp->chgSData(oldp+504,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][3U]),16);
        bufp->chgCData(oldp+505,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+506,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+507,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                           [3U] >> 0xaU))),6);
        bufp->chgCData(oldp+508,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [3U][3U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+509,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+510,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                [3U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+511,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [3U]
                                                [3U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+512,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+513,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+514,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+515,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+516,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+517,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+518,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+519,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+520,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+521,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+522,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+523,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+524,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+525,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+526,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+527,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+528,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+529,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgQData(oldp+530,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+532,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+534,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+536,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+538,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+540,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+542,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+544,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgBit(oldp+546,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__drained));
        bufp->chgCData(oldp+547,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__iteration[0]),4);
        bufp->chgCData(oldp+548,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__iteration[1]),4);
        bufp->chgCData(oldp+549,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__iteration[2]),4);
        bufp->chgCData(oldp+550,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__iteration_full),3);
        bufp->chgCData(oldp+551,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__in_data_loaded),4);
        bufp->chgCData(oldp+552,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__ps_data_loaded),4);
        bufp->chgBit(oldp+553,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__input_fully_loaded));
        bufp->chgCData(oldp+554,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__partial_fully_loaded),2);
        bufp->chgBit(oldp+555,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__first_mac));
        bufp->chgBit(oldp+556,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__MAC_ready));
        bufp->chgSData(oldp+557,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+558,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+559,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+560,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+561,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+562,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+563,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+564,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+565,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [0U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+566,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+570,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+571,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [0U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+572,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+573,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+574,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+575,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+576,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+577,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+578,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+579,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+580,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+581,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+582,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+583,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+585,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+586,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+587,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+588,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+589,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+590,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+591,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+592,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+593,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+594,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+595,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+596,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+597,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+599,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+600,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   ((0x7c00U 
                                                     & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                          : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+601,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+602,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+603,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+604,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+605,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+606,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+607,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+608,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+609,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+610,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+611,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+612,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+613,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+614,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+615,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+616,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+618,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+619,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+620,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+621,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+622,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+623,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+624,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+625,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [0U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+626,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+627,((0U != (0x1fU & (IData)(
                                                       (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                        [0U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+628,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+629,((((0U != (0x1fU & (IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [0U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [0U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+630,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+631,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+632,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+633,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+634,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+635,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+636,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+637,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+638,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+639,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+640,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+641,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+642,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+643,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+647,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+648,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [1U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+649,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+650,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+651,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+652,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+653,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+654,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+655,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+656,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+657,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+658,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+659,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+660,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+661,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+662,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+663,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+664,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+665,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+666,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+667,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+668,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+669,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+670,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+671,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+672,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+673,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+674,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+675,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+676,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+677,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   ((0x7c00U 
                                                     & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                          : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+678,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+679,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+680,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+681,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+682,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+683,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+684,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+685,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+686,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+687,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+688,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+689,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+690,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+691,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+692,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+693,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+695,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+696,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+697,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+698,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+699,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+700,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+701,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+702,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [1U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+703,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+704,((0U != (0x1fU & (IData)(
                                                       (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                        [1U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+705,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+706,((((0U != (0x1fU & (IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [1U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [1U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+707,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+708,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+709,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+711,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+712,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+713,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+714,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+718,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+719,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [2U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+720,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+723,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+724,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+725,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [2U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+726,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+727,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+728,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+729,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+730,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+731,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+732,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+733,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+734,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+735,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+736,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+737,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+738,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+739,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+740,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+741,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+742,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+743,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+744,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+745,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+746,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+747,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+748,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+749,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+750,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+751,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+753,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+754,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   ((0x7c00U 
                                                     & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                          : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+755,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+756,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+757,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+758,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+759,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+760,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+761,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+762,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+763,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+764,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+765,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+766,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+767,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+768,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+769,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+770,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+771,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+772,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+773,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+774,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+775,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+776,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+777,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+778,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+779,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [2U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+780,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+781,((0U != (0x1fU & (IData)(
                                                       (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                        [2U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+782,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+783,((((0U != (0x1fU & (IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [2U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [2U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+784,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+785,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+786,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+787,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+788,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+789,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+790,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+791,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+793,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+794,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+795,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+796,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [3U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+797,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+801,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+802,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [3U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+804,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+805,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+806,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+807,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+808,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+809,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+810,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+811,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+812,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+813,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+814,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+815,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+816,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+817,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+818,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+819,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+820,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+821,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+822,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+823,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+824,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+825,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+826,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+827,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+828,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+829,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+830,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+831,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   ((0x7c00U 
                                                     & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                          : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+832,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+833,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+834,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+835,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+837,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+838,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+839,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+840,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+841,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+842,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+843,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+844,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+846,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+847,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+849,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+850,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+851,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+852,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+853,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+854,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+855,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+856,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [3U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+857,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+858,((0U != (0x1fU & (IData)(
                                                       (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                        [3U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+859,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+860,((((0U != (0x1fU & (IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [3U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [3U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+861,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+862,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+863,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+864,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+865,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+866,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+867,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+868,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+869,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+870,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+871,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+872,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+873,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+874,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+875,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+876,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+877,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+878,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+879,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [0U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+880,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+881,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+882,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+883,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+884,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+885,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+886,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+887,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+888,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+889,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+891,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+892,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+893,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                       [0U][0U] >> 0xfU)))));
        bufp->chgBit(oldp+894,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [0U][0U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+895,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [0U]
                                                        [0U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [0U]
                                                        [0U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+896,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [0U]
                                                  [0U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                      [0U]
                                                      [0U] 
                                                      << 2U)))
                                   : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                       << 0xcU) | (0xffcU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+897,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+898,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+899,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [0U]
                                               [0U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+900,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+901,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+902,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+903,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+904,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+905,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+906,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+907,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+908,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   ((0x7c00U 
                                                     & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                          : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+909,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+910,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][0U]),16);
        bufp->chgCData(oldp+911,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+912,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+913,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+914,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][0U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+915,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+916,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+917,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [0U]
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+918,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+919,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+920,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+921,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+922,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+923,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+924,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+925,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+926,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+927,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+928,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+929,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+930,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+931,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+932,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+933,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+934,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+935,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+936,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [0U] 
                                                     >> 0x20U)))),16);
        bufp->chgBit(oldp+937,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+938,((0U != (0x1fU & (IData)(
                                                       (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                        [0U] 
                                                        >> 0x2aU))))));
        bufp->chgSData(oldp+939,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+940,((((0U != (0x1fU & (IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [0U] 
                                                            >> 0x2aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [0U] 
                                                           >> 0x20U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+941,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+942,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+944,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+945,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+946,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+947,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+948,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+949,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+950,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+951,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+952,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+953,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [1U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+954,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+955,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+956,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+957,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+958,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+959,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [1U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+960,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+961,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+962,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+963,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+964,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+965,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+966,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+967,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+968,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+969,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgCData(oldp+970,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+971,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+972,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+973,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                       [0U][1U] >> 0xfU)))));
        bufp->chgBit(oldp+974,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [0U][1U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+975,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [0U]
                                                        [1U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                        [0U]
                                                        [1U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+976,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [0U]
                                                  [1U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                      [0U]
                                                      [1U] 
                                                      << 2U)))
                                   : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                       << 0xcU) | (0xffcU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+977,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+978,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+979,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [0U]
                                               [1U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+980,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+981,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+982,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+983,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+984,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+985,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+986,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+987,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+988,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                    ? 0U
                                                    : 
                                                   ((0x7c00U 
                                                     & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                          : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+989,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+990,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][1U]),16);
        bufp->chgCData(oldp+991,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+992,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+993,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+994,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][1U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+995,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+996,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+997,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [0U]
                                                [1U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+998,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+999,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1000,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1001,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1002,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1003,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1004,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1006,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1007,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1008,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1009,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1012,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1013,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1014,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1015,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1016,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [1U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1017,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1018,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [1U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1019,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1020,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [1U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [1U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1021,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1022,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1023,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1024,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1025,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1026,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1027,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1028,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1032,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1033,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [2U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1034,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1035,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1038,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1039,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [2U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1040,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1041,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1042,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1043,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1044,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1045,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1046,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1047,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1048,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1049,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1052,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1053,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1054,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1055,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [0U]
                                                         [2U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [0U]
                                                         [2U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1056,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [0U]
                                                   [2U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [0U]
                                                  [2U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1057,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1058,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1059,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [0U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1061,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1062,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1063,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1064,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1065,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1066,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1067,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1068,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 ((0x7c00U 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                        : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1069,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1070,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [0U][2U]),16);
        bufp->chgCData(oldp+1071,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1073,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1074,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [0U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1076,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1077,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [0U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1078,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1079,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1080,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1081,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1082,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1083,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1084,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1086,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1087,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1088,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1089,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1090,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1091,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1092,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1093,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1094,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1095,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1096,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [2U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1097,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1098,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [2U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1099,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1100,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [2U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [2U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1101,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1102,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1103,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1104,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1105,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1106,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1107,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1108,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1109,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1110,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1111,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1112,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1113,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [3U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1114,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1115,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1116,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1117,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1118,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1119,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [3U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1120,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1121,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1122,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1123,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1124,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1125,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1126,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1127,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1128,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1129,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1132,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1133,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1134,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1135,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [0U]
                                                         [3U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [0U]
                                                         [3U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1136,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [0U]
                                                   [3U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [0U]
                                                  [3U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1137,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1138,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1139,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [0U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1140,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1141,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1143,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1144,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1146,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1147,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1148,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 ((0x7c00U 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                        : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1149,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1150,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [0U][3U]),16);
        bufp->chgCData(oldp+1151,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1152,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1153,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1154,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [0U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1155,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1156,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1157,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [0U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1158,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1159,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1160,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1161,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1162,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1163,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1164,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1165,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1166,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1167,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1168,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1169,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1170,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1171,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1172,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1173,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1174,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1175,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1176,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [3U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1177,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1178,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [3U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1179,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1180,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [3U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [3U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1181,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1183,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1184,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1185,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1186,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1187,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1188,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1189,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1190,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1191,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1192,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1193,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1194,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1195,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1196,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1197,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1198,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1199,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [0U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1200,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1201,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1202,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1203,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1204,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1205,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1206,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1207,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1208,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1209,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1211,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1212,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1213,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1214,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1215,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [1U]
                                                         [0U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [1U]
                                                         [0U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1216,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [1U]
                                                   [0U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [1U]
                                                  [0U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1217,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1218,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1219,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [1U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1220,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1221,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1222,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1223,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1224,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1225,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1226,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1227,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1228,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 ((0x7c00U 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                        : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1229,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1230,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [1U][0U]),16);
        bufp->chgCData(oldp+1231,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1232,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1234,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [1U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1236,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1237,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [1U]
                                                 [0U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1238,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1239,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1240,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1241,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1242,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1243,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1244,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1245,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1246,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1247,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1248,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1249,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1250,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1251,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1252,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1253,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1254,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1255,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1256,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [0U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1257,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1258,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [0U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1259,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1260,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [0U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [0U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1261,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1262,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1264,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1265,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1266,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1267,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1268,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1269,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1270,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1271,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1272,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1273,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1274,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1275,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1277,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1278,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1279,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [1U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1280,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1281,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1282,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1283,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1284,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1285,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1286,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1287,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1288,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1289,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1290,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1292,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1293,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1294,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1295,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [1U]
                                                         [1U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [1U]
                                                         [1U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1296,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [1U]
                                                   [1U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [1U]
                                                  [1U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1297,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1298,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1299,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [1U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1300,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1301,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1303,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1304,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1305,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1306,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1307,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1308,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 ((0x7c00U 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                        : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1309,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1310,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [1U][1U]),16);
        bufp->chgCData(oldp+1311,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1312,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1313,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1314,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [1U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1315,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1316,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1317,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [1U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1318,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1319,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1320,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1321,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1322,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1323,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1324,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1325,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1326,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1328,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1329,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1330,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1331,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1332,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1333,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1335,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1336,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [1U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1337,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1338,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [1U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1339,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1340,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [1U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [1U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1341,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1342,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1343,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1344,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1345,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1346,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1347,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1348,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1349,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1350,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1351,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1352,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1353,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [2U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1354,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1355,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1358,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1359,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [2U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1360,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1361,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1362,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1363,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1364,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1365,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1366,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1367,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1368,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1369,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1370,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1371,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1372,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1373,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1374,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1375,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [1U]
                                                         [2U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [1U]
                                                         [2U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1376,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [1U]
                                                   [2U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [1U]
                                                  [2U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1377,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1378,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1379,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [1U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1381,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1382,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1383,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1384,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1385,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1386,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1387,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1388,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 ((0x7c00U 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                        : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1389,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1390,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [1U][2U]),16);
        bufp->chgCData(oldp+1391,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1392,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1393,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1394,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [1U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1395,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1396,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1397,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [1U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1398,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1399,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1400,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1401,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1402,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1403,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1404,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1406,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1407,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1408,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1409,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1410,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1411,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1412,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1413,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1414,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1415,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1416,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [2U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1417,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1418,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [2U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1419,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1420,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [2U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [2U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1421,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1422,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1423,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1424,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1425,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1426,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1427,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1428,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1429,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1430,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1431,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1432,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1433,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [3U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1434,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1435,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1436,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1437,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1438,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1439,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [3U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1440,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1441,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1442,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1443,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1444,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1445,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1446,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1447,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1448,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1449,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1450,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1451,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1452,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1453,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1454,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1455,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [1U]
                                                         [3U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [1U]
                                                         [3U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1456,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [1U]
                                                   [3U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [1U]
                                                  [3U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1457,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1458,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1459,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [1U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1460,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1461,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1462,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1463,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1464,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1465,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1466,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1467,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1468,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 ((0x7c00U 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                        : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1469,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1470,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [1U][3U]),16);
        bufp->chgCData(oldp+1471,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1472,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1473,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1474,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [1U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1475,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1476,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1477,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [1U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1478,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1479,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1480,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1481,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1482,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1483,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1484,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1485,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1486,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1488,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1489,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1490,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1491,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1492,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1493,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1494,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1495,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1496,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [3U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1497,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1498,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [3U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1499,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1500,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [3U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [3U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1501,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1502,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1503,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1504,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1505,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1506,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1507,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1508,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1509,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1510,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1511,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1512,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1513,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1514,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1515,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1516,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1517,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1518,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1519,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [0U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1520,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1521,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1522,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1523,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1524,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1525,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1526,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1527,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1528,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1529,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1530,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1531,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1532,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1533,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1534,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1535,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [2U]
                                                         [0U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [2U]
                                                         [0U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1536,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [2U]
                                                   [0U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [2U]
                                                  [0U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1537,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1538,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1539,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [2U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1540,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1541,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1542,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1543,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1544,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1545,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1546,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1547,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1548,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 ((0x7c00U 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                        : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1549,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1550,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [2U][0U]),16);
        bufp->chgCData(oldp+1551,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1552,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1553,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1554,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [2U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1555,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1556,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1557,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [2U]
                                                 [0U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1558,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1559,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1560,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1561,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1562,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1563,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1564,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1565,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1566,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1567,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1568,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1569,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1570,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1571,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1572,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1573,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1574,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1575,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1576,((0xffffU & (IData)(
                                                     vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [0U]))),16);
        bufp->chgBit(oldp+1577,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1578,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [0U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1579,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1580,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [0U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [0U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1581,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1582,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1583,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1584,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1585,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1586,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1587,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1588,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1589,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1590,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1591,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1592,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1593,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1594,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1595,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1596,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1597,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1598,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1599,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [1U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1600,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1601,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1602,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1603,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1604,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1605,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1606,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1607,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1608,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1609,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1610,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1611,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1612,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1613,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1614,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1615,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [2U]
                                                         [1U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [2U]
                                                         [1U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1616,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [2U]
                                                   [1U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [2U]
                                                  [1U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1617,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1618,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1619,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [2U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1620,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1621,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1622,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1623,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1624,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1625,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1626,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1627,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1628,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 ((0x7c00U 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                        : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1629,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1630,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [2U][1U]),16);
        bufp->chgCData(oldp+1631,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1632,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1633,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1634,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [2U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1635,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1636,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1637,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [2U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1638,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1639,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1640,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1641,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1642,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1643,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1644,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1645,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1646,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1647,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1648,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1649,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1650,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1651,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1652,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1653,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1654,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1655,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1656,((0xffffU & (IData)(
                                                     vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [1U]))),16);
        bufp->chgBit(oldp+1657,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1658,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [1U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1659,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1660,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [1U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [1U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1661,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1662,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1663,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1664,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1665,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1666,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1667,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1668,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1669,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1670,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1671,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1672,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1673,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [2U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1674,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1675,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1676,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1677,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1678,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1679,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [2U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1680,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1681,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1682,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1683,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1684,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1685,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1686,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1687,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1688,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1689,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1690,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1691,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1692,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1693,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1694,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1695,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [2U]
                                                         [2U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [2U]
                                                         [2U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1696,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [2U]
                                                   [2U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [2U]
                                                  [2U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1697,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1698,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1699,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [2U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1700,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1701,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1702,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1703,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1704,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1705,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1706,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1707,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1708,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 ((0x7c00U 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                        : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1709,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1710,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [2U][2U]),16);
        bufp->chgCData(oldp+1711,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1712,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1713,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1714,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [2U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1715,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1716,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1717,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [2U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1718,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1719,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1720,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1721,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1722,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1723,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1724,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1725,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1726,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1727,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1728,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1729,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1730,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1731,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1732,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1733,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1734,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1735,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1736,((0xffffU & (IData)(
                                                     vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [2U]))),16);
        bufp->chgBit(oldp+1737,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1738,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [2U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1739,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1740,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [2U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [2U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1741,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1742,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1743,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1744,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1745,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1746,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1747,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1748,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1749,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1750,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1751,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1752,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1753,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [3U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1754,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1755,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1756,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1757,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1758,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1759,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [3U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1760,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1761,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1762,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1763,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1764,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1765,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1766,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1767,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1768,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1769,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgCData(oldp+1770,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1771,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1772,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1773,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1774,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1775,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [2U]
                                                         [3U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                         [2U]
                                                         [3U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1776,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [2U]
                                                   [3U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [2U]
                                                  [3U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1777,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1778,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1779,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [2U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1780,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1781,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1782,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1783,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1784,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1785,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1786,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1787,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1788,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                  ? 0U
                                                  : 
                                                 ((0x7c00U 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                        : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1789,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1790,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [2U][3U]),16);
        bufp->chgCData(oldp+1791,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1792,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1793,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1794,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [2U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1795,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1796,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1797,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [2U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1798,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1799,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1800,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1801,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1802,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1803,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1804,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1805,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1806,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1807,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1808,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1809,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1810,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1811,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1812,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1813,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1814,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1815,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1816,((0xffffU & (IData)(
                                                     vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [3U]))),16);
        bufp->chgBit(oldp+1817,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1818,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [3U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1819,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1820,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [3U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [3U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1821,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1822,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1823,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1824,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgBit(oldp+1825,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__MAC_start));
        bufp->chgBit(oldp+1826,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgBit(oldp+1827,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__MAC_shift));
        bufp->chgBit(oldp+1828,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__out_fifo_shift));
        bufp->chgCData(oldp+1829,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__iteration[0]),4);
        bufp->chgCData(oldp+1830,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__iteration[1]),4);
        bufp->chgCData(oldp+1831,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__iteration[2]),4);
        bufp->chgSData(oldp+1832,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [3U][3U]),16);
        bufp->chgSData(oldp+1833,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1834,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1835,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [3U][2U]),16);
        bufp->chgSData(oldp+1836,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1837,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1838,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [3U][1U]),16);
        bufp->chgSData(oldp+1839,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1840,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1841,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [3U][0U]),16);
        bufp->chgSData(oldp+1842,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1843,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1844,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [2U][3U]),16);
        bufp->chgSData(oldp+1845,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1846,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1847,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [2U][2U]),16);
        bufp->chgSData(oldp+1848,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1849,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1850,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [2U][1U]),16);
        bufp->chgSData(oldp+1851,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1852,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1853,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [2U][0U]),16);
        bufp->chgSData(oldp+1854,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1855,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1856,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [1U][3U]),16);
        bufp->chgSData(oldp+1857,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1858,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1859,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [1U][2U]),16);
        bufp->chgSData(oldp+1860,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1861,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1862,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [1U][1U]),16);
        bufp->chgSData(oldp+1863,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1864,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1865,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [1U][0U]),16);
        bufp->chgSData(oldp+1866,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1867,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1868,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [0U][3U]),16);
        bufp->chgSData(oldp+1869,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1870,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1871,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [0U][2U]),16);
        bufp->chgSData(oldp+1872,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1873,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1874,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [0U][1U]),16);
        bufp->chgSData(oldp+1875,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgBit(oldp+1876,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1877,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [0U][0U]),16);
        bufp->chgSData(oldp+1878,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1879,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1880,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1881,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1882,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                      ? 0U
                                                      : 
                                                     ((0x7c00U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                          << 0xaU)) 
                                                      | (0x3ffU 
                                                         & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction) 
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1883,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1884,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1885,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1886,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1887,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1888,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1889,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1890,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+1891,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__row_out),2);
        bufp->chgBit(oldp+1892,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__out_en));
        bufp->chgCData(oldp+1893,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__row_out),2);
        bufp->chgQData(oldp+1894,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__array_output),64);
    }
    bufp->chgBit(oldp+1896,(vlSymsp->TOP__systolic_array_tb.__PVT__tb_clk));
    bufp->chgIData(oldp+1897,(vlSymsp->TOP__systolic_array_tb.__PVT__z),32);
    bufp->chgIData(oldp+1898,(vlSymsp->TOP__systolic_array_tb.__PVT__y),32);
    bufp->chgBit(oldp+1899,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.fulll));
}

void Vsystolic_array_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_cleanup\n"); );
    // Init
    Vsystolic_array_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array_tb___024root*>(voidSelf);
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
