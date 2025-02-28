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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.systolic_array_tb__DOT__tb_nRST));
        bufp->chgIData(oldp+1,(vlSelfRef.systolic_array_tb__DOT__out_file),32);
        bufp->chgIData(oldp+2,(vlSelfRef.systolic_array_tb__DOT__file),32);
        bufp->chgIData(oldp+3,(vlSelfRef.systolic_array_tb__DOT__k),32);
        bufp->chgIData(oldp+4,(vlSelfRef.systolic_array_tb__DOT__r),32);
        bufp->chgIData(oldp+5,(vlSelfRef.systolic_array_tb__DOT__in),32);
        bufp->chgIData(oldp+6,(vlSelfRef.systolic_array_tb__DOT__which),32);
        bufp->chgSData(oldp+7,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                               [0U][0U]),16);
        bufp->chgSData(oldp+8,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                               [0U][1U]),16);
        bufp->chgSData(oldp+9,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                               [0U][2U]),16);
        bufp->chgSData(oldp+10,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [0U][3U]),16);
        bufp->chgSData(oldp+11,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [1U][0U]),16);
        bufp->chgSData(oldp+12,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [1U][1U]),16);
        bufp->chgSData(oldp+13,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [1U][2U]),16);
        bufp->chgSData(oldp+14,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [1U][3U]),16);
        bufp->chgSData(oldp+15,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [2U][0U]),16);
        bufp->chgSData(oldp+16,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [2U][1U]),16);
        bufp->chgSData(oldp+17,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [2U][2U]),16);
        bufp->chgSData(oldp+18,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [2U][3U]),16);
        bufp->chgSData(oldp+19,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [3U][0U]),16);
        bufp->chgSData(oldp+20,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [3U][1U]),16);
        bufp->chgSData(oldp+21,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [3U][2U]),16);
        bufp->chgSData(oldp+22,(vlSelfRef.systolic_array_tb__DOT__temp_weights
                                [3U][3U]),16);
        bufp->chgSData(oldp+23,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [0U][0U]),16);
        bufp->chgSData(oldp+24,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [0U][1U]),16);
        bufp->chgSData(oldp+25,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [0U][2U]),16);
        bufp->chgSData(oldp+26,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [0U][3U]),16);
        bufp->chgSData(oldp+27,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [1U][0U]),16);
        bufp->chgSData(oldp+28,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [1U][1U]),16);
        bufp->chgSData(oldp+29,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [1U][2U]),16);
        bufp->chgSData(oldp+30,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [1U][3U]),16);
        bufp->chgSData(oldp+31,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [2U][0U]),16);
        bufp->chgSData(oldp+32,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [2U][1U]),16);
        bufp->chgSData(oldp+33,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [2U][2U]),16);
        bufp->chgSData(oldp+34,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [2U][3U]),16);
        bufp->chgSData(oldp+35,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [3U][0U]),16);
        bufp->chgSData(oldp+36,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [3U][1U]),16);
        bufp->chgSData(oldp+37,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [3U][2U]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.systolic_array_tb__DOT__temp_inputs
                                [3U][3U]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [0U][0U]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [0U][1U]),16);
        bufp->chgSData(oldp+41,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [0U][2U]),16);
        bufp->chgSData(oldp+42,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [0U][3U]),16);
        bufp->chgSData(oldp+43,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [1U][0U]),16);
        bufp->chgSData(oldp+44,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [1U][1U]),16);
        bufp->chgSData(oldp+45,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [1U][2U]),16);
        bufp->chgSData(oldp+46,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [1U][3U]),16);
        bufp->chgSData(oldp+47,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [2U][0U]),16);
        bufp->chgSData(oldp+48,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [2U][1U]),16);
        bufp->chgSData(oldp+49,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [2U][2U]),16);
        bufp->chgSData(oldp+50,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [2U][3U]),16);
        bufp->chgSData(oldp+51,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [3U][0U]),16);
        bufp->chgSData(oldp+52,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [3U][1U]),16);
        bufp->chgSData(oldp+53,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [3U][2U]),16);
        bufp->chgSData(oldp+54,(vlSelfRef.systolic_array_tb__DOT__temp_partials
                                [3U][3U]),16);
        bufp->chgQData(oldp+55,(vlSelfRef.systolic_array_tb__DOT__m_weights[0]),64);
        bufp->chgQData(oldp+57,(vlSelfRef.systolic_array_tb__DOT__m_weights[1]),64);
        bufp->chgQData(oldp+59,(vlSelfRef.systolic_array_tb__DOT__m_weights[2]),64);
        bufp->chgQData(oldp+61,(vlSelfRef.systolic_array_tb__DOT__m_weights[3]),64);
        bufp->chgQData(oldp+63,(vlSelfRef.systolic_array_tb__DOT__m_inputs[0]),64);
        bufp->chgQData(oldp+65,(vlSelfRef.systolic_array_tb__DOT__m_inputs[1]),64);
        bufp->chgQData(oldp+67,(vlSelfRef.systolic_array_tb__DOT__m_inputs[2]),64);
        bufp->chgQData(oldp+69,(vlSelfRef.systolic_array_tb__DOT__m_inputs[3]),64);
        bufp->chgQData(oldp+71,(vlSelfRef.systolic_array_tb__DOT__m_partials[0]),64);
        bufp->chgQData(oldp+73,(vlSelfRef.systolic_array_tb__DOT__m_partials[1]),64);
        bufp->chgQData(oldp+75,(vlSelfRef.systolic_array_tb__DOT__m_partials[2]),64);
        bufp->chgQData(oldp+77,(vlSelfRef.systolic_array_tb__DOT__m_partials[3]),64);
        bufp->chgIData(oldp+79,(vlSelfRef.systolic_array_tb__DOT__loaded_weights),32);
        bufp->chgIData(oldp+80,(vlSelfRef.systolic_array_tb__DOT__get_matrices__Vstatic__unnamedblk1__DOT__iterations),32);
        bufp->chgBit(oldp+81,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.weight_en));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.input_en));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.partial_en));
        bufp->chgCData(oldp+84,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_in_en),2);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_ps_en),2);
        bufp->chgQData(oldp+86,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in),64);
        bufp->chgQData(oldp+88,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_in_partials),64);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgIData(oldp+90,(vlSelfRef.systolic_array_tb__DOT__i),32);
        bufp->chgIData(oldp+91,(vlSelfRef.systolic_array_tb__DOT__j),32);
        bufp->chgSData(oldp+92,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                [0U][0U]),16);
        bufp->chgSData(oldp+93,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                [0U][1U]),16);
        bufp->chgSData(oldp+94,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                [0U][2U]),16);
        bufp->chgSData(oldp+95,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                [0U][3U]),16);
        bufp->chgSData(oldp+96,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                [1U][0U]),16);
        bufp->chgSData(oldp+97,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                [1U][1U]),16);
        bufp->chgSData(oldp+98,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                [1U][2U]),16);
        bufp->chgSData(oldp+99,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                [1U][3U]),16);
        bufp->chgSData(oldp+100,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+101,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+102,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+103,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+104,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+105,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+106,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+107,(vlSelfRef.systolic_array_tb__DOT__temp_outputs
                                 [3U][3U]),16);
        bufp->chgQData(oldp+108,(vlSelfRef.systolic_array_tb__DOT__m_outputs[0]),64);
        bufp->chgQData(oldp+110,(vlSelfRef.systolic_array_tb__DOT__m_outputs[1]),64);
        bufp->chgQData(oldp+112,(vlSelfRef.systolic_array_tb__DOT__m_outputs[2]),64);
        bufp->chgQData(oldp+114,(vlSelfRef.systolic_array_tb__DOT__m_outputs[3]),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgQData(oldp+116,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__top_input),64);
        bufp->chgQData(oldp+118,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights_input),64);
        bufp->chgCData(oldp+120,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi),4);
        bufp->chgCData(oldp+121,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadw),4);
        bufp->chgCData(oldp+122,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps),4);
        bufp->chgBit(oldp+123,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__start_flag));
        bufp->chgIData(oldp+124,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+125,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+126,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+127,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__i),32);
        bufp->chgIData(oldp+128,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgIData(oldp+129,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgIData(oldp+130,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgIData(oldp+131,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__i),32);
        bufp->chgBit(oldp+132,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_type));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_load));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_load));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.partials_load));
        bufp->chgCData(oldp+136,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.input_row),2);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.weight_row),2);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.partials_row),2);
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi) 
                                      >> 3U))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi) 
                                      >> 2U))));
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi) 
                                      >> 1U))));
        bufp->chgBit(oldp+142,((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadi))));
        bufp->chgBit(oldp+143,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps) 
                                      >> 3U))));
        bufp->chgBit(oldp+144,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps) 
                                      >> 2U))));
        bufp->chgBit(oldp+145,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps) 
                                      >> 1U))));
        bufp->chgBit(oldp+146,((1U & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__loadps))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgCData(oldp+147,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_count),3);
        bufp->chgBit(oldp+148,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_start));
        bufp->chgBit(oldp+149,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_start));
        bufp->chgCData(oldp+150,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[0]),4);
        bufp->chgCData(oldp+151,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[1]),4);
        bufp->chgCData(oldp+152,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration[2]),4);
        bufp->chgCData(oldp+153,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_iteration_full),3);
        bufp->chgBit(oldp+154,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_loading));
        bufp->chgCData(oldp+155,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_input_row),2);
        bufp->chgBit(oldp+156,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_loading));
        bufp->chgCData(oldp+157,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__curr_partial_row),2);
        bufp->chgBit(oldp+158,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__output_loading));
        bufp->chgCData(oldp+159,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_in_data_loaded),4);
        bufp->chgCData(oldp+160,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_ps_data_loaded),4);
        bufp->chgBit(oldp+161,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_input_fully_loaded));
        bufp->chgCData(oldp+162,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_partial_fully_loaded),2);
        bufp->chgBit(oldp+163,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ready));
        bufp->chgBit(oldp+164,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_MAC_done));
        bufp->chgIData(oldp+165,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__i),32);
        bufp->chgIData(oldp+166,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__j),32);
        bufp->chgIData(oldp+167,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__l),32);
        bufp->chgIData(oldp+168,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__m),32);
        bufp->chgIData(oldp+169,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__n),32);
        bufp->chgWData(oldp+170,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+174,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+175,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+179,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+180,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+184,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+185,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+189,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+190,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+194,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+195,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+199,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+200,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+204,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgWData(oldp+205,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem_nxt),128);
        bufp->chgCData(oldp+209,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr_nxt),4);
        bufp->chgBit(oldp+210,((1U & ((~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_loading)) 
                                      & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_loading))))));
        bufp->chgCData(oldp+211,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift),4);
        bufp->chgCData(oldp+212,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift),4);
        bufp->chgBit(oldp+213,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift) 
                                      >> 3U))));
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift) 
                                      >> 2U))));
        bufp->chgBit(oldp+215,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift) 
                                      >> 1U))));
        bufp->chgBit(oldp+216,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.in_fifo_shift))));
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift) 
                                      >> 3U))));
        bufp->chgBit(oldp+218,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift) 
                                      >> 2U))));
        bufp->chgBit(oldp+219,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift) 
                                      >> 1U))));
        bufp->chgBit(oldp+220,((1U & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.ps_fifo_shift))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+221,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+222,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+223,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+224,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+225,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+226,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+227,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+228,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+229,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+230,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+231,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+232,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+233,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+234,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+235,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+236,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+237,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+238,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+239,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+240,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+241,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+242,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+243,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+244,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+245,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+246,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+247,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+248,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+249,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+250,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+251,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+252,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+253,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [0U][0U]),16);
        bufp->chgSData(oldp+254,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [0U][1U]),16);
        bufp->chgSData(oldp+255,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [0U][2U]),16);
        bufp->chgSData(oldp+256,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [0U][3U]),16);
        bufp->chgSData(oldp+257,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [1U][0U]),16);
        bufp->chgSData(oldp+258,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [1U][1U]),16);
        bufp->chgSData(oldp+259,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [1U][2U]),16);
        bufp->chgSData(oldp+260,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [1U][3U]),16);
        bufp->chgSData(oldp+261,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [2U][0U]),16);
        bufp->chgSData(oldp+262,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [2U][1U]),16);
        bufp->chgSData(oldp+263,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [2U][2U]),16);
        bufp->chgSData(oldp+264,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [2U][3U]),16);
        bufp->chgSData(oldp+265,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [3U][0U]),16);
        bufp->chgSData(oldp+266,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [3U][1U]),16);
        bufp->chgSData(oldp+267,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [3U][2U]),16);
        bufp->chgSData(oldp+268,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__nxt_MAC_outputs
                                 [3U][3U]),16);
        bufp->chgSData(oldp+269,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[0]),16);
        bufp->chgSData(oldp+270,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[1]),16);
        bufp->chgSData(oldp+271,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[2]),16);
        bufp->chgSData(oldp+272,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs[3]),16);
        bufp->chgQData(oldp+273,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[0]),64);
        bufp->chgQData(oldp+275,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[1]),64);
        bufp->chgQData(oldp+277,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[2]),64);
        bufp->chgQData(oldp+279,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights[3]),64);
        bufp->chgIData(oldp+281,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__z),32);
        bufp->chgIData(oldp+282,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__y),32);
        bufp->chgWData(oldp+283,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__current_out),256);
        bufp->chgCData(oldp+291,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__nxt_add_count),2);
        bufp->chgCData(oldp+292,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[0]),4);
        bufp->chgCData(oldp+293,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[1]),4);
        bufp->chgCData(oldp+294,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration[2]),4);
        bufp->chgCData(oldp+295,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__iteration_full),3);
        bufp->chgCData(oldp+296,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__in_data_loaded),4);
        bufp->chgCData(oldp+297,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__ps_data_loaded),4);
        bufp->chgBit(oldp+298,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__input_fully_loaded));
        bufp->chgCData(oldp+299,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__partial_fully_loaded),2);
        bufp->chgBit(oldp+300,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__cu_inst__DOT__MAC_done));
        bufp->chgWData(oldp+301,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+305,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+306,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+310,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+311,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+315,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+316,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem),128);
        bufp->chgCData(oldp+320,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+321,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+325,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+326,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+330,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+331,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+335,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgWData(oldp+336,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem),128);
        bufp->chgCData(oldp+340,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__wrt_ptr),4);
        bufp->chgQData(oldp+341,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+343,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+345,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+347,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+349,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+351,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+353,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+355,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgBit(oldp+357,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.drained));
        bufp->chgSData(oldp+358,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+359,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+360,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+365,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+366,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [0U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+367,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+371,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+372,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [0U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+373,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+374,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+375,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+376,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+377,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+378,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+379,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+380,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+381,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+382,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+383,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+385,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+386,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+387,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? ((0x1000U 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : (0x1000U 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+388,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0x1000U : (0x1000U 
                                                | (0xffcU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+389,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+390,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+391,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+392,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+393,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+395,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+396,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+397,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+399,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+400,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+401,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+402,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+403,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+404,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+405,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+406,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+407,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+408,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+409,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+410,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+411,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+412,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+413,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+414,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+415,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+416,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+417,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+418,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+419,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+420,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+421,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+422,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+423,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+424,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+425,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U] 
                                                     >> 0x30U)))),16);
        bufp->chgSData(oldp+426,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+427,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U] 
                                                         >> 0x30U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+428,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+429,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+430,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+431,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+432,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+433,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+434,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+436,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+439,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+440,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+441,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+442,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+443,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+444,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+445,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+446,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [1U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+447,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+448,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+449,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+450,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+451,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+452,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+453,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+454,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+455,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+456,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+457,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+458,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+459,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+460,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+461,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? ((0x1000U 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : (0x1000U 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+462,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0x1000U : (0x1000U 
                                                | (0xffcU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+463,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+464,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+465,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+466,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+467,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+468,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+469,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+470,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+471,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+472,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+473,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+474,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+475,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+476,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+477,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+478,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+479,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+480,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+481,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+482,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+483,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+484,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+485,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+486,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+487,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+488,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+489,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+490,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+491,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+492,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+493,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+494,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+495,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+496,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+497,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+498,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+499,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [1U] 
                                                     >> 0x30U)))),16);
        bufp->chgSData(oldp+500,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+501,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U] 
                                                         >> 0x30U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+502,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+503,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+504,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+505,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+506,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+507,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+508,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+510,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+511,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+513,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+514,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [2U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+515,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+516,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+517,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+518,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+519,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+520,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [2U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+521,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+522,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+523,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+524,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+525,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+526,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+527,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+528,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+529,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+530,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+531,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+532,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+533,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+534,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+535,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? ((0x1000U 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : (0x1000U 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+536,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0x1000U : (0x1000U 
                                                | (0xffcU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+537,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+538,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+539,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+540,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+541,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+542,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+543,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+544,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+545,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+547,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+548,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+549,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+550,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+551,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+552,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+553,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+554,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+555,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+556,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+557,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+558,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+559,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+560,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+561,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+562,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+563,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+564,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+566,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+567,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+568,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+569,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+570,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+571,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+572,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+573,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [2U] 
                                                     >> 0x30U)))),16);
        bufp->chgSData(oldp+574,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+575,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U] 
                                                         >> 0x30U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+576,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+577,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+578,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+579,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+580,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+581,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+582,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+583,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+586,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+587,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+588,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [3U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+589,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+590,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+591,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+593,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+594,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [3U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+595,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+596,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+597,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+598,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+599,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+600,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+601,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+602,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+603,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+604,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+605,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+606,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+607,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+608,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+609,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? ((0x1000U 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : (0x1000U 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+610,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0x1000U : (0x1000U 
                                                | (0xffcU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+611,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+612,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+613,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+614,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+615,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+616,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+617,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+618,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+619,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+621,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+622,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+623,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+624,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+625,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+626,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+627,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+628,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+629,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+630,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+631,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+632,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+633,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+634,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+635,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+636,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+637,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+638,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+639,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+640,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+641,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+642,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+643,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+644,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+645,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+646,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+647,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [3U] 
                                                     >> 0x30U)))),16);
        bufp->chgSData(oldp+648,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+649,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U] 
                                                         >> 0x30U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+650,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+651,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+652,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+653,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+654,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+655,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+656,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+661,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+662,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+663,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+664,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+666,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+667,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+668,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [0U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+669,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+670,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+671,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+672,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+673,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+674,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+675,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+676,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+677,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+678,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+679,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+680,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+681,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [0U][0U] >> 0xfU)))));
        bufp->chgBit(oldp+682,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [0U][0U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+683,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? ((0x1000U 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : ((0x1000U 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [0U]
                                                        [0U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+684,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1000U | (0xffcU 
                                                 & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                    [0U]
                                                    [0U] 
                                                    << 2U)))
                                   : (0x1000U | (0xffcU 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                    << 2U))))),13);
        bufp->chgSData(oldp+685,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+686,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+687,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [0U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+688,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+689,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+690,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+691,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+692,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+693,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+695,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+696,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+697,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+698,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+699,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][0U]),16);
        bufp->chgCData(oldp+700,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+701,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+702,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+703,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][0U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+704,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+705,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+706,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+707,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+708,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+709,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+710,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+711,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+712,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+713,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+714,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+716,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+717,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+718,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+719,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+720,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+721,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+722,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+723,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+724,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+725,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U] 
                                                         >> 0x20U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+726,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+727,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+728,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+729,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+730,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+731,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+732,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+733,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+734,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+735,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+737,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+738,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [1U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+739,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+741,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+742,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+743,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+744,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [1U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+745,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+746,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+747,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+748,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+749,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+750,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+751,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+752,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+753,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+754,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+755,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+756,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+757,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [0U][1U] >> 0xfU)))));
        bufp->chgBit(oldp+758,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [0U][1U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+759,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? ((0x1000U 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : ((0x1000U 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [0U]
                                                        [1U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+760,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1000U | (0xffcU 
                                                 & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                    [0U]
                                                    [1U] 
                                                    << 2U)))
                                   : (0x1000U | (0xffcU 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                    << 2U))))),13);
        bufp->chgSData(oldp+761,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+762,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+763,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [1U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+764,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+765,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+766,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+767,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+768,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+769,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+770,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+771,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+772,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+773,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+774,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+775,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][1U]),16);
        bufp->chgCData(oldp+776,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+777,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+778,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+779,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][1U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+781,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+782,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+783,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+784,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+785,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+786,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+787,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+788,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+789,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+790,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+791,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+792,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+793,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+794,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+795,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+796,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+797,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+798,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+799,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [1U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+800,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+801,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U] 
                                                         >> 0x20U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+802,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+804,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+805,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+806,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+807,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+808,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+813,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+814,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [2U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+815,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+816,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+817,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+818,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+819,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+820,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [2U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+822,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+823,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+824,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+825,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+826,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+827,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+828,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+829,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+830,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+831,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+832,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+833,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [0U][2U] >> 0xfU)))));
        bufp->chgBit(oldp+834,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [0U][2U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+835,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? ((0x1000U 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : ((0x1000U 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [0U]
                                                        [2U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+836,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1000U | (0xffcU 
                                                 & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                    [0U]
                                                    [2U] 
                                                    << 2U)))
                                   : (0x1000U | (0xffcU 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                    << 2U))))),13);
        bufp->chgSData(oldp+837,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+838,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+839,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [2U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+840,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+841,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+842,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+843,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+844,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+845,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+847,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+849,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+850,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+851,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][2U]),16);
        bufp->chgCData(oldp+852,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+853,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+854,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+855,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+856,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+857,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+858,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+859,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+860,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+861,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+862,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+863,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+864,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+865,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+866,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+867,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+868,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+869,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+870,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+871,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+872,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+873,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+874,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+875,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [2U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+876,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+877,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U] 
                                                         >> 0x20U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+878,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+879,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+880,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+881,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+882,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+883,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+884,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+885,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+886,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+887,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+888,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+889,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+890,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [3U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+891,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+892,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+893,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+894,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+895,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+896,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [3U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+897,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+898,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+899,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+900,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+901,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+902,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+903,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+904,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+905,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+906,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+907,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+908,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+909,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [0U][3U] >> 0xfU)))));
        bufp->chgBit(oldp+910,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [0U][3U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+911,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? ((0x1000U 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : ((0x1000U 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [0U]
                                                        [3U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+912,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1000U | (0xffcU 
                                                 & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                    [0U]
                                                    [3U] 
                                                    << 2U)))
                                   : (0x1000U | (0xffcU 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                    << 2U))))),13);
        bufp->chgSData(oldp+913,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+914,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+915,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [3U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+916,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+917,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+918,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+919,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+920,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+921,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+922,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+923,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+924,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+925,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                          >> 2U))))))),16);
        bufp->chgCData(oldp+926,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+927,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][3U]),16);
        bufp->chgCData(oldp+928,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+929,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+930,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+931,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+932,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+933,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+934,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+935,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+936,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+937,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+938,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+939,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+940,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+941,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+942,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+943,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+944,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+945,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+946,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+947,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+948,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                   << 0xfU) | ((0x7c00U 
                                                & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                     : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                   << 0xaU)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                     >> 2U))))),16);
        bufp->chgBit(oldp+949,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+950,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+951,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [3U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+952,((0x1000U | (0xffcU 
                                             & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                << 2U)))),13);
        bufp->chgSData(oldp+953,((0x1000U | (0xffcU 
                                             & ((IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U] 
                                                         >> 0x20U)) 
                                                << 2U)))),13);
        bufp->chgIData(oldp+954,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+955,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+956,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+957,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+958,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+959,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+960,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+961,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+963,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+964,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+965,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+966,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+967,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+968,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+969,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+970,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+971,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+972,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [0U] 
                                                   >> 0x1aU)))),5);
        bufp->chgCData(oldp+973,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+974,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+975,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+976,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+977,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+978,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+979,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+980,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+981,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+982,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                             ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 3U)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                >> 2U)))),10);
        bufp->chgBit(oldp+983,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+984,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+985,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [1U][0U] >> 0xfU)))));
        bufp->chgBit(oldp+986,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [1U][0U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+987,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? ((0x1000U 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : ((0x1000U 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [1U]
                                                        [0U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+988,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1000U | (0xffcU 
                                                 & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                    [1U]
                                                    [0U] 
                                                    << 2U)))
                                   : (0x1000U | (0xffcU 
                                                 & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                    << 2U))))),13);
        bufp->chgSData(oldp+989,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+990,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+991,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [1U]
                                               [0U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+992,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+993,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+994,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+995,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+996,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+997,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+998,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+999,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1000,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1001,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1002,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1003,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][0U]),16);
        bufp->chgCData(oldp+1004,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1005,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1006,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1007,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+1009,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1010,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1011,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1012,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1013,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1014,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1015,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1016,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1017,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1018,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1020,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1021,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1022,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1023,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1024,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1026,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1027,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [0U] 
                                                      >> 0x10U)))),16);
        bufp->chgSData(oldp+1028,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1029,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [0U] 
                                                          >> 0x10U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1030,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1031,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1032,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1033,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1034,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1035,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1040,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1041,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1042,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1043,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1044,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1045,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1046,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1047,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1048,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [1U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1049,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1051,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1052,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1053,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1054,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1055,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1056,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1057,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1058,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1059,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1060,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1061,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1062,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1063,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((0x1000U 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((0x1000U 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [1U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1064,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (0x1000U | (0xffcU 
                                                  & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [1U] 
                                                     << 2U)))
                                    : (0x1000U | (0xffcU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                     << 2U))))),13);
        bufp->chgSData(oldp+1065,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1066,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1067,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1069,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1070,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1071,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1072,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1073,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1074,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1075,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1077,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1078,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1079,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][1U]),16);
        bufp->chgCData(oldp+1080,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1081,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1083,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+1085,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1086,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1087,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1088,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1089,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1090,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1091,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1092,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1093,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1094,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1095,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1096,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1097,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1098,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1099,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1100,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1101,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1102,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1103,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [1U] 
                                                      >> 0x10U)))),16);
        bufp->chgSData(oldp+1104,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1105,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [1U] 
                                                          >> 0x10U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1106,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1107,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1108,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1109,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1110,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1111,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1112,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1113,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1114,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1115,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1116,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1117,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1118,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1119,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1120,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1123,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1124,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1125,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1126,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1127,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1128,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1129,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1131,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1132,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1133,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1134,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1137,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1138,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1139,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((0x1000U 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((0x1000U 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [2U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1140,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (0x1000U | (0xffcU 
                                                  & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [2U] 
                                                     << 2U)))
                                    : (0x1000U | (0xffcU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                     << 2U))))),13);
        bufp->chgSData(oldp+1141,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1142,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1143,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1144,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1146,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1147,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1148,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1149,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1150,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1151,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1152,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1153,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1154,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1155,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][2U]),16);
        bufp->chgCData(oldp+1156,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1158,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1159,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1160,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+1161,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1162,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1163,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1164,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1165,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1166,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1167,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1168,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1169,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1170,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1171,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1172,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1173,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1174,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1175,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1176,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1177,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1178,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1179,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [2U] 
                                                      >> 0x10U)))),16);
        bufp->chgSData(oldp+1180,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1181,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [2U] 
                                                          >> 0x10U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1182,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1183,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1184,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1185,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1186,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1187,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1188,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1189,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1190,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1191,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1192,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1193,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1194,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1195,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1196,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1197,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1198,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1199,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1200,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1201,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1202,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1203,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1204,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1205,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1206,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1207,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1208,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1209,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1210,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1211,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1212,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1213,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1214,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1215,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((0x1000U 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((0x1000U 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [3U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1216,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (0x1000U | (0xffcU 
                                                  & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [1U]
                                                     [3U] 
                                                     << 2U)))
                                    : (0x1000U | (0xffcU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                     << 2U))))),13);
        bufp->chgSData(oldp+1217,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1218,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1219,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1220,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1221,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1222,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1223,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1224,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1225,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1226,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1227,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1228,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1229,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1230,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1231,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][3U]),16);
        bufp->chgCData(oldp+1232,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1233,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1235,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1236,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+1237,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1238,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1239,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1240,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1241,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1242,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1243,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1244,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1245,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1246,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1247,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1248,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1249,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1250,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1251,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1252,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1253,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1254,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1255,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [3U] 
                                                      >> 0x10U)))),16);
        bufp->chgSData(oldp+1256,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1257,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                          [3U] 
                                                          >> 0x10U)) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1258,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1260,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1261,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1262,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1263,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1264,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1265,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1266,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1267,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1268,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1269,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1270,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1271,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1272,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1273,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1274,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1275,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1276,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [0U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1277,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1279,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1280,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1281,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1282,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1283,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1284,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1285,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1286,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1289,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1290,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1291,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((0x1000U 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((0x1000U 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [0U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1292,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (0x1000U | (0xffcU 
                                                  & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [0U] 
                                                     << 2U)))
                                    : (0x1000U | (0xffcU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                     << 2U))))),13);
        bufp->chgSData(oldp+1293,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1294,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1295,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1296,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1297,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1299,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1300,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1301,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1303,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1304,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1305,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1306,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1307,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][0U]),16);
        bufp->chgCData(oldp+1308,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1309,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1311,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1312,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+1313,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1314,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1315,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1316,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1317,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1318,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1319,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1320,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1321,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1324,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1325,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1327,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1328,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1329,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1330,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1331,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U]))),16);
        bufp->chgSData(oldp+1332,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1333,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U]) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1334,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1335,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1336,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1337,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1338,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1339,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1341,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1342,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1343,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1344,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1345,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1346,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1347,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1348,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1349,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1350,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1351,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1352,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [1U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1353,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1354,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1355,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1356,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1357,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1358,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1359,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1360,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1361,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1362,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1363,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1364,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1365,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1366,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1367,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((0x1000U 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((0x1000U 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [1U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1368,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (0x1000U | (0xffcU 
                                                  & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [1U] 
                                                     << 2U)))
                                    : (0x1000U | (0xffcU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                     << 2U))))),13);
        bufp->chgSData(oldp+1369,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1370,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1371,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1372,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1373,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1374,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1375,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1376,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1377,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1378,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1379,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1381,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1382,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1383,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][1U]),16);
        bufp->chgCData(oldp+1384,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1385,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1386,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1387,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1388,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+1389,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1390,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1391,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1392,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1393,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1394,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1395,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1396,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1397,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1398,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1399,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1400,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1401,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1402,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1403,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1404,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1405,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1406,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1407,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [1U]))),16);
        bufp->chgSData(oldp+1408,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1409,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U]) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1410,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1411,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1412,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1413,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1414,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1415,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1416,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1417,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1418,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1419,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1420,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1421,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1422,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1423,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1424,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1425,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1426,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1427,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1428,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1429,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1430,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1431,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1432,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1433,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1434,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1435,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1436,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1437,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1438,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1439,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1440,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1441,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1442,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1443,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((0x1000U 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((0x1000U 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [2U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1444,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (0x1000U | (0xffcU 
                                                  & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [2U] 
                                                     << 2U)))
                                    : (0x1000U | (0xffcU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                     << 2U))))),13);
        bufp->chgSData(oldp+1445,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1446,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1447,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1448,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1449,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1450,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1451,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1452,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1453,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1454,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1455,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1456,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1457,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1458,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1459,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][2U]),16);
        bufp->chgCData(oldp+1460,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1461,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1462,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1463,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1464,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+1465,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1466,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1467,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1468,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1469,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1470,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1471,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1472,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1473,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1474,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1475,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1476,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1477,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1478,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1479,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1480,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1481,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1482,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1483,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [2U]))),16);
        bufp->chgSData(oldp+1484,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1485,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U]) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1486,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1487,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1488,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1489,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1490,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1491,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1492,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1493,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1494,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1495,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1496,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1497,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1498,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1499,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1500,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1501,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1502,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1503,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1504,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1505,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1506,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1507,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1508,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1509,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1510,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1511,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1512,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1513,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1514,((0x3ffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in)
                                              ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 3U)
                                              : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in) 
                                                 >> 2U)))),10);
        bufp->chgBit(oldp+1515,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1516,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1517,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1518,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1519,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((0x1000U 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((0x1000U 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [3U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1520,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (0x1000U | (0xffcU 
                                                  & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                     [2U]
                                                     [3U] 
                                                     << 2U)))
                                    : (0x1000U | (0xffcU 
                                                  & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                     << 2U))))),13);
        bufp->chgSData(oldp+1521,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1522,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1523,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1524,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1525,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1527,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1528,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1529,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1530,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1531,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1532,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1533,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                 ? 0x7c00U
                                                 : 
                                                ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1534,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1535,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][3U]),16);
        bufp->chgCData(oldp+1536,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1537,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1538,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),6);
        bufp->chgCData(oldp+1539,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1540,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgSData(oldp+1541,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1542,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1543,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1544,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1545,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1546,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1547,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1548,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1549,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1550,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1551,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1552,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1553,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1554,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1555,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1556,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((0x7c00U 
                                                 & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                                      : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)) 
                                                    << 0xaU)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction) 
                                                      >> 2U))))),16);
        bufp->chgBit(oldp+1557,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1558,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1559,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [3U]))),16);
        bufp->chgSData(oldp+1560,((0x1000U | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 << 2U)))),13);
        bufp->chgSData(oldp+1561,((0x1000U | (0xffcU 
                                              & ((IData)(
                                                         vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U]) 
                                                 << 2U)))),13);
        bufp->chgIData(oldp+1562,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1563,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1564,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1565,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgBit(oldp+1566,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
        bufp->chgCData(oldp+1567,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_count),3);
        bufp->chgBit(oldp+1568,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start));
        bufp->chgCData(oldp+1569,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_count),2);
        bufp->chgBit(oldp+1570,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift));
        bufp->chgBit(oldp+1571,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.out_fifo_shift));
        bufp->chgCData(oldp+1572,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[0]),4);
        bufp->chgCData(oldp+1573,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[1]),4);
        bufp->chgCData(oldp+1574,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[2]),4);
        bufp->chgSData(oldp+1575,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][3U]),16);
        bufp->chgSData(oldp+1576,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1577,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][2U]),16);
        bufp->chgSData(oldp+1578,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1579,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][1U]),16);
        bufp->chgSData(oldp+1580,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1581,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][0U]),16);
        bufp->chgSData(oldp+1582,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1583,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][3U]),16);
        bufp->chgSData(oldp+1584,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1585,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][2U]),16);
        bufp->chgSData(oldp+1586,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1587,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][1U]),16);
        bufp->chgSData(oldp+1588,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1589,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][0U]),16);
        bufp->chgSData(oldp+1590,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1591,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][3U]),16);
        bufp->chgSData(oldp+1592,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1593,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][2U]),16);
        bufp->chgSData(oldp+1594,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1595,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][1U]),16);
        bufp->chgSData(oldp+1596,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1597,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][0U]),16);
        bufp->chgSData(oldp+1598,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1599,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][3U]),16);
        bufp->chgSData(oldp+1600,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1601,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][2U]),16);
        bufp->chgSData(oldp+1602,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1603,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][1U]),16);
        bufp->chgSData(oldp+1604,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1605,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][0U]),16);
        bufp->chgSData(oldp+1606,(((1U & ((0x3fffffffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)) 
                                          | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                 | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf))) 
                                             >> 2U)))
                                    ? 0x7c00U : (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
                                                     ? 0x7c00U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)
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
                                                            >> 2U)))))))),16);
        bufp->chgSData(oldp+1607,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                  [3U]),16);
        bufp->chgSData(oldp+1608,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [3U][3U]),16);
        bufp->chgSData(oldp+1609,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__3__KET__.add_ouput),16);
        bufp->chgSData(oldp+1610,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                  [2U]),16);
        bufp->chgSData(oldp+1611,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [3U][2U]),16);
        bufp->chgSData(oldp+1612,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__2__KET__.add_ouput),16);
        bufp->chgSData(oldp+1613,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                  [1U]),16);
        bufp->chgSData(oldp+1614,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [3U][1U]),16);
        bufp->chgSData(oldp+1615,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__1__KET__.add_ouput),16);
        bufp->chgSData(oldp+1616,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                  [0U]),16);
        bufp->chgSData(oldp+1617,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [3U][0U]),16);
        bufp->chgSData(oldp+1618,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__add_ifs__BRA__0__KET__.add_ouput),16);
        bufp->chgSData(oldp+1619,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1620,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1621,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1622,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1623,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1624,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1625,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1626,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+1627,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out),2);
        bufp->chgBit(oldp+1628,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.out_en));
        bufp->chgCData(oldp+1629,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out),2);
        bufp->chgQData(oldp+1630,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output),64);
    }
    bufp->chgBit(oldp+1632,(vlSelfRef.systolic_array_tb__DOT__tb_clk));
    bufp->chgIData(oldp+1633,(vlSelfRef.systolic_array_tb__DOT__z),32);
    bufp->chgIData(oldp+1634,(vlSelfRef.systolic_array_tb__DOT__y),32);
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
