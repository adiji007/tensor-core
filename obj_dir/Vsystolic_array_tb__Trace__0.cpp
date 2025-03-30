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
        bufp->chgIData(oldp+33,(vlSymsp->TOP__systolic_array_tb.__PVT__sysarr_dump_file),32);
        bufp->chgSData(oldp+34,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [0U][0U]),16);
        bufp->chgSData(oldp+35,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [0U][1U]),16);
        bufp->chgSData(oldp+36,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [0U][2U]),16);
        bufp->chgSData(oldp+37,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [0U][3U]),16);
        bufp->chgSData(oldp+38,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [1U][0U]),16);
        bufp->chgSData(oldp+39,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [1U][1U]),16);
        bufp->chgSData(oldp+40,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [1U][2U]),16);
        bufp->chgSData(oldp+41,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [1U][3U]),16);
        bufp->chgSData(oldp+42,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [2U][0U]),16);
        bufp->chgSData(oldp+43,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [2U][1U]),16);
        bufp->chgSData(oldp+44,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [2U][2U]),16);
        bufp->chgSData(oldp+45,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [2U][3U]),16);
        bufp->chgSData(oldp+46,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [3U][0U]),16);
        bufp->chgSData(oldp+47,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [3U][1U]),16);
        bufp->chgSData(oldp+48,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [3U][2U]),16);
        bufp->chgSData(oldp+49,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_weights
                                [3U][3U]),16);
        bufp->chgSData(oldp+50,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [0U][0U]),16);
        bufp->chgSData(oldp+51,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [0U][1U]),16);
        bufp->chgSData(oldp+52,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [0U][2U]),16);
        bufp->chgSData(oldp+53,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [0U][3U]),16);
        bufp->chgSData(oldp+54,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [1U][0U]),16);
        bufp->chgSData(oldp+55,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [1U][1U]),16);
        bufp->chgSData(oldp+56,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [1U][2U]),16);
        bufp->chgSData(oldp+57,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [1U][3U]),16);
        bufp->chgSData(oldp+58,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [2U][0U]),16);
        bufp->chgSData(oldp+59,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [2U][1U]),16);
        bufp->chgSData(oldp+60,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [2U][2U]),16);
        bufp->chgSData(oldp+61,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [2U][3U]),16);
        bufp->chgSData(oldp+62,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [3U][0U]),16);
        bufp->chgSData(oldp+63,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [3U][1U]),16);
        bufp->chgSData(oldp+64,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [3U][2U]),16);
        bufp->chgSData(oldp+65,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_inputs
                                [3U][3U]),16);
        bufp->chgSData(oldp+66,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [0U][0U]),16);
        bufp->chgSData(oldp+67,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [0U][1U]),16);
        bufp->chgSData(oldp+68,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [0U][2U]),16);
        bufp->chgSData(oldp+69,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [0U][3U]),16);
        bufp->chgSData(oldp+70,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [1U][0U]),16);
        bufp->chgSData(oldp+71,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [1U][1U]),16);
        bufp->chgSData(oldp+72,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [1U][2U]),16);
        bufp->chgSData(oldp+73,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [1U][3U]),16);
        bufp->chgSData(oldp+74,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [2U][0U]),16);
        bufp->chgSData(oldp+75,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [2U][1U]),16);
        bufp->chgSData(oldp+76,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [2U][2U]),16);
        bufp->chgSData(oldp+77,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [2U][3U]),16);
        bufp->chgSData(oldp+78,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [3U][0U]),16);
        bufp->chgSData(oldp+79,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [3U][1U]),16);
        bufp->chgSData(oldp+80,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [3U][2U]),16);
        bufp->chgSData(oldp+81,(vlSymsp->TOP__systolic_array_tb.__PVT__temp_partials
                                [3U][3U]),16);
        bufp->chgQData(oldp+82,(vlSymsp->TOP__systolic_array_tb.__PVT__m_weights[0]),64);
        bufp->chgQData(oldp+84,(vlSymsp->TOP__systolic_array_tb.__PVT__m_weights[1]),64);
        bufp->chgQData(oldp+86,(vlSymsp->TOP__systolic_array_tb.__PVT__m_weights[2]),64);
        bufp->chgQData(oldp+88,(vlSymsp->TOP__systolic_array_tb.__PVT__m_weights[3]),64);
        bufp->chgQData(oldp+90,(vlSymsp->TOP__systolic_array_tb.__PVT__m_inputs[0]),64);
        bufp->chgQData(oldp+92,(vlSymsp->TOP__systolic_array_tb.__PVT__m_inputs[1]),64);
        bufp->chgQData(oldp+94,(vlSymsp->TOP__systolic_array_tb.__PVT__m_inputs[2]),64);
        bufp->chgQData(oldp+96,(vlSymsp->TOP__systolic_array_tb.__PVT__m_inputs[3]),64);
        bufp->chgQData(oldp+98,(vlSymsp->TOP__systolic_array_tb.__PVT__m_partials[0]),64);
        bufp->chgQData(oldp+100,(vlSymsp->TOP__systolic_array_tb.__PVT__m_partials[1]),64);
        bufp->chgQData(oldp+102,(vlSymsp->TOP__systolic_array_tb.__PVT__m_partials[2]),64);
        bufp->chgQData(oldp+104,(vlSymsp->TOP__systolic_array_tb.__PVT__m_partials[3]),64);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__systolic_array_tb.__PVT__loaded_weights),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__systolic_array_tb.__PVT__get_matrices__Vstatic__unnamedblk1__DOT__iterations),32);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__weight_en));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__input_en));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__partial_en));
        bufp->chgCData(oldp+111,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__row_in_en),2);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__row_ps_en),2);
        bufp->chgQData(oldp+113,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__array_in),64);
        bufp->chgQData(oldp+115,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__array_in_partials),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgQData(oldp+117,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__top_input),64);
        bufp->chgQData(oldp+119,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights_input),64);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadi),4);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadw),4);
        bufp->chgCData(oldp+123,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadps),4);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgBit(oldp+132,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__start_flag));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__input_type));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__input_load));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__weight_load));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__partials_load));
        bufp->chgCData(oldp+137,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__input_row),2);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__weight_row),2);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__partials_row),2);
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadi) 
                                      >> 3U))));
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadi) 
                                      >> 2U))));
        bufp->chgBit(oldp+142,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadi) 
                                      >> 1U))));
        bufp->chgBit(oldp+143,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadi))));
        bufp->chgBit(oldp+144,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadps) 
                                      >> 3U))));
        bufp->chgBit(oldp+145,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadps) 
                                      >> 2U))));
        bufp->chgBit(oldp+146,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadps) 
                                      >> 1U))));
        bufp->chgBit(oldp+147,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__loadps))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgWData(oldp+148,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+152,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+153,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+157,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+158,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+162,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+163,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+167,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+168,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+172,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+173,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+177,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+178,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+182,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+183,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+187,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgBit(oldp+188,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+192,((1U & ((~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__input_loading)) 
                                      & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__partial_loading))))));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_MAC_start));
        bufp->chgCData(oldp+194,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_iteration[0]),4);
        bufp->chgCData(oldp+195,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_iteration[1]),4);
        bufp->chgCData(oldp+196,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_iteration[2]),4);
        bufp->chgCData(oldp+197,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_iteration_full),3);
        bufp->chgBit(oldp+198,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__input_loading));
        bufp->chgCData(oldp+199,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__curr_input_row),2);
        bufp->chgBit(oldp+200,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__partial_loading));
        bufp->chgCData(oldp+201,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__curr_partial_row),2);
        bufp->chgBit(oldp+202,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__output_loading));
        bufp->chgCData(oldp+203,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_in_data_loaded),4);
        bufp->chgCData(oldp+204,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_ps_data_loaded),4);
        bufp->chgBit(oldp+205,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_input_fully_loaded));
        bufp->chgCData(oldp+206,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_partial_fully_loaded),2);
        bufp->chgBit(oldp+207,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_first_mac));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__nxt_MAC_ready));
        bufp->chgIData(oldp+209,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__i),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__j),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__l),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__m),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__n),32);
        bufp->chgBit(oldp+214,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__add_start));
        bufp->chgCData(oldp+215,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__in_fifo_shift),4);
        bufp->chgCData(oldp+216,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__ps_fifo_shift),4);
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__in_fifo_shift) 
                                      >> 3U))));
        bufp->chgBit(oldp+218,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__in_fifo_shift) 
                                      >> 2U))));
        bufp->chgBit(oldp+219,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__in_fifo_shift) 
                                      >> 1U))));
        bufp->chgBit(oldp+220,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__in_fifo_shift))));
        bufp->chgBit(oldp+221,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__ps_fifo_shift) 
                                      >> 3U))));
        bufp->chgBit(oldp+222,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__ps_fifo_shift) 
                                      >> 2U))));
        bufp->chgBit(oldp+223,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__ps_fifo_shift) 
                                      >> 1U))));
        bufp->chgBit(oldp+224,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__ps_fifo_shift))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+225,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+226,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+227,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+228,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+229,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+230,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+231,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+232,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+233,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+234,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+235,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+236,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+237,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+238,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+239,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+240,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+241,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+242,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+243,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+244,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+245,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+246,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+247,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+248,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+249,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+250,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+251,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+252,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+253,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+254,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+255,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+256,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+257,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+258,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+259,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+260,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+261,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+262,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+263,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+264,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+265,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+266,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+267,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+268,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+269,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+270,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+271,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+272,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__nxt_MAC_outputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+273,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs[0]),16);
        bufp->chgSData(oldp+274,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs[1]),16);
        bufp->chgSData(oldp+275,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs[2]),16);
        bufp->chgSData(oldp+276,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs[3]),16);
        bufp->chgQData(oldp+277,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights[0]),64);
        bufp->chgQData(oldp+279,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights[1]),64);
        bufp->chgQData(oldp+281,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights[2]),64);
        bufp->chgQData(oldp+283,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights[3]),64);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__z),32);
        bufp->chgIData(oldp+286,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__y),32);
        bufp->chgWData(oldp+287,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__current_out),256);
        bufp->chgWData(oldp+295,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+299,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+300,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+304,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+305,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+309,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+310,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+314,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+315,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+319,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+320,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+324,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+325,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+329,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+330,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+334,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgBit(oldp+335,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+340,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                          [0U] >> 0xfU)
                                       : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][0U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+341,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][0U] 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                       [0U] >> 0xfU)))));
        bufp->chgSData(oldp+342,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+343,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+344,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+345,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+346,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [3U]
                                               [0U] 
                                               >> 0xaU)
                                            : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                               [0U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+347,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+348,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                 ? (0U != ((((0U != 
                                              (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [0U] 
                                                  >> 0xaU))) 
                                             << 0xcU) 
                                            | (0xffcU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [0U] 
                                                  << 2U))) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff))) 
                                              - (IData)(1U))))
                                 : (0U != ((((0U != 
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
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff))) 
                                              - (IData)(1U)))))));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_round_loss_s2_in));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+352,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+353,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+354,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+356,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+357,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_round_loss_s3_in));
        bufp->chgSData(oldp+358,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in) 
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
                                                       & ((1U 
                                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                               >> 1U) 
                                                              & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                    >> 2U))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                            >> 2U))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                           >> 2U)))))))),16);
        bufp->chgCData(oldp+359,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                   | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                        >> 1U) 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                           | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                          | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             >> 2U))) 
                                                      | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+360,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                 [0U]),16);
        bufp->chgSData(oldp+361,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][0U]),16);
        bufp->chgCData(oldp+362,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+363,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+364,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                           [0U] >> 0xaU))),6);
        bufp->chgCData(oldp+365,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [3U][0U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+366,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+367,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+368,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [3U]
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+369,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+370,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+371,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+372,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+373,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                      | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                           >> 1U) & 
                                          (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                              >> 2U))) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf))))));
        bufp->chgCData(oldp+374,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+375,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+376,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+377,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+378,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+380,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+381,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+382,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+383,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+384,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((1U 
                                                      & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                          >> 1U) 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                            | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                               >> 2U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                      >> 2U)))))),16);
        bufp->chgBit(oldp+385,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                       >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                    >> 2U))))));
        bufp->chgBit(oldp+386,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                      >> 1U))));
        bufp->chgBit(oldp+387,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this))));
        bufp->chgSData(oldp+388,((0x3ffU & ((1U & (
                                                   ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                    >> 1U) 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                         >> 2U))))
                                             ? ((IData)(1U) 
                                                + ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                   >> 2U))
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+389,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+390,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+394,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                          [1U] >> 0xfU)
                                       : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][1U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+395,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][1U] 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                       [1U] >> 0xfU)))));
        bufp->chgSData(oldp+396,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+397,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+398,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+399,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+400,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [3U]
                                               [1U] 
                                               >> 0xaU)
                                            : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                               [1U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+401,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+402,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                 ? (0U != ((((0U != 
                                              (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [1U] 
                                                  >> 0xaU))) 
                                             << 0xcU) 
                                            | (0xffcU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [1U] 
                                                  << 2U))) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff))) 
                                              - (IData)(1U))))
                                 : (0U != ((((0U != 
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
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff))) 
                                              - (IData)(1U)))))));
        bufp->chgBit(oldp+403,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_round_loss_s2_in));
        bufp->chgBit(oldp+404,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+405,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+406,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+407,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+408,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+410,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+411,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_round_loss_s3_in));
        bufp->chgSData(oldp+412,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in) 
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
                                                       & ((1U 
                                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                               >> 1U) 
                                                              & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                    >> 2U))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                            >> 2U))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                           >> 2U)))))))),16);
        bufp->chgCData(oldp+413,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                   | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                        >> 1U) 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                           | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                          | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             >> 2U))) 
                                                      | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+414,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                 [1U]),16);
        bufp->chgSData(oldp+415,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][1U]),16);
        bufp->chgCData(oldp+416,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+417,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+418,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                           [1U] >> 0xaU))),6);
        bufp->chgCData(oldp+419,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [3U][1U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+420,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+421,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                [1U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+422,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [3U]
                                                [1U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+423,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+424,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+425,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+426,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+427,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                      | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                           >> 1U) & 
                                          (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                              >> 2U))) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf))))));
        bufp->chgCData(oldp+428,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+429,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+430,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+431,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+432,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+434,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+435,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+436,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+437,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+438,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((1U 
                                                      & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                          >> 1U) 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                            | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                               >> 2U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                      >> 2U)))))),16);
        bufp->chgBit(oldp+439,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                       >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                    >> 2U))))));
        bufp->chgBit(oldp+440,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                      >> 1U))));
        bufp->chgBit(oldp+441,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this))));
        bufp->chgSData(oldp+442,((0x3ffU & ((1U & (
                                                   ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                    >> 1U) 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                         >> 2U))))
                                             ? ((IData)(1U) 
                                                + ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                   >> 2U))
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+443,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+444,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+447,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+448,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                          [2U] >> 0xfU)
                                       : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][2U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+449,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][2U] 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                       [2U] >> 0xfU)))));
        bufp->chgSData(oldp+450,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+451,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+452,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+453,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+454,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [3U]
                                               [2U] 
                                               >> 0xaU)
                                            : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                               [2U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+455,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+456,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                 ? (0U != ((((0U != 
                                              (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [2U] 
                                                  >> 0xaU))) 
                                             << 0xcU) 
                                            | (0xffcU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [2U] 
                                                  << 2U))) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff))) 
                                              - (IData)(1U))))
                                 : (0U != ((((0U != 
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
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff))) 
                                              - (IData)(1U)))))));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_round_loss_s2_in));
        bufp->chgBit(oldp+458,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+459,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+460,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+461,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+462,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+464,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+465,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_round_loss_s3_in));
        bufp->chgSData(oldp+466,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in) 
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
                                                       & ((1U 
                                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                               >> 1U) 
                                                              & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                    >> 2U))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                            >> 2U))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                           >> 2U)))))))),16);
        bufp->chgCData(oldp+467,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                   | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                        >> 1U) 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                           | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                          | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             >> 2U))) 
                                                      | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+468,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                 [2U]),16);
        bufp->chgSData(oldp+469,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][2U]),16);
        bufp->chgCData(oldp+470,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+471,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+472,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                           [2U] >> 0xaU))),6);
        bufp->chgCData(oldp+473,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [3U][2U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+474,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+475,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                [2U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+476,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [3U]
                                                [2U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+477,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+478,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+479,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+480,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+481,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                      | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                           >> 1U) & 
                                          (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                              >> 2U))) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf))))));
        bufp->chgCData(oldp+482,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+483,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+484,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+485,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+486,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+487,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+488,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+489,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+490,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+491,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+492,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((1U 
                                                      & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                          >> 1U) 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                            | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                               >> 2U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                      >> 2U)))))),16);
        bufp->chgBit(oldp+493,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                       >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                    >> 2U))))));
        bufp->chgBit(oldp+494,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                      >> 1U))));
        bufp->chgBit(oldp+495,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this))));
        bufp->chgSData(oldp+496,((0x3ffU & ((1U & (
                                                   ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                    >> 1U) 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                         >> 2U))))
                                             ? ((IData)(1U) 
                                                + ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                   >> 2U))
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+497,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+499,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+500,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+501,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+502,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                          [3U] >> 0xfU)
                                       : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][3U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+503,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [3U][3U] 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                       [3U] >> 0xfU)))));
        bufp->chgSData(oldp+504,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+505,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+506,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+507,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+508,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [3U]
                                               [3U] 
                                               >> 0xaU)
                                            : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                               [3U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+509,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+510,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                 ? (0U != ((((0U != 
                                              (0x1fU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [3U] 
                                                  >> 0xaU))) 
                                             << 0xcU) 
                                            | (0xffcU 
                                               & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                  [3U] 
                                                  << 2U))) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff))) 
                                              - (IData)(1U))))
                                 : (0U != ((((0U != 
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
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff))) 
                                              - (IData)(1U)))))));
        bufp->chgBit(oldp+511,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_round_loss_s2_in));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+514,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+515,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+516,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+517,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+518,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+519,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_round_loss_s3_in));
        bufp->chgSData(oldp+520,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in) 
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
                                                       & ((1U 
                                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                               >> 1U) 
                                                              & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                    >> 2U))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                            >> 2U))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                           >> 2U)))))))),16);
        bufp->chgCData(oldp+521,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                   | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                        >> 1U) 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                           | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                          | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             >> 2U))) 
                                                      | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+522,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                 [3U]),16);
        bufp->chgSData(oldp+523,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [3U][3U]),16);
        bufp->chgCData(oldp+524,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+525,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+526,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                           [3U] >> 0xaU))),6);
        bufp->chgCData(oldp+527,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [3U][3U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+528,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+529,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__ps_add_inputs
                                                [3U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+530,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [3U]
                                                [3U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+531,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+532,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+533,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+534,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+535,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                      | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                           >> 1U) & 
                                          (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                              >> 2U))) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf))))));
        bufp->chgCData(oldp+536,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+537,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+538,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+539,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+540,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+541,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+542,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+543,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+544,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+545,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+546,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((1U 
                                                      & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                          >> 1U) 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                            | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                               >> 2U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                      >> 2U)))))),16);
        bufp->chgBit(oldp+547,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                       >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                    >> 2U))))));
        bufp->chgBit(oldp+548,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                      >> 1U))));
        bufp->chgBit(oldp+549,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this))));
        bufp->chgSData(oldp+550,((0x3ffU & ((1U & (
                                                   ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                    >> 1U) 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                         >> 2U))))
                                             ? ((IData)(1U) 
                                                + ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                   >> 2U))
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                >> 2U)))),10);
        bufp->chgQData(oldp+551,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+553,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+555,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+557,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+559,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+561,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+563,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+565,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgBit(oldp+567,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__drained));
        bufp->chgCData(oldp+568,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__iteration[0]),4);
        bufp->chgCData(oldp+569,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__iteration[1]),4);
        bufp->chgCData(oldp+570,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__iteration[2]),4);
        bufp->chgCData(oldp+571,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__iteration_full),3);
        bufp->chgCData(oldp+572,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__in_data_loaded),4);
        bufp->chgCData(oldp+573,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__ps_data_loaded),4);
        bufp->chgBit(oldp+574,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__input_fully_loaded));
        bufp->chgCData(oldp+575,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__partial_fully_loaded),2);
        bufp->chgBit(oldp+576,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__first_mac));
        bufp->chgBit(oldp+577,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.__PVT__MAC_ready));
        bufp->chgSData(oldp+578,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+579,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+580,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+581,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+582,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+583,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+585,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+586,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [0U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+587,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+588,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+589,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+590,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+591,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+592,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [0U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+593,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+594,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+595,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+596,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+597,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+599,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+600,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+601,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+602,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+603,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+604,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+605,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                             >> 2U) 
                                            + (1U & 
                                               (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                 >> 1U) 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                         >> 2U)))))))),10);
        bufp->chgCData(oldp+606,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+607,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+609,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+610,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+611,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+612,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+613,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+614,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+615,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+616,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+617,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                             << 0xcU) 
                                            | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                              - (IData)(1U)))))));
        bufp->chgBit(oldp+618,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+619,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+621,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+622,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+623,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+624,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+625,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+626,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+627,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                       & ((1U 
                                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                               >> 1U) 
                                                              & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    >> 2U))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            >> 2U))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 2U)))))))),16);
        bufp->chgCData(oldp+628,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                   | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 1U) 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                          | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))) 
                                                      | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgCData(oldp+629,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+630,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+631,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+632,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+633,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+634,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+635,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+636,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+637,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+638,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                      | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                           >> 1U) & 
                                          (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                              >> 2U))) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+639,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+640,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+641,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+642,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+643,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+645,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+646,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+647,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+648,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+649,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((1U 
                                                      & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 1U) 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                            | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                               >> 2U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                      >> 2U)))))),16);
        bufp->chgBit(oldp+650,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                    >> 2U))))));
        bufp->chgBit(oldp+651,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                      >> 1U))));
        bufp->chgBit(oldp+652,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+653,((0x3ffU & ((1U & (
                                                   ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                    >> 1U) 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U))))
                                             ? ((IData)(1U) 
                                                + ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   >> 2U))
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 2U)))),10);
        bufp->chgSData(oldp+654,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [0U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+655,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+656,((0U != (0x1fU & (IData)(
                                                       (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                        [0U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+657,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+658,((((0U != (0x1fU & (IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [0U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [0U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+659,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+660,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+661,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+662,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+663,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+664,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+665,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+666,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+667,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+668,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+669,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+670,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+671,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+672,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+674,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+675,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+676,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+677,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [1U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+678,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+679,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+680,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+681,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+682,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+684,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+685,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+686,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+687,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+688,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+689,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+690,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                             >> 2U) 
                                            + (1U & 
                                               (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                 >> 1U) 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                         >> 2U)))))))),10);
        bufp->chgCData(oldp+691,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+692,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+693,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+694,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+695,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+696,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+697,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+698,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+699,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+700,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+701,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+702,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                             << 0xcU) 
                                            | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                              - (IData)(1U)))))));
        bufp->chgBit(oldp+703,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+704,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+705,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+706,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+707,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+708,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+709,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+710,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+711,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+712,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                       & ((1U 
                                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                               >> 1U) 
                                                              & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    >> 2U))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            >> 2U))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 2U)))))))),16);
        bufp->chgCData(oldp+713,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                   | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 1U) 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                          | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))) 
                                                      | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgCData(oldp+714,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+715,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+716,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+717,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+718,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+719,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+720,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+721,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+722,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+723,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                      | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                           >> 1U) & 
                                          (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                              >> 2U))) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+724,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+725,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+726,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+727,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+728,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+729,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+730,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+732,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+733,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+734,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((1U 
                                                      & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 1U) 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                            | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                               >> 2U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                      >> 2U)))))),16);
        bufp->chgBit(oldp+735,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                    >> 2U))))));
        bufp->chgBit(oldp+736,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                      >> 1U))));
        bufp->chgBit(oldp+737,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+738,((0x3ffU & ((1U & (
                                                   ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                    >> 1U) 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U))))
                                             ? ((IData)(1U) 
                                                + ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   >> 2U))
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 2U)))),10);
        bufp->chgSData(oldp+739,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [1U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+740,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+741,((0U != (0x1fU & (IData)(
                                                       (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                        [1U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+742,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+743,((((0U != (0x1fU & (IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [1U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [1U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+744,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+745,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+746,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+747,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+748,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+749,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+750,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+751,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+754,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+755,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+756,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [2U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+757,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+758,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+759,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+760,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+761,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+762,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [2U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+763,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+764,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+765,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+766,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+767,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+768,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+769,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+770,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+771,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+772,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+773,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+774,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+775,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                             >> 2U) 
                                            + (1U & 
                                               (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                 >> 1U) 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                         >> 2U)))))))),10);
        bufp->chgCData(oldp+776,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+777,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+778,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+779,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+780,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+781,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+782,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+783,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+784,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+785,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+786,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+787,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                             << 0xcU) 
                                            | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                              - (IData)(1U)))))));
        bufp->chgBit(oldp+788,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+791,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+792,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+793,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+794,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+795,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+796,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+797,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                       & ((1U 
                                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                               >> 1U) 
                                                              & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    >> 2U))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            >> 2U))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 2U)))))))),16);
        bufp->chgCData(oldp+798,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                   | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 1U) 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                          | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))) 
                                                      | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgCData(oldp+799,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+800,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+801,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+802,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+803,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+804,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+805,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+806,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+807,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+808,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                      | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                           >> 1U) & 
                                          (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                              >> 2U))) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+809,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+810,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+811,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+812,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+813,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+814,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+815,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+816,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+817,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+818,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+819,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((1U 
                                                      & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 1U) 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                            | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                               >> 2U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                      >> 2U)))))),16);
        bufp->chgBit(oldp+820,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                    >> 2U))))));
        bufp->chgBit(oldp+821,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                      >> 1U))));
        bufp->chgBit(oldp+822,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+823,((0x3ffU & ((1U & (
                                                   ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                    >> 1U) 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U))))
                                             ? ((IData)(1U) 
                                                + ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   >> 2U))
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 2U)))),10);
        bufp->chgSData(oldp+824,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [2U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+825,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+826,((0U != (0x1fU & (IData)(
                                                       (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                        [2U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+827,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+828,((((0U != (0x1fU & (IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [2U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [2U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+829,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+830,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+831,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+832,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+833,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+834,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+835,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+836,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+837,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+839,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+840,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+841,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [3U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+842,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+843,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+844,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+845,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+846,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+847,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [3U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+849,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+850,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+851,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+852,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+853,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+854,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+855,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+856,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+857,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+858,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+859,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+860,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                             >> 2U) 
                                            + (1U & 
                                               (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                 >> 1U) 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                         >> 2U)))))))),10);
        bufp->chgCData(oldp+861,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+862,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+863,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+864,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+865,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+866,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+867,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+868,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+869,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+870,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+872,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                             << 0xcU) 
                                            | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                              - (IData)(1U)))))));
        bufp->chgBit(oldp+873,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+874,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+875,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+876,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+877,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+878,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+879,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+880,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+881,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+882,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                       & ((1U 
                                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                               >> 1U) 
                                                              & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    >> 2U))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            >> 2U))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 2U)))))))),16);
        bufp->chgCData(oldp+883,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                   | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 1U) 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                          | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))) 
                                                      | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgCData(oldp+884,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+885,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+886,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+888,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+889,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+890,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+891,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+892,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+893,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                      | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                           >> 1U) & 
                                          (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                              >> 2U))) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+894,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+895,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+896,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+897,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+898,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+899,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+900,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+901,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+903,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+904,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((1U 
                                                      & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 1U) 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                            | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                               >> 2U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                      >> 2U)))))),16);
        bufp->chgBit(oldp+905,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                    >> 2U))))));
        bufp->chgBit(oldp+906,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                      >> 1U))));
        bufp->chgBit(oldp+907,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+908,((0x3ffU & ((1U & (
                                                   ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                    >> 1U) 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U))))
                                             ? ((IData)(1U) 
                                                + ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   >> 2U))
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 2U)))),10);
        bufp->chgSData(oldp+909,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [3U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+910,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+911,((0U != (0x1fU & (IData)(
                                                       (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                        [3U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+912,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+913,((((0U != (0x1fU & (IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [3U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [3U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+914,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+915,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+916,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+917,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+918,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+919,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+920,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+921,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+922,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+923,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+924,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+925,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+926,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+927,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+928,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+929,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+930,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+931,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+932,((0x1fU & (IData)((
                                                   vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                   [0U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+933,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+934,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+935,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+936,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+937,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+938,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+939,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+940,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+941,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+942,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+943,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+944,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+945,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                             >> 2U) 
                                            + (1U & 
                                               (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                 >> 1U) 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                         >> 2U)))))))),10);
        bufp->chgCData(oldp+946,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+947,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+948,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+949,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                       [0U][0U] >> 0xfU)))));
        bufp->chgBit(oldp+950,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                          [0U][0U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+951,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+952,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+953,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+954,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+955,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                               [0U]
                                               [0U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+956,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+957,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                 ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                             << 0xcU) 
                                            | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))) 
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                              - (IData)(1U))))
                                 : (0U != ((((0U != 
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
                                           & (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                              - (IData)(1U)))))));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+959,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+960,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+961,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+962,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+963,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+964,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+965,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+966,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+967,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                       & ((1U 
                                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                               >> 1U) 
                                                              & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    >> 2U))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            >> 2U))
                                                           : 
                                                          ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 2U)))))))),16);
        bufp->chgCData(oldp+968,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                   | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 1U) 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                          | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))) 
                                                      | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+969,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                 [0U][0U]),16);
        bufp->chgCData(oldp+970,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+971,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+972,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+973,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][0U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+974,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+975,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+976,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [0U]
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+977,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+978,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+979,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+980,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+981,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                      | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                           >> 1U) & 
                                          (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                              >> 2U))) 
                                         | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+982,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+983,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+984,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+985,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+986,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+987,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+988,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+989,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+990,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+991,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+992,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((1U 
                                                      & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 1U) 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                            | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                               >> 2U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                      >> 2U)))))),16);
        bufp->chgBit(oldp+993,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                    >> 2U))))));
        bufp->chgBit(oldp+994,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                      >> 1U))));
        bufp->chgBit(oldp+995,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+996,((0x3ffU & ((1U & (
                                                   ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                    >> 1U) 
                                                   & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U))))
                                             ? ((IData)(1U) 
                                                + ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   >> 2U))
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 2U)))),10);
        bufp->chgSData(oldp+997,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [0U] 
                                                     >> 0x20U)))),16);
        bufp->chgBit(oldp+998,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+999,((0U != (0x1fU & (IData)(
                                                       (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                        [0U] 
                                                        >> 0x2aU))))));
        bufp->chgSData(oldp+1000,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1001,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [0U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [0U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1002,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1003,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1006,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1007,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1008,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1009,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1010,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1011,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1013,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1014,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [1U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1015,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1016,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1017,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1018,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1019,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1020,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [1U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1021,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1022,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1023,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1024,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1025,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1026,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1027,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1028,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1029,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1030,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1031,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1032,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1033,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1034,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1035,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1037,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1038,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1039,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
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
        bufp->chgSData(oldp+1040,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                   [0U]
                                                   [1U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                  [0U]
                                                  [1U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1041,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1042,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1043,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [0U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1044,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1045,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1046,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1047,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1048,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1049,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1050,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1052,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1053,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1055,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1056,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1057,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [0U][1U]),16);
        bufp->chgCData(oldp+1058,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1059,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1061,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [0U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1062,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1063,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1064,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [0U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1065,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1066,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1067,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1068,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1069,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1070,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1071,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1072,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1073,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1074,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1075,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1079,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1080,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1081,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1082,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1083,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1084,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1085,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [1U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1086,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1087,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [1U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1088,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1089,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [1U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [1U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1090,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1091,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1092,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1093,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1094,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1095,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1096,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1097,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1098,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1099,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1100,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1101,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1102,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [2U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1103,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1104,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1105,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1106,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1107,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1108,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [2U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1109,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1110,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1111,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1112,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1113,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1114,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1115,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1116,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1117,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1118,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1119,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1120,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1121,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1122,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1124,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1125,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1126,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1127,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1128,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1129,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1130,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1131,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [0U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1132,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1133,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1134,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1137,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1138,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1139,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1141,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1143,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1144,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1145,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [0U][2U]),16);
        bufp->chgCData(oldp+1146,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1147,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1148,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1149,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [0U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1150,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1151,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1152,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [0U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1153,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1154,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1155,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1156,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1157,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1158,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1159,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1160,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1161,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1162,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1163,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1164,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1165,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1166,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1167,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1168,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1169,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1170,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1171,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1172,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1173,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [2U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1174,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1175,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [2U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1176,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1177,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [2U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [2U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1178,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1179,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1181,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1182,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1183,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1184,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1185,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1186,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1187,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1188,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1189,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1190,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [3U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1191,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1192,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1193,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1194,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1195,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1196,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [3U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1197,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1198,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1199,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1200,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1201,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1202,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1203,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1204,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1205,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1206,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1207,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1208,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1209,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1211,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1212,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1213,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1214,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1215,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1216,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1217,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1218,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1219,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [0U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1220,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1221,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1222,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1223,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1224,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1225,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1226,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1227,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1228,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1229,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1230,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1231,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1232,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1233,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [0U][3U]),16);
        bufp->chgCData(oldp+1234,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1235,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1236,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1237,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [0U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1238,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1239,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1240,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [0U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1241,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1242,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1243,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1244,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1245,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1246,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1247,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1248,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1249,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1250,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1251,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1252,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1253,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1254,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1255,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1256,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1257,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1258,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1259,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1260,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1261,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [3U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1262,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1263,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [3U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1264,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1265,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [3U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [3U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1266,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1267,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1268,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1269,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1270,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1271,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1272,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1273,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1274,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1275,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1277,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1278,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1279,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1280,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1282,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1283,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1284,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [0U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1285,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1287,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1288,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1289,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1291,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1292,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1293,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1294,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1295,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1296,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1297,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1298,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1299,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1300,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1301,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1302,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1303,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1304,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1305,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1306,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1307,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [1U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1308,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1309,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1310,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1311,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1312,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1313,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1314,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1315,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1316,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1317,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1318,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1319,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1320,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1321,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [1U][0U]),16);
        bufp->chgCData(oldp+1322,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1324,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1325,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [1U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1327,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1328,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [1U]
                                                 [0U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1329,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1330,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1331,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1332,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1333,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1334,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1335,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1336,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1337,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1338,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1340,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1341,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1342,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1343,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1344,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1345,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1346,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1347,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1348,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1349,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [0U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1350,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1351,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [0U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1352,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1353,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [0U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [0U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1354,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1355,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1356,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1357,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1358,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1359,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1360,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1361,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1362,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1363,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1364,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1365,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1366,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1367,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1368,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1371,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1372,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [1U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1373,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1374,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1375,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1376,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1377,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1378,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1379,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1381,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1382,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1383,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1384,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1385,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1386,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1387,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1388,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1389,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1390,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1391,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1392,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1393,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1394,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1395,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [1U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1396,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1397,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1398,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1399,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1400,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1401,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1402,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1403,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1404,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1406,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1407,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1408,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1409,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [1U][1U]),16);
        bufp->chgCData(oldp+1410,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1411,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1412,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1413,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [1U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1414,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1415,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1416,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [1U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1417,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1418,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1419,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1420,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1421,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1422,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1423,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1424,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1425,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1426,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1427,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1428,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1429,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1430,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1431,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1432,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1433,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1434,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1435,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1436,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1437,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [1U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1438,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1439,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [1U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1440,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1441,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [1U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [1U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1442,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1443,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1444,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1445,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1446,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1447,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1448,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1449,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1450,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1451,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1452,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1453,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1454,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [2U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1455,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1456,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1457,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1458,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1459,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1460,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [2U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1461,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1462,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1463,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1464,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1465,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1466,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1467,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1468,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1469,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1470,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1471,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1472,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1473,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1474,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1475,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1476,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1477,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1478,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1479,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1480,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1481,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1482,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1483,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [1U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1484,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1485,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1486,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1488,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1489,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1490,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1491,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1492,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1493,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1494,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1495,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1496,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1497,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [1U][2U]),16);
        bufp->chgCData(oldp+1498,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1499,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1500,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1501,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [1U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1502,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1503,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1504,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [1U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1505,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1506,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1507,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1508,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1509,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1510,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1511,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1512,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1513,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1514,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1515,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1516,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1517,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1518,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1519,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1520,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1521,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1522,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1523,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1524,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1525,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [2U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1526,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1527,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [2U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1528,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1529,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [2U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [2U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1530,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1531,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1532,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1533,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1534,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1535,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1536,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1537,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1538,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1539,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1540,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1541,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1542,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [3U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1543,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1544,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1545,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1546,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1547,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1548,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [3U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1549,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1550,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1551,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1552,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1553,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1554,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1555,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1556,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1557,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1558,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1559,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1560,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1561,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1562,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1563,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1564,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1565,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1566,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1567,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1568,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1569,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1570,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1571,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [1U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1572,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1573,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1574,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1575,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1576,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1577,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1578,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1579,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1580,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1581,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1582,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1583,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1584,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1585,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [1U][3U]),16);
        bufp->chgCData(oldp+1586,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1587,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1588,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1589,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [1U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1590,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1591,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1592,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [1U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1593,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1594,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1595,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1596,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1597,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1598,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1599,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1600,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1601,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1602,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1603,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1604,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1605,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1606,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1607,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1608,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1609,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1610,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1611,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1612,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1613,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                      [3U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1614,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1615,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [3U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1616,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1617,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [3U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                            [3U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1618,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1619,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1620,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1621,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1622,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1623,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1624,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1625,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1626,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1627,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1628,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1629,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1630,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1631,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1632,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1633,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1634,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1635,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1636,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [0U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1637,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1638,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1639,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1640,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1641,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1642,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1643,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1644,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1645,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1646,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1647,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1648,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1649,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1650,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1651,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1652,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1653,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1654,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1655,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1656,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1657,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1658,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1659,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [2U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1660,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1661,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1662,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1663,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1664,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1665,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1666,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1667,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1668,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1669,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1670,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1671,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1672,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1673,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [2U][0U]),16);
        bufp->chgCData(oldp+1674,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1675,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1676,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1677,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [2U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1678,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1679,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1680,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [2U]
                                                 [0U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1681,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1682,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1683,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1684,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1685,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1686,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1687,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1688,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1689,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1690,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1691,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1692,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1693,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1694,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1695,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1696,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1697,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1698,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1699,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1700,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1701,((0xffffU & (IData)(
                                                     vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [0U]))),16);
        bufp->chgBit(oldp+1702,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1703,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [0U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1704,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1705,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [0U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [0U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1706,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1707,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1708,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1709,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1710,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1711,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1712,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1713,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1714,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1715,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1716,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1717,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1718,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1719,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1720,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1721,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1722,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1723,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1724,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [1U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1725,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1726,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1727,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1728,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1729,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1730,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1731,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1732,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1733,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1734,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1735,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1736,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1737,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1738,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1739,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1740,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1741,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1742,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1743,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1744,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1745,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1746,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1747,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [2U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1748,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1749,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1750,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1751,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1752,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1753,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1754,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1755,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1756,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1757,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1758,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1759,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1760,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1761,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [2U][1U]),16);
        bufp->chgCData(oldp+1762,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1763,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1764,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1765,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [2U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1766,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1767,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1768,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [2U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1769,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1770,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1771,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1772,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1773,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1774,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1775,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1776,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1777,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1778,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1779,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1780,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1781,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1782,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1783,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1784,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1785,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1786,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1787,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1788,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1789,((0xffffU & (IData)(
                                                     vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [1U]))),16);
        bufp->chgBit(oldp+1790,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1791,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [1U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1792,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1793,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [1U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [1U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1794,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1795,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1796,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1797,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1798,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1799,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1800,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1801,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1802,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1803,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1804,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1805,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1806,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [2U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1807,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1808,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1809,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1810,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1811,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1812,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [2U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1813,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1814,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1815,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1816,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1817,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1818,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1819,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1820,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1821,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1822,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1823,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1824,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1825,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1826,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1827,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1828,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1829,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1830,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1831,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1832,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1833,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1834,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1835,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [2U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1836,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1837,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1838,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1839,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1840,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1841,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1842,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1843,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1844,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1845,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1846,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1847,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1848,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1849,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [2U][2U]),16);
        bufp->chgCData(oldp+1850,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1851,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1852,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1853,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [2U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1854,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1855,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1856,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [2U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1857,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1858,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1859,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1860,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1861,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1862,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1863,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1864,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1865,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1866,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1867,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1868,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1869,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1870,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1871,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1872,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1873,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1874,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1875,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1876,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1877,((0xffffU & (IData)(
                                                     vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [2U]))),16);
        bufp->chgBit(oldp+1878,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1879,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [2U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1880,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1881,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [2U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [2U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1882,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1883,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1884,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1885,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1886,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1887,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1888,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1889,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1890,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1891,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1892,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1893,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1894,((1U & (IData)((vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                               [3U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1895,((1U & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1896,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1897,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1898,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1899,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1900,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                    [3U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1901,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1902,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1903,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1904,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1905,((0U != (0xfffU & vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b))));
        bufp->chgBit(oldp+1906,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_round_loss_s2));
        bufp->chgBit(oldp+1907,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1908,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1909,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1910,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1911,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1912,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product),12);
        bufp->chgSData(oldp+1913,((0x3ffU & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                              >> 2U) 
                                             + (1U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                      | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_round_loss_s2) 
                                                         | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_frac_product) 
                                                            >> 2U)))))))),10);
        bufp->chgCData(oldp+1914,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1915,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1916,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1917,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1918,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1919,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1920,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
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
        bufp->chgSData(oldp+1921,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1922,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1923,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                [2U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1924,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1925,(((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                  ? (0U != ((((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                              << 0xcU) 
                                             | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                   << 2U))) 
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U))))
                                  : (0U != ((((0U != 
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
                                            & (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))) 
                                               - (IData)(1U)))))));
        bufp->chgBit(oldp+1926,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s2_in));
        bufp->chgBit(oldp+1927,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1928,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1929,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1930,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1931,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1932,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1933,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgBit(oldp+1934,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in));
        bufp->chgSData(oldp+1935,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
                                                     & ((1U 
                                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 1U) 
                                                            & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                               | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                  >> 2U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                          >> 2U))
                                                         : 
                                                        ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 2U)))))))),16);
        bufp->chgCData(oldp+1936,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                    | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                         >> 1U) 
                                                        & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                            | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                           | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))) 
                                                       | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))))),5);
        bufp->chgSData(oldp+1937,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                  [2U][3U]),16);
        bufp->chgCData(oldp+1938,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1939,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1940,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1941,((0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                            [2U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1942,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1943,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1944,((0U != (0x1fU & (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_outputs
                                                 [2U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1945,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1946,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1947,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1948,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1949,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                       | ((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                            >> 1U) 
                                           & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                               | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U))) 
                                          | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))))));
        bufp->chgCData(oldp+1950,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1951,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1952,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1953,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1954,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1955,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1956,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1957,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1958,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1959,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1960,((((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((1U 
                                                       & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                           >> 1U) 
                                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                >> 2U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                        >> 2U))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                       >> 2U)))))),16);
        bufp->chgBit(oldp+1961,((1U & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1962,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                       >> 1U))));
        bufp->chgBit(oldp+1963,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this))));
        bufp->chgSData(oldp+1964,((0x3ffU & ((1U & 
                                              (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                >> 1U) 
                                               & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                  | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                     >> 2U))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                  >> 2U))
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                 >> 2U)))),10);
        bufp->chgSData(oldp+1965,((0xffffU & (IData)(
                                                     vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                     [3U]))),16);
        bufp->chgBit(oldp+1966,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1967,((0U != (0x1fU & (IData)(
                                                        (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                         [3U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1968,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1969,((((0U != (0x1fU & (IData)(
                                                            (vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                             [3U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSymsp->TOP__systolic_array_tb__DUT.__PVT__weights
                                                           [3U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1970,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1971,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1972,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1973,(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgBit(oldp+1974,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__MAC_start));
        bufp->chgBit(oldp+1975,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgBit(oldp+1976,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__MAC_shift));
        bufp->chgBit(oldp+1977,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__out_fifo_shift));
        bufp->chgCData(oldp+1978,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__iteration[0]),4);
        bufp->chgCData(oldp+1979,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__iteration[1]),4);
        bufp->chgCData(oldp+1980,(vlSymsp->TOP__systolic_array_tb__DUT__control_unit_if.__PVT__iteration[2]),4);
        bufp->chgSData(oldp+1981,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [3U][3U]),16);
        bufp->chgSData(oldp+1982,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+1983,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1984,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [3U][2U]),16);
        bufp->chgSData(oldp+1985,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+1986,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1987,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [3U][1U]),16);
        bufp->chgSData(oldp+1988,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+1989,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1990,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [3U][0U]),16);
        bufp->chgSData(oldp+1991,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+1992,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1993,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [2U][3U]),16);
        bufp->chgSData(oldp+1994,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+1995,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1996,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [2U][2U]),16);
        bufp->chgSData(oldp+1997,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+1998,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+1999,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [2U][1U]),16);
        bufp->chgSData(oldp+2000,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+2001,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+2002,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [2U][0U]),16);
        bufp->chgSData(oldp+2003,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+2004,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+2005,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [1U][3U]),16);
        bufp->chgSData(oldp+2006,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+2007,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+2008,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [1U][2U]),16);
        bufp->chgSData(oldp+2009,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+2010,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+2011,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [1U][1U]),16);
        bufp->chgSData(oldp+2012,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+2013,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+2014,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [1U][0U]),16);
        bufp->chgSData(oldp+2015,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+2016,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+2017,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [0U][3U]),16);
        bufp->chgSData(oldp+2018,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+2019,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+2020,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [0U][2U]),16);
        bufp->chgSData(oldp+2021,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+2022,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+2023,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [0U][1U]),16);
        bufp->chgSData(oldp+2024,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgBit(oldp+2025,((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run)))));
        bufp->chgSData(oldp+2026,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__MAC_inputs
                                  [0U][0U]),16);
        bufp->chgSData(oldp+2027,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgSData(oldp+2028,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgSData(oldp+2029,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgSData(oldp+2030,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgSData(oldp+2031,(((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf))
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
                                                         & ((1U 
                                                             & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                 >> 1U) 
                                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_round_loss_s3_in)) 
                                                                   | ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                                      >> 2U))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + 
                                                             ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                              >> 2U))
                                                             : 
                                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this) 
                                                             >> 2U))))))))),16);
        bufp->chgSData(oldp+2032,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+2033,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+2034,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+2035,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+2036,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+2037,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+2038,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+2039,((0xffffU & vlSymsp->TOP__systolic_array_tb__DUT.__PVT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+2040,(vlSymsp->TOP__systolic_array_tb__DUT.__PVT__row_out),2);
        bufp->chgBit(oldp+2041,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__out_en));
        bufp->chgCData(oldp+2042,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__row_out),2);
        bufp->chgQData(oldp+2043,(vlSymsp->TOP__systolic_array_tb__memory_if.__PVT__array_output),64);
    }
    bufp->chgBit(oldp+2045,(vlSymsp->TOP__systolic_array_tb.__PVT__tb_clk));
    bufp->chgIData(oldp+2046,(vlSymsp->TOP__systolic_array_tb.__PVT__z),32);
    bufp->chgIData(oldp+2047,(vlSymsp->TOP__systolic_array_tb.__PVT__y),32);
    bufp->chgBit(oldp+2048,(vlSymsp->TOP__systolic_array_tb__DUT__cu_inst.fulll));
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
