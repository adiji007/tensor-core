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
        bufp->chgBit(oldp+341,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+342,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+343,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+344,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+345,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+346,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+347,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                          [0U] >> 0xfU)
                                       : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][0U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+348,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][0U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                       [0U] >> 0xfU)))));
        bufp->chgSData(oldp+349,((0x1fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                        [0U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                        [0U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [3U]
                                                        [0U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [3U]
                                                        [0U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+350,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [3U]
                                                  [0U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                      [3U]
                                                      [0U] 
                                                      << 2U)))
                                   : (((0U != (0x1fU 
                                               & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                  [0U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                      [0U] 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+351,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+352,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+353,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [3U]
                                               [0U] 
                                               >> 0xaU)
                                            : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                               [0U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+354,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+355,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+356,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+357,((0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+358,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+359,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+360,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+361,(((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_in))),5);
        bufp->chgCData(oldp+362,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+363,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))),16);
        bufp->chgCData(oldp+364,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+365,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                 [0U]),16);
        bufp->chgSData(oldp+366,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][0U]),16);
        bufp->chgCData(oldp+367,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+368,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+369,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                           [0U] >> 0xaU))),6);
        bufp->chgCData(oldp+370,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [3U][0U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+371,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+372,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+373,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [3U]
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+374,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+375,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+376,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+377,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+378,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+379,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+380,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+381,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+382,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+383,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+384,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+385,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+386,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+387,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+388,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+389,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))),16);
        bufp->chgBit(oldp+390,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+391,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgBit(oldp+392,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+393,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+394,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+395,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+396,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+397,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+398,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                          [1U] >> 0xfU)
                                       : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][1U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+399,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][1U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                       [1U] >> 0xfU)))));
        bufp->chgSData(oldp+400,((0x1fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                        [1U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                        [1U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [3U]
                                                        [1U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [3U]
                                                        [1U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+401,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [3U]
                                                  [1U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                      [3U]
                                                      [1U] 
                                                      << 2U)))
                                   : (((0U != (0x1fU 
                                               & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                  [1U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                      [1U] 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+402,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+403,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+404,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [3U]
                                               [1U] 
                                               >> 0xaU)
                                            : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                               [1U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+405,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+406,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+407,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+408,((0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+409,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+410,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+411,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+412,(((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_in))),5);
        bufp->chgCData(oldp+413,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+414,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))),16);
        bufp->chgCData(oldp+415,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+416,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                 [1U]),16);
        bufp->chgSData(oldp+417,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][1U]),16);
        bufp->chgCData(oldp+418,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+419,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+420,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                           [1U] >> 0xaU))),6);
        bufp->chgCData(oldp+421,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [3U][1U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+422,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+423,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                [1U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+424,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [3U]
                                                [1U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+425,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+426,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+427,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+428,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+429,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+430,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+431,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+432,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+433,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+434,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+435,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+436,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+437,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+438,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+439,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+440,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))),16);
        bufp->chgBit(oldp+441,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+442,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgBit(oldp+443,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+444,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+445,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+446,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+447,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+448,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+449,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                          [2U] >> 0xfU)
                                       : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][2U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+450,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][2U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                       [2U] >> 0xfU)))));
        bufp->chgSData(oldp+451,((0x1fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                        [2U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                        [2U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [3U]
                                                        [2U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [3U]
                                                        [2U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+452,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [3U]
                                                  [2U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                      [3U]
                                                      [2U] 
                                                      << 2U)))
                                   : (((0U != (0x1fU 
                                               & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                  [2U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                      [2U] 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+453,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+454,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+455,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [3U]
                                               [2U] 
                                               >> 0xaU)
                                            : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                               [2U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+456,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+457,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+458,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+459,((0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+460,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+461,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+462,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+463,(((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_in))),5);
        bufp->chgCData(oldp+464,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+465,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))),16);
        bufp->chgCData(oldp+466,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+467,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                 [2U]),16);
        bufp->chgSData(oldp+468,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][2U]),16);
        bufp->chgCData(oldp+469,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+470,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+471,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                           [2U] >> 0xaU))),6);
        bufp->chgCData(oldp+472,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [3U][2U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+473,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+474,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                [2U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+475,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [3U]
                                                [2U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+476,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+477,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+478,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+479,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+480,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+481,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+482,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+483,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+484,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+485,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+486,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+487,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+488,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+489,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+490,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+491,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))),16);
        bufp->chgBit(oldp+492,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+493,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgBit(oldp+494,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run_latched));
        bufp->chgBit(oldp+495,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_2));
        bufp->chgBit(oldp+496,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__start_passthrough_3));
        bufp->chgBit(oldp+497,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__run));
        bufp->chgBit(oldp+498,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_shifted_in));
        bufp->chgBit(oldp+499,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+500,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                          [3U] >> 0xfU)
                                       : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][3U] 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+501,((1U & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [3U][3U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                       [3U] >> 0xfU)))));
        bufp->chgSData(oldp+502,((0x1fffU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                        [3U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                        [3U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [3U]
                                                        [3U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [3U]
                                                        [3U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+503,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [3U]
                                                  [3U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                      [3U]
                                                      [3U] 
                                                      << 2U)))
                                   : (((0U != (0x1fU 
                                               & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                  [3U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                      [3U] 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+504,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_shifted_in),13);
        bufp->chgSData(oldp+505,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+506,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [3U]
                                               [3U] 
                                               >> 0xaU)
                                            : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                               [3U] 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+507,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in),5);
        bufp->chgBit(oldp+508,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_out));
        bufp->chgBit(oldp+509,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in));
        bufp->chgSData(oldp+510,((0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+511,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sum_in),13);
        bufp->chgBit(oldp+512,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_out));
        bufp->chgBit(oldp+513,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in));
        bufp->chgCData(oldp+514,(((0U == (0x1fffU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_in))),5);
        bufp->chgCData(oldp+515,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+516,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf)
                                                ? 0x7c00U
                                                : ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))))),16);
        bufp->chgCData(oldp+517,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+518,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                 [3U]),16);
        bufp->chgSData(oldp+519,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [3U][3U]),16);
        bufp->chgCData(oldp+520,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+521,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+522,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                           [3U] >> 0xaU))),6);
        bufp->chgCData(oldp+523,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [3U][3U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+524,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add1__DOT__diff),6);
        bufp->chgBit(oldp+525,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__ps_add_inputs
                                                [3U] 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+526,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [3U]
                                                [3U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+527,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+528,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+529,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+530,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+531,(((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf) 
                                | ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag) 
                                   | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf)))));
        bufp->chgCData(oldp+532,((0x1fU & (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+533,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+534,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+535,((0x1fU & ((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_exp_max_s3_in))
                                            : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+536,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__ovf));
        bufp->chgBit(oldp+537,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__unf));
        bufp->chgCData(oldp+538,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+539,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+540,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+541,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+542,((((IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add_sign_in) 
                                   << 0xfU) | (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0))),16);
        bufp->chgBit(oldp+543,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__round_flag));
        bufp->chgSData(oldp+544,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT__rounded_fraction),12);
        bufp->chgQData(oldp+545,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+547,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__0__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+549,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+551,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__1__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+553,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+555,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__2__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgQData(oldp+557,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem),64);
        bufp->chgQData(oldp+559,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk6__BRA__3__KET____DOT__o_fifo__DOT__fifo_mem_next),64);
        bufp->chgBit(oldp+561,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.drained));
        bufp->chgSData(oldp+562,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+563,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+564,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+566,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+569,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+570,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [0U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+571,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+573,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+574,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+575,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+576,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [0U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+577,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+578,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+579,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+580,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+581,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+582,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+583,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+584,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+585,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+586,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+587,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+588,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+589,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+590,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+591,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+592,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+593,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+594,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+595,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+596,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+597,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+598,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+600,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+601,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+602,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+603,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+604,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+605,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+606,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+607,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+608,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+609,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+610,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+611,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+612,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+613,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+614,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+615,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+616,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+617,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+618,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+619,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+620,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+621,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+622,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+624,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+625,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+626,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+627,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+628,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+629,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+630,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+631,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+632,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+633,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                        [0U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+634,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+635,((((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [0U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [0U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+636,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+637,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+638,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+639,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+640,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+641,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+642,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+647,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+648,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+649,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+650,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+653,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+654,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [1U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+655,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+656,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+657,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+658,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+659,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+660,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+661,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+662,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+663,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+664,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+665,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+666,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+667,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+668,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+669,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+670,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+671,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+672,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+673,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+674,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+675,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+676,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+677,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+678,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+679,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+680,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+681,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+682,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+683,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+684,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+685,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+686,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+687,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+688,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+689,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+690,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+691,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+692,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+693,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+694,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+695,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+696,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+697,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+698,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+699,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+700,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+701,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+702,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+703,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+704,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+705,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+706,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+707,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+708,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+709,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [1U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+710,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+711,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                        [1U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+712,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+713,((((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [1U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [1U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+714,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+715,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+716,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+717,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+718,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+719,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+720,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+723,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+724,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+725,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+726,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [2U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+727,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+729,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+730,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+731,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+732,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [2U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+733,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+734,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+735,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+736,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+737,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+738,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+739,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+740,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+741,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+742,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+743,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+744,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+745,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+746,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+747,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+748,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+749,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+750,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+751,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+752,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+753,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+754,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+755,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+756,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+757,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+758,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+759,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+760,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+761,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+762,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+763,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+764,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+765,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+766,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+767,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+768,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+769,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+770,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+771,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+772,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+773,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+774,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+775,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+776,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+777,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+778,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+779,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+780,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+781,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+782,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+783,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+784,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+785,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+786,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+787,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [2U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+788,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+789,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                        [2U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+790,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+791,((((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [2U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [2U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+792,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+793,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+794,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+795,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+796,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+797,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+798,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+801,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+803,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+804,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [3U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+805,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+809,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+810,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [3U] 
                                                   >> 0x3aU)))),5);
        bufp->chgCData(oldp+811,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+812,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+813,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+814,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+815,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+816,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+817,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+818,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+819,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+820,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+822,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+824,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+825,(((1U & (~ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out))) 
                                && (1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU)))));
        bufp->chgSData(oldp+826,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (0x1fffU & (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))))
                                   : 0U)),13);
        bufp->chgSData(oldp+827,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                 << 2U))))),13);
        bufp->chgSData(oldp+828,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+829,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+830,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? 0U : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                            >> 0xaU)))),5);
        bufp->chgCData(oldp+831,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+832,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+833,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+834,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+835,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+836,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+837,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+838,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+839,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+840,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+841,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgCData(oldp+842,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+843,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+844,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+846,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgSData(oldp+847,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+848,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+849,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+850,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+851,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+852,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+853,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+854,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+855,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+856,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+857,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+858,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+861,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+862,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+863,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+864,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+865,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [3U] 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+866,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+867,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                        [3U] 
                                                        >> 0x3aU))))));
        bufp->chgSData(oldp+868,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+869,((((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [3U] 
                                                            >> 0x3aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [3U] 
                                                           >> 0x30U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+870,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+872,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+873,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+874,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+875,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+876,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+877,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+878,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+879,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+880,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+881,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+882,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+883,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+884,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+885,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+886,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+887,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+888,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [0U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+889,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+891,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+892,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+893,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+894,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+895,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+896,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+897,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+898,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+899,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+900,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+901,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+902,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [0U][0U] >> 0xfU)))));
        bufp->chgBit(oldp+903,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [0U][0U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+904,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [0U]
                                                        [0U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [0U]
                                                        [0U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+905,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [0U]
                                                  [0U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                      [0U]
                                                      [0U] 
                                                      << 2U)))
                                   : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                       << 0xcU) | (0xffcU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+906,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+907,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+908,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [0U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+909,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+910,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+911,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+912,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+913,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+914,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+915,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+916,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+917,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+918,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+919,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                   << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+920,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                 [0U][0U]),16);
        bufp->chgCData(oldp+921,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+922,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+923,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+924,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][0U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+925,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+926,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+927,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [0U]
                                                [0U] 
                                                >> 0xaU)))));
        bufp->chgSData(oldp+928,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+929,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+930,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+931,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+932,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                   | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+933,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+934,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+935,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+936,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                            : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+937,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+938,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+939,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+940,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+941,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+942,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+943,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+944,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+945,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+946,((0xffffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U] 
                                                     >> 0x20U)))),16);
        bufp->chgBit(oldp+947,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+948,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                        [0U] 
                                                        >> 0x2aU))))));
        bufp->chgSData(oldp+949,((((0U != (0x1fU & 
                                           ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                  << 2U)))),13);
        bufp->chgSData(oldp+950,((((0U != (0x1fU & (IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [0U] 
                                                            >> 0x2aU)))) 
                                   << 0xcU) | (0xffcU 
                                               & ((IData)(
                                                          (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [0U] 
                                                           >> 0x20U)) 
                                                  << 2U)))),13);
        bufp->chgIData(oldp+951,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+952,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+953,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+954,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+955,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+956,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+957,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+959,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+960,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+961,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+962,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+963,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                              [1U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+964,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+965,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+966,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+967,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+968,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+969,((0x1fU & (IData)((
                                                   vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                   [1U] 
                                                   >> 0x2aU)))),5);
        bufp->chgCData(oldp+970,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+971,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+972,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                             >> 0xcU))),13);
        bufp->chgSData(oldp+973,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+974,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+975,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+976,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                         >> 4U) & (~ 
                                                   (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                                     | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                                    >> 4U))))));
        bufp->chgBit(oldp+977,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                      & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                             >> 4U)) 
                                         & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                             & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                            >> 4U))))));
        bufp->chgSData(oldp+978,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+979,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+980,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+981,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+982,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+983,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                          >> 0xfU) : 
                                      (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                       [0U][1U] >> 0xfU)))));
        bufp->chgBit(oldp+984,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                       ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                          [0U][1U] 
                                          >> 0xfU) : 
                                      ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                       >> 0xfU)))));
        bufp->chgSData(oldp+985,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                              ? (((
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                              : (((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [0U]
                                                        [1U] 
                                                        >> 0xaU))) 
                                                   << 0xcU) 
                                                  | (0xffcU 
                                                     & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                        [0U]
                                                        [1U] 
                                                        << 2U))) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+986,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                   ? (((0U != (0x1fU 
                                               & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [0U]
                                                  [1U] 
                                                  >> 0xaU))) 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                      [0U]
                                                      [1U] 
                                                      << 2U)))
                                   : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                       << 0xcU) | (0xffcU 
                                                   & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                      << 2U))))),13);
        bufp->chgSData(oldp+987,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+988,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+989,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                            ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                               [0U]
                                               [1U] 
                                               >> 0xaU)
                                            : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                               >> 0xaU)))),5);
        bufp->chgCData(oldp+990,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+991,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+992,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+993,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+994,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+995,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+996,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+997,(((0U == (0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                   ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+998,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+999,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1000,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1001,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [0U][1U]),16);
        bufp->chgCData(oldp+1002,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1003,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1005,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1006,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1007,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1008,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [0U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1009,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1010,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1011,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1012,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1013,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1014,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1015,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1016,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1017,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1018,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1020,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1021,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1022,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1023,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1024,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1026,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1027,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [1U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1028,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1029,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1030,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1031,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [1U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [1U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1032,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1033,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1034,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1035,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1036,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1037,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1040,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1041,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1042,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1043,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1044,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1045,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1046,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1047,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1048,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1049,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1050,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1051,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1052,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1053,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1054,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1055,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1056,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1057,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1058,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1059,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1060,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+1061,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1062,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1064,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1065,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1066,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [0U]
                                                         [2U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [0U]
                                                         [2U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1067,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [0U]
                                                   [2U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [0U]
                                                  [2U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1068,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1069,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1070,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [0U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1071,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1073,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1074,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1075,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1076,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1077,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1078,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1080,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1081,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1082,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [0U][2U]),16);
        bufp->chgCData(oldp+1083,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1084,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1086,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1087,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1088,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1089,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [0U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1090,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1091,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1092,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1093,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1094,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1095,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1096,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1097,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1098,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1099,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1100,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1101,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1102,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1103,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1104,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1105,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1106,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1107,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1108,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [2U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1109,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1110,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1111,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1112,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [2U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [2U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1113,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1114,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1115,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1116,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1117,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1118,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1119,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1120,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1124,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1125,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1126,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1129,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1130,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1131,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0x2aU)))),5);
        bufp->chgCData(oldp+1132,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1133,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1134,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1135,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1136,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1137,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1138,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1139,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1140,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1141,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+1142,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1143,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1144,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1145,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1146,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [0U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1147,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [0U]
                                                         [3U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [0U]
                                                         [3U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1148,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [0U]
                                                   [3U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [0U]
                                                  [3U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1149,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1150,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1151,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [0U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1152,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1153,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1154,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1155,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1156,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1159,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1160,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1161,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
                                    << 0xfU) | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf)
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
                                                        >> 2U))))))),16);
        bufp->chgCData(oldp+1162,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1163,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [0U][3U]),16);
        bufp->chgCData(oldp+1164,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1165,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1166,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1167,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [0U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1168,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1169,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1170,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [0U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1171,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1172,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1173,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1174,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1175,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1176,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1177,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1178,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1179,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1180,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1181,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1183,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1184,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1185,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1186,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1187,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1188,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1189,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [3U] 
                                                      >> 0x20U)))),16);
        bufp->chgBit(oldp+1190,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1191,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U] 
                                                         >> 0x2aU))))));
        bufp->chgSData(oldp+1192,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1193,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [3U] 
                                                             >> 0x2aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [3U] 
                                                            >> 0x20U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1194,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1196,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1197,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1198,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1199,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1200,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1201,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1202,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1203,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1204,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1205,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1206,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1207,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1208,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1209,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1210,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1211,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1212,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [0U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1213,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1215,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1216,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1217,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1218,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1219,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1220,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1221,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1222,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+1223,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1224,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1225,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1226,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1227,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1228,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [0U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [0U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1229,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [1U]
                                                   [0U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [1U]
                                                  [0U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1230,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1231,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1232,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1234,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1235,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1236,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1237,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1238,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1239,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1240,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1241,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1242,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1243,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1244,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][0U]),16);
        bufp->chgCData(oldp+1245,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1246,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1247,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1248,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1249,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1250,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1251,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [0U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1252,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1253,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1254,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1255,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1256,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1257,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1258,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1260,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1261,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1262,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1264,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1266,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1267,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1268,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1269,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1270,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [0U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1271,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1272,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1273,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1274,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [0U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [0U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1275,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1276,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1277,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1279,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1280,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1282,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1283,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1284,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1285,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1286,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1287,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1288,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1289,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1292,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1293,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [1U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1294,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1296,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1297,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1298,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1299,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1300,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1301,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1302,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1303,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+1304,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1305,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1306,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1307,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1308,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1309,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [1U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [1U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1310,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [1U]
                                                   [1U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [1U]
                                                  [1U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1311,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1312,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1313,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1314,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1315,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1316,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1317,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1318,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1319,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1321,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1322,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1323,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1324,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1325,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][1U]),16);
        bufp->chgCData(oldp+1326,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1328,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1329,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1330,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1331,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1332,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1333,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1334,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1335,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1336,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1337,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1338,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1339,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1340,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1341,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1342,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1343,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1344,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1345,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1346,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1347,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1348,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1349,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1350,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1351,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [1U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1352,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1353,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1354,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1355,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [1U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [1U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1356,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1357,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1358,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1359,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1360,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1361,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1362,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1363,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1364,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1365,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1366,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1367,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1368,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1369,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1371,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1372,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1373,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1374,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1375,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1376,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1377,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1378,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1379,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1381,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1382,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1383,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1384,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+1385,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1386,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1387,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1388,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1389,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1390,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [2U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [2U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1391,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [1U]
                                                   [2U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [1U]
                                                  [2U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1392,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1393,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1394,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1395,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1396,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1397,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1398,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1399,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1400,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1401,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1402,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1403,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1404,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1405,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1406,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][2U]),16);
        bufp->chgCData(oldp+1407,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1408,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1409,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1410,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1411,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1412,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1413,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1414,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1415,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1416,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1417,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1418,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1419,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1420,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1421,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1422,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1423,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1424,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1425,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1426,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1427,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1428,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1429,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1430,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1431,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1432,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [2U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1433,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1434,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1435,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1436,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [2U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [2U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1437,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1438,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1439,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1440,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1441,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1442,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1443,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1444,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1445,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1446,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1447,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1448,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1449,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1450,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1451,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1452,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1453,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1454,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1455,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0x1aU)))),5);
        bufp->chgCData(oldp+1456,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1457,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1458,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1459,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1460,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1461,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1462,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1463,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1464,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1465,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+1466,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1467,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1468,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1469,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1470,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [1U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1471,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [3U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [1U]
                                                         [3U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1472,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [1U]
                                                   [3U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [1U]
                                                  [3U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1473,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1474,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1475,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [1U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1476,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1477,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1478,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1479,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1480,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1481,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1482,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1483,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1484,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1485,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1486,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1487,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [1U][3U]),16);
        bufp->chgCData(oldp+1488,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1489,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1490,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1491,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [1U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1492,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1493,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1494,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [1U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1495,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1496,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1497,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1498,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1499,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1500,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1501,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1502,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1503,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1504,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1505,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1506,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1507,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1508,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1509,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1510,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1511,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1512,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1513,((0xffffU & (IData)(
                                                     (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                      [3U] 
                                                      >> 0x10U)))),16);
        bufp->chgBit(oldp+1514,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1515,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U] 
                                                         >> 0x1aU))))));
        bufp->chgSData(oldp+1516,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1517,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [3U] 
                                                             >> 0x1aU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                            [3U] 
                                                            >> 0x10U)) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1518,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1519,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1520,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1521,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1522,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1523,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1524,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1525,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1527,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1528,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1529,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1530,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1531,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1532,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1533,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1534,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1535,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1536,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [0U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1537,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1538,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1539,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1540,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1541,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1542,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1543,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1544,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1545,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1546,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+1547,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1548,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1549,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1550,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1551,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][0U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1552,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [0U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [0U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1553,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [2U]
                                                   [0U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [2U]
                                                  [0U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1554,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1555,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1556,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [0U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1557,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1558,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1559,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1560,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1561,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1562,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1563,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1564,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1565,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1566,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1567,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1568,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][0U]),16);
        bufp->chgCData(oldp+1569,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1570,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1571,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1572,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][0U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1573,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1574,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1575,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [0U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1576,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1577,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1578,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1579,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1580,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1581,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1582,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1583,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1584,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1585,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1586,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1587,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1588,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1589,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1590,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1591,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1592,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1593,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1594,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [0U]))),16);
        bufp->chgBit(oldp+1595,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1596,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [0U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1597,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1598,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [0U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [0U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1599,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1600,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1601,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1602,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1603,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1604,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1605,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1606,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1607,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1608,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1609,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1610,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1611,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1612,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1613,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1614,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1615,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1616,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1617,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [1U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1618,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1619,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1620,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1621,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1622,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1623,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1624,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1625,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1626,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1627,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+1628,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1629,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1630,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1631,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1632,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][1U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1633,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [1U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [1U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1634,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [2U]
                                                   [1U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [2U]
                                                  [1U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1635,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1636,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1637,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [1U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1638,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1639,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1640,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1641,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1642,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1643,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1644,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1645,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1646,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1647,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1648,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1649,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][1U]),16);
        bufp->chgCData(oldp+1650,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1651,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1652,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1653,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][1U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1654,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1655,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1656,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [1U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1657,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1658,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1659,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1660,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1661,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1662,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1663,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1664,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1665,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1666,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1667,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1668,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1669,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1670,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1671,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1672,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1673,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1674,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1675,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [1U]))),16);
        bufp->chgBit(oldp+1676,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1677,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [1U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1678,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1679,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [1U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [1U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1680,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1681,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1682,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1683,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1684,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1685,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1686,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1687,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1688,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1689,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1690,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1691,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1692,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [2U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1693,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1694,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1695,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1696,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1697,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1698,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [2U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1699,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1700,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1701,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1702,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1703,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1704,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1705,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1706,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1707,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1708,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+1709,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1710,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1711,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1712,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1713,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][2U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1714,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [2U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [2U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1715,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [2U]
                                                   [2U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [2U]
                                                  [2U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1716,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1717,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1718,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [2U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1719,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1720,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1721,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1722,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1723,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1724,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1725,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1726,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1727,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1728,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1729,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1730,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][2U]),16);
        bufp->chgCData(oldp+1731,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1732,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1733,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1734,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][2U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1735,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1736,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1737,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [2U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1738,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1739,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1740,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1741,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1742,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1743,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1744,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1745,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1746,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1747,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1748,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1749,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1750,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1751,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1752,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1753,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1754,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1755,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1756,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [2U]))),16);
        bufp->chgBit(oldp+1757,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1758,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [2U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1759,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1760,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [2U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [2U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1761,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1762,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1763,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1764,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgSData(oldp+1765,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x),16);
        bufp->chgSData(oldp+1766,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__nxt_input_x),16);
        bufp->chgBit(oldp+1767,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run_latched));
        bufp->chgBit(oldp+1768,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_1));
        bufp->chgBit(oldp+1769,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_2));
        bufp->chgBit(oldp+1770,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__start_passthrough_3));
        bufp->chgBit(oldp+1771,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__run));
        bufp->chgBit(oldp+1772,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1773,((1U & (IData)((vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                               [3U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1774,((1U & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1775,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in));
        bufp->chgBit(oldp+1776,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in));
        bufp->chgBit(oldp+1777,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in));
        bufp->chgCData(oldp+1778,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1779,((0x1fU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                    [3U] 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1780,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp1_in),5);
        bufp->chgCData(oldp+1781,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_exp2_in),5);
        bufp->chgSData(oldp+1782,((0x1fffU & (vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b 
                                              >> 0xcU))),13);
        bufp->chgSData(oldp+1783,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_product_in),13);
        bufp->chgBit(oldp+1784,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign1_in) 
                                 ^ (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sign2_in))));
        bufp->chgCData(oldp+1785,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp),5);
        bufp->chgBit(oldp+1786,((IData)((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgBit(oldp+1787,((1U & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_carryout_in) 
                                           & (0x1fU 
                                              == (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_sum_exp)))) 
                                       & ((~ ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum) 
                                              >> 4U)) 
                                          & (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1) 
                                              & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2)) 
                                             >> 4U))))));
        bufp->chgSData(oldp+1788,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result),16);
        bufp->chgSData(oldp+1789,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_significand_product_selected),10);
        bufp->chgCData(oldp+1790,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),5);
        bufp->chgBit(oldp+1791,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_shifted_in));
        bufp->chgBit(oldp+1792,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_not_shifted_in));
        bufp->chgBit(oldp+1793,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)
                                        : (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)))));
        bufp->chgBit(oldp+1794,((1U & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                        ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                           [2U][3U] 
                                           >> 0xfU)
                                        : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                           >> 0xfU)))));
        bufp->chgSData(oldp+1795,((0x1fffU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                               ? ((
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))
                                               : ((
                                                   ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [3U] 
                                                         >> 0xaU))) 
                                                    << 0xcU) 
                                                   | (0xffcU 
                                                      & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                         [2U]
                                                         [3U] 
                                                         << 2U))) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff)))))),13);
        bufp->chgSData(oldp+1796,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                    ? (((0U != (0x1fU 
                                                & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                   [2U]
                                                   [3U] 
                                                   >> 0xaU))) 
                                        << 0xcU) | 
                                       (0xffcU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                  [2U]
                                                  [3U] 
                                                  << 2U)))
                                    : (((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                  << 2U))))),13);
        bufp->chgSData(oldp+1797,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_shifted_in),13);
        bufp->chgSData(oldp+1798,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__frac_not_shifted_in),13);
        bufp->chgCData(oldp+1799,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out)
                                             ? (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                [2U]
                                                [3U] 
                                                >> 0xaU)
                                             : ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_result) 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1800,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in),5);
        bufp->chgBit(oldp+1801,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_out));
        bufp->chgBit(oldp+1802,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in));
        bufp->chgSData(oldp+1803,((0x1fffU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed))),13);
        bufp->chgSData(oldp+1804,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sum_in),13);
        bufp->chgBit(oldp+1805,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_out));
        bufp->chgBit(oldp+1806,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in));
        bufp->chgCData(oldp+1807,(((0U == (0x1fffU 
                                           & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed)))
                                    ? 0U : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_in))),5);
        bufp->chgCData(oldp+1808,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in),5);
        bufp->chgSData(oldp+1809,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgCData(oldp+1810,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                    << 2U) | (((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))))),5);
        bufp->chgSData(oldp+1811,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                  [2U][3U]),16);
        bufp->chgCData(oldp+1812,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff))),5);
        bufp->chgBit(oldp+1813,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__cmp_out));
        bufp->chgCData(oldp+1814,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp),6);
        bufp->chgCData(oldp+1815,((0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                            [2U][3U] 
                                            >> 0xaU))),6);
        bufp->chgCData(oldp+1816,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add1__DOT__diff),6);
        bufp->chgBit(oldp+1817,((0U != (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul_final_exp))));
        bufp->chgBit(oldp+1818,((0U != (0x1fU & (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_outputs
                                                 [2U]
                                                 [3U] 
                                                 >> 0xaU)))));
        bufp->chgSData(oldp+1819,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac1_signed),14);
        bufp->chgSData(oldp+1820,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__frac2_signed),14);
        bufp->chgSData(oldp+1821,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__sum_signed),14);
        bufp->chgSData(oldp+1822,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add2__DOT__change_to_unsigned__DOT__rfrac_signed),14);
        bufp->chgBit(oldp+1823,(((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf) 
                                 | ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag) 
                                    | (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf)))));
        bufp->chgCData(oldp+1824,((0x1fU & (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result))),5);
        bufp->chgSData(oldp+1825,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_frac),13);
        bufp->chgCData(oldp+1826,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__shifted_amount),5);
        bufp->chgCData(oldp+1827,((0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_carry_in)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_exp_max_s3_in))
                                             : (IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result)))),5);
        bufp->chgBit(oldp+1828,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__ovf));
        bufp->chgBit(oldp+1829,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__unf));
        bufp->chgCData(oldp+1830,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_exp1),6);
        bufp->chgCData(oldp+1831,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_shifted_amount),6);
        bufp->chgCData(oldp+1832,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__u_result),6);
        bufp->chgSData(oldp+1833,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_this),12);
        bufp->chgSData(oldp+1834,((((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add_sign_in) 
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
        bufp->chgBit(oldp+1835,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__round_flag));
        bufp->chgSData(oldp+1836,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__add3__DOT__rounded_fraction),12);
        bufp->chgSData(oldp+1837,((0xffffU & (IData)(
                                                     vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                     [3U]))),16);
        bufp->chgBit(oldp+1838,((0U != (0x1fU & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+1839,((0U != (0x1fU & (IData)(
                                                        (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                         [3U] 
                                                         >> 0xaU))))));
        bufp->chgSData(oldp+1840,((((0U != (0x1fU & 
                                            ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                             >> 0xaU))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__input_x) 
                                                   << 2U)))),13);
        bufp->chgSData(oldp+1841,((((0U != (0x1fU & (IData)(
                                                            (vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                             [3U] 
                                                             >> 0xaU)))) 
                                    << 0xcU) | (0xffcU 
                                                & ((IData)(
                                                           vlSelfRef.systolic_array_tb__DOT__DUT__DOT__weights
                                                           [3U]) 
                                                   << 2U)))),13);
        bufp->chgIData(oldp+1842,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul1__DOT__MUL__DOT__frac_out_26b),26);
        bufp->chgCData(oldp+1843,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp1),5);
        bufp->chgCData(oldp+1844,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_exp2),5);
        bufp->chgCData(oldp+1845,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__genblk4__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__mac_inst.__PVT__mul2__DOT__add_EXPs__DOT__r_sum),5);
        bufp->chgBit(oldp+1846,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_start));
        bufp->chgCData(oldp+1847,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_count),3);
        bufp->chgBit(oldp+1848,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_start));
        bufp->chgCData(oldp+1849,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.add_count),2);
        bufp->chgBit(oldp+1850,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.MAC_shift));
        bufp->chgBit(oldp+1851,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.out_fifo_shift));
        bufp->chgCData(oldp+1852,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[0]),4);
        bufp->chgCData(oldp+1853,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[1]),4);
        bufp->chgCData(oldp+1854,(vlSymsp->TOP__systolic_array_tb__DOT__DUT__DOT__control_unit_if.iteration[2]),4);
        bufp->chgSData(oldp+1855,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][3U]),16);
        bufp->chgSData(oldp+1856,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1857,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][2U]),16);
        bufp->chgSData(oldp+1858,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1859,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][1U]),16);
        bufp->chgSData(oldp+1860,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1861,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [3U][0U]),16);
        bufp->chgSData(oldp+1862,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1863,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][3U]),16);
        bufp->chgSData(oldp+1864,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1865,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][2U]),16);
        bufp->chgSData(oldp+1866,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1867,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][1U]),16);
        bufp->chgSData(oldp+1868,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1869,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [2U][0U]),16);
        bufp->chgSData(oldp+1870,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1871,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][3U]),16);
        bufp->chgSData(oldp+1872,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1873,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][2U]),16);
        bufp->chgSData(oldp+1874,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1875,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][1U]),16);
        bufp->chgSData(oldp+1876,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1877,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [1U][0U]),16);
        bufp->chgSData(oldp+1878,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1879,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][3U]),16);
        bufp->chgSData(oldp+1880,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1881,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][2U]),16);
        bufp->chgSData(oldp+1882,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1883,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][1U]),16);
        bufp->chgSData(oldp+1884,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1885,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__MAC_inputs
                                  [0U][0U]),16);
        bufp->chgSData(oldp+1886,(((1U & ((0x3fffffffU 
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
        bufp->chgSData(oldp+1887,(((1U & ((0x3fffffffU 
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
                                                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__3__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0)))))),16);
        bufp->chgSData(oldp+1888,(((1U & ((0x3fffffffU 
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
                                                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__2__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0)))))),16);
        bufp->chgSData(oldp+1889,(((1U & ((0x3fffffffU 
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
                                                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__1__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0)))))),16);
        bufp->chgSData(oldp+1890,(((1U & ((0x3fffffffU 
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
                                                      : (IData)(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk5__BRA__0__KET____DOT__add_inst__DOT__add3__DOT____VdfgRegularize_h54187199_0_0)))))),16);
        bufp->chgSData(oldp+1891,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__3__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1892,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__2__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1893,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__1__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1894,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk2__BRA__0__KET____DOT__i_fifo__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1895,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__3__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1896,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__2__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1897,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__1__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
        bufp->chgSData(oldp+1898,((0xffffU & vlSelfRef.systolic_array_tb__DOT__DUT__DOT__genblk3__BRA__0__KET____DOT__ps_fifos__DOT__fifo_mem[0U])),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+1899,(vlSelfRef.systolic_array_tb__DOT__DUT__DOT__row_out),2);
        bufp->chgBit(oldp+1900,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.out_en));
        bufp->chgCData(oldp+1901,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.row_out),2);
        bufp->chgQData(oldp+1902,(vlSymsp->TOP__systolic_array_tb__DOT__memory_if.array_output),64);
    }
    bufp->chgBit(oldp+1904,(vlSelfRef.systolic_array_tb__DOT__tb_clk));
    bufp->chgIData(oldp+1905,(vlSelfRef.systolic_array_tb__DOT__z),32);
    bufp->chgIData(oldp+1906,(vlSelfRef.systolic_array_tb__DOT__y),32);
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
